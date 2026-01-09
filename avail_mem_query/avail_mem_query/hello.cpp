#include <cstdio>
#include <cstdint>
#include <cstdlib>

#define _USE_MATH_DEFINES   1
#include <math.h>
#include <cmath>
#include <utility>
#include <algorithm>
#include <type_traits>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#if _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#include <sys/sysinfo.h>
#endif // _WIN32


#define REMOVEALL_IN_CONTAINER(container)   std::decay<decltype(container)>::type().swap(container)


static inline auto FetchAvailableMemorySize() -> size_t
{
#if _WIN32
    MEMORYSTATUSEX memInfo{ .dwLength = sizeof(MEMORYSTATUSEX) };

    if (GlobalMemoryStatusEx(&memInfo)) {
        return memInfo.ullAvailPhys;
    }
    else
    {
        fprintf(stderr, "Available memory size fetch failed: %lu\n", GetLastError());
        return 0U;
    }
#else
    // Linux system
    FILE* fp = fopen("/proc/meminfo", "r");
    if (fp == nullptr) {
        return 0U;
    }

    char line[256]{ };
    size_t totalMemSize = 0U;
    size_t freeMemSize = 0U;
    size_t availMemSize = 0U;
    size_t buffers = 0U;
    size_t cachedSize = 0U;

    while (fgets(line, sizeof(line), fp) != nullptr)
    {
        const char* key = strtok(line, ":");
        const char* value = strtok(nullptr, ":");

        if (key != nullptr && value != nullptr)
        {
            unsigned long long val = 0ULL;
            sscanf(value, "%llu", &val);
            val *= 1024ULL;                 // Convert it to bytes

            if (strcmp(key, "MemTotal") == 0) {
                totalMemSize = val;
            }
            else if (strcmp(key, "MemFree") == 0) {
                freeMemSize = val;
            }
            else if (strcmp(key, "MemAvailable") == 0) {
                availMemSize = val;
            }
            else if (strcmp(key, "Buffers") == 0) {
                buffers = val;
            }
            else if (strcmp(key, "Cached") == 0) {
                cachedSize = val;
            }
        }
    }

    fclose(fp);

    // If `availMemSize` does not exist, just estimate it.
    if (availMemSize == 0U) {
        availMemSize = info->free + info->buffers + info->cached;
    }

    return availMemSize;
#endif // _WIN32
}


extern "C" auto CPPTest() -> void
{
    std::unordered_map<int, std::string> hashMap{ std::pair(0, "hello"), std::pair(1, "world") };
    std::unordered_map<int, std::string> hashMap1{ std::pair(1, "world"), std::pair(2, "thanks") };

    hashMap.merge(hashMap1);

    printf("The element count is the hashMap: %zu\n", hashMap.size());

    struct MyObject
    {
        int elem = 0;

        ~MyObject()
        {
            printf("MyObject destructor called! elem = %d\n", elem);
        }
    };

    std::vector<MyObject> myvec;
    MyObject &refObj = myvec.emplace_back();
    refObj.elem = 100;
    REMOVEALL_IN_CONTAINER(myvec);

    auto modify = [](int* p) {
        *p = 100;
    };
    std::vector<int> vec{ 1, 2, 3, 4 };
    modify(&vec[0]);

    const size_t availMemSize = FetchAvailableMemorySize();
    printf("Currently available memory size: %.2f MB\n", double(availMemSize) / (1024.0 * 1024.0));

    puts("CPPTest() completed!");
}


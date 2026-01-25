#include <cstdio>
#include <cstdint>
#include <cstdlib>
#include <cstring>

#define _USE_MATH_DEFINES   1

#ifndef __USE_MISC
#define __USE_MISC          1
#endif

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
#include <Psapi.h>
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
    if (fp == nullptr) return 0U;

    char line[256]{ };
    size_t totalMemSize = 0U;
    size_t freeMemSize = 0U;
    size_t availMemSize = 0U;
    size_t buffers = 0U;
    size_t cachedSize = 0U;

    while (fgets(line, sizeof(line), fp) != nullptr)
    {
        const char* const key = strtok(line, ":");
        const char* const value = strtok(nullptr, ":");

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
        availMemSize = freeMemSize + buffers + cachedSize;
    }

    return availMemSize;
#endif // _WIN32
}

static inline auto FetchCurrentProcessMemoryUsage() -> size_t
{
#if _WIN32
    PROCESS_MEMORY_COUNTERS pmc{ };
    const HANDLE hProcess = GetCurrentProcess();

    if (GetProcessMemoryInfo(hProcess, &pmc, sizeof(pmc)))
    {
        printf("Current process used working set size: %.2f MB\n", double(pmc.WorkingSetSize) / (1024.0 * 1024.0));
        printf("Current process used peak working set size: %.2f MB\n", double(pmc.PeakWorkingSetSize) / (1024.0 * 1024.0));
        printf("Current process used page file size: %.2f MB\n", double(pmc.PagefileUsage) / (1024.0 * 1024.0));
        printf("Current process used peak page file size: %.2f MB\n", double(pmc.PeakPagefileUsage) / (1024.0 * 1024.0));
        printf("Current process page fault count: %lu\n", pmc.PageFaultCount);

        return pmc.WorkingSetSize;
    }
    else
    {
        fprintf(stderr, "Current process memory usage fetch failed: %lu\n", GetLastError());
        return 0U;
    }
#else
    FILE* fp = fopen("/proc/self/statm", "r");
    if (fp == nullptr) return 0U;

    size_t vmPages = 0UL;
    size_t residentPages = 0UL;
    size_t sharePages = 0UL;
    size_t codeSegPages = 0UL;
    size_t libPages = 0UL;
    size_t dataPages = 0UL;
    size_t dirtyPages = 0UL;

    const size_t pageSize = sysconf(_SC_PAGESIZE);
    
    fscanf(fp, "%zu %zu %zu %zu %zu %zu %zu",
        &vmPages, &residentPages, &sharePages, &codeSegPages, &libPages, &dataPages, &dirtyPages);
    
    fclose(fp);

    printf("Current process used virtual memory pages: %zu, %.2f MB\n", vmPages, double(vmPages * pageSize) / (1024.0 * 1024.0));
    printf("Current process used resident set pages: %zu, %.2f MB\n", residentPages, double(residentPages * pageSize) / (1024.0 * 1024.0));
    printf("Current process used shared memory pages: %zu, %.2f MB\n", sharePages, double(sharePages * pageSize) / (1024.0 * 1024.0));
    printf("Current process used code segment pages: %zu, %.2f MB\n", codeSegPages, double(codeSegPages * pageSize) / (1024.0 * 1024.0));
    printf("Current process used library pages: %zu, %.2f MB\n", libPages, double(libPages * pageSize) / (1024.0 * 1024.0));
    printf("Current process used data+stack pages: %zu, %.2f MB\n", dataPages, double(dataPages * pageSize) / (1024.0 * 1024.0));
    printf("Current process used dirty pages: %zu, %.2f MB\n", dirtyPages, double(dirtyPages * pageSize) / (1024.0 * 1024.0));

    return vmPages * pageSize;

#endif
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

    void* mem = malloc(256U * 1024U * 1024U);
    FetchCurrentProcessMemoryUsage();
    free(mem);

    puts("CPPTest() completed!");
}


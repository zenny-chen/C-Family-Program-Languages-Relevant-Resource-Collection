# C Family Programming Languages Relevant Resource Collection
类C语言编程相关

<br />

- [Objective-C Runtime](https://developer.apple.com/documentation/objectivec?language=objc)
- [Objective-C Runtime Programming Guide](https://developer.apple.com/library/archive/documentation/Cocoa/Conceptual/ObjCRuntimeGuide/Introduction/Introduction.html?language=objc#//apple_ref/doc/uid/TP40008048)
- [Standard C++ Library reference](http://www.cplusplus.com/reference/)
- [C2x](https://gustedt.wordpress.com/2018/11/12/c2x/)
- [Attributes in Clang](https://clang.llvm.org/docs/AttributeReference.html)
- [值得我们学习的C语言开源项目汇总](https://www.toutiao.com/a6816559091704398339/)
- [详解C语言中的stdin，stdout，stderr](http://blog.csdn.net/Crazy_Tengt/article/details/72717144)
- [C语言压缩文件和用MD5算法校验文件完整性的实例教程_C 语言](https://yq.aliyun.com/ziliao/119635)
- [C/C++下scanf的%匹配以及过滤字符串问题](https://www.toutiao.com/a6659550631625228808)
- [C语言的JSON库Jansson](https://www.toutiao.com/a6751005440798114315/)
- [链接过程中的符号重定位_C底层](http://blog.csdn.net/darkfaker/article/details/79370796)
- [类Unix系统中如何获取另一个程序的输出内容](https://baike.baidu.com/item/popen)
- [使用popen执行shell命令并获取返回结果](https://www.cnblogs.com/hiawind/p/9089288.html)
- [C语言中的系统库system函数](https://baike.baidu.com/item/system/15078602?fr=aladdin)
- C语言将控制台输出内容转存到指定文件：`freopen(filePath, "w", stdout);`。用完之后再用`fclose`关闭文件即可。在转存过程中，控制台内容仍然会输出。
- GCC可直接使用`#pragma unroll`或是`_Pragma("unroll")`对循环做展开。
- GCC/Clang编译器下要使用<intrin.h>，则得：`#include <x86intrin.h>`。
- [C Programming/complex.h/carg](https://en.wikibooks.org/wiki/C_Programming/complex.h/carg)
- [《高级语言内的单指令多数据流计算(SIMD)》整理](https://www.cnblogs.com/zenny-chen/archive/2012/05/06/2486030.html)
- [gdb到底是怎样实现的？](https://www.toutiao.com/a6699652803918299655)
- [调试程序时，设置断点的原理是什么？](https://www.toutiao.com/a6651660887507599886/)
- [gdb（debugger）加入软件断点的本质原理分析](https://www.toutiao.com/a6828945264800170504/)
- [linux下的C语言开发（makefile编写详解）](https://www.toutiao.com/i6763898618379239950/)
- [用Verilog实现流水移位寄存器，请尽量不要使用“阻塞赋值”](https://www.toutiao.com/a6746164678080086531/)

<br />

## C++17起废弃的标准C头文件

1. \<cstdalign\>
1. \<cstdbool\>
1. \<ccomplex\>（这个头文件可以用`<complex>`来取代）

<br />

## 我的一些C语言有趣函数库

- 三大操作系统获取当前系统主存大小：

```c
#ifdef _WIN32
#include <Windows.h>
#elif defined(__APPLE__)
#include <sys/types.h>
#include <sys/sysctl.h>
#else
#include <unistd.h>
#endif

size_t system_physical_ram()
{
#ifdef _WIN32
	MEMORYSTATUSEX ram;
	ram.dwLength = sizeof (ram);
	GlobalMemoryStatusEx(&ram);
	return ram.ullTotalPhys * 1024;
#elif defined(__APPLE__)
	uint64_t ram = 0;
	size_t len = sizeof(ram);
	if (sysctlbyname("hw.memsize", &ram, &len, NULL, 0) == 0) {
		return ram;
	}
	return 0;
#else
	size_t ps = sysconf(_SC_PAGESIZE);
	size_t pn = sysconf(_SC_PHYS_PAGES);
	return ps * pn;
#endif
}
```

- 统计一个无符号32位整型有多少个比特为1：

```c
static unsigned PopulateOnes(unsigned n)
{
    unsigned tmp = 0x55555555 & (n >> 1);
    n -= tmp;
    
    tmp = 0x33333333 & (n >> 2);
    n &= 0x33333333;
    n += tmp;
    
    n += n >> 4;
    n &= 0x0f0f0f0f;
    n *= 0x01010101;
    
    return n >> 24;
}
```
<br />

## 我的一些C++函数库

- 在编译时统计一个无符号32位整数有多少比特1：

```cpp
template <unsigned N>
struct GetOnes
{
    enum
    {
        ONES = ((N & 1) == 0 ? 0 : 1) + GetOnes < (N >> 1) >::ONES
    };
};

template <>
struct GetOnes<0>
{
    enum
    {
        ONES = 0
    };
};
```

- 使用指定整数常量的数值对齐

```cpp
template <unsigned ALIGNMENT>
static inline unsigned GetAlignedValue(unsigned n)
{
    static_assert(GetOnes<ALIGNMENT>::ONES == 1, "Invalid ALIGNMENT!!");

    return (n + (ALIGNMENT - 1U)) & ~(ALIGNMENT - 1U);
}
```

- 编译时获取一个整数至少需要用多少比特来表示：

```cpp
template <uint64_t VALUE, int pos = 0>
struct GetBitCountValueStruct
{
    enum
    {
        BIT_COUNT = (GetBitCountValueStruct<(VALUE >> 1), pos + 1>::BIT_COUNT > (pos + 1)) ?
                    GetBitCountValueStruct<(VALUE >> 1), pos + 1>::BIT_COUNT :
                    ((VALUE & 1) != 0 ? (pos + 1) : 1)
    };
};

template <int pos>
struct GetBitCountValueStruct<0, pos>
{
    enum
    {
        BIT_COUNT = 1
    };
};

template <uint64_t VALUE>
static inline constexpr int GetBitCountInValue(void)
{
    return GetBitCountValueStruct<VALUE>::BIT_COUNT;
}
```



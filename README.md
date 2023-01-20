# C Family Programming Languages Relevant Resource Collection
类C语言编程相关

<br />

- [ISO C Working Group's official website](http://www.open-std.org/jtc1/sc22/wg14/www/wg14_document_log.htm)
- [Objective-C Runtime](https://developer.apple.com/documentation/objectivec?language=objc)
- [Objective-C Runtime Programming Guide](https://developer.apple.com/library/archive/documentation/Cocoa/Conceptual/ObjCRuntimeGuide/Introduction/Introduction.html?language=objc#//apple_ref/doc/uid/TP40008048)
- [http://www.cplusplus.com/reference/](http://www.cplusplus.com/reference/)
- [https://en.cppreference.com](https://en.cppreference.com/w/)
- [Clang Contents](https://clang.llvm.org/docs/index.html)
- [Attributes in Clang](https://clang.llvm.org/docs/AttributeReference.html)
- [Clang Language Extensions](https://clang.llvm.org/docs/LanguageExtensions.html)
- [GCC Extensions to the C Language Family](https://gcc.gnu.org/onlinedocs/gcc/C-Extensions.html#C-Extensions)
- [P1467R5 Extended floating-point types and standard names](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p1467r5.html)
- [Eclipse官方帮助文档](https://help.eclipse.org/latest/)
- Eclipse下设置程序运行的环境变量：`${env_var:MY_ENVIRONMENT_VARIABLE_HERE}`。
- Eclipse下对汇编文件的使用：Eclipse下汇编文件后缀名必须用 **.S** （即大写的S）。在项目工程中选中一个汇编源文件，然后鼠标右键，选择Properties。在C/C++ Build下先点击Tool Chain Editor，确认Select Tool所选的工具已经是GCC Assembler。要调试该汇编文件的话则随后点击Settings，点击General，在Assembler flags一栏中添加 **`-g`** 即可调试。
- Eclipse在CUDA工程下添加GAS工具：鼠标右键项目工程，选择properties，点击C/C++ Build，再点击Tool Chain Editor。在下方used tools一栏点击右侧的Select Tools，然后在左侧列表中选中GCC Assembler，最后点击Add tool。
- [Nsight Eclipse Plugins Edition Getting Started Guide](https://docs.nvidia.com/cuda/nsight-eclipse-plugins-guide/index.html)
- CLion下常用快捷键——`点两次shift`：调出文件搜索工具栏；`ctrl+shift+f`：调出在当前工程搜索关键词的工具栏。
- [Clion中单行注释、多行注释及取消注释快捷键示例](https://blog.csdn.net/pan66rui/article/details/107841452)
- [CLion Hexadecimal view](https://www.jetbrains.com/help/clion/using-hexadecimal-view.html)
- CLion中查看当前源文件的所定义的所有函数、全局变量与类型：
1. 用CLion打开当前源文件
1. 点击菜单栏上的Navigate，选择File Structure
1. 也可使用快捷键：Ctrl + F12
- [CLion遇到Out Of Memory问题的解决方法](http://it.taocms.org/12/12678.htm)（点击菜单栏的 **Help**，然后选择“**Edit Custom VM Options...**”项即可编辑）
- [值得我们学习的C语言开源项目汇总](https://www.toutiao.com/a6816559091704398339/)
- [C编译器剖析_1.5 结合C语言来学汇编_浮点数运算(比较大小)](https://blog.csdn.net/sheisc/article/details/43017909)
- [详解C语言中的stdin，stdout，stderr](http://blog.csdn.net/Crazy_Tengt/article/details/72717144)
- [\<uchar.h\>中的 **c16rtomb** ](https://cloud.tencent.com/developer/section/1009566)
- [C语言压缩文件和用MD5算法校验文件完整性的实例教程_C 语言](https://yq.aliyun.com/ziliao/119635)
- [C/C++下scanf的%匹配以及过滤字符串问题](https://www.toutiao.com/a6659550631625228808)
- [Clang官方对__has_include与\#include_next的举例](https://clang.llvm.org/docs/LanguageExtensions.html#include-file-checking-macros)
- [Wrapper Headers（GCC对\#include_next的官方解释）](https://gcc.gnu.org/onlinedocs/cpp/Wrapper-Headers.html)
- [（有用的C++ proposal）Familiar template syntax for generic lambdas](http://open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0428r2.pdf)
- C++将一个类对象隐式转换为一个基本类型
```cpp
#include <cstdio>

struct MyID
{
    unsigned value : 24;
    unsigned type : 8;

    MyID() : value(0), type(0) { }
    MyID(const unsigned &val) : value(val), type(0) { }

    inline operator unsigned () const
    {
        return value;
    }
};

extern "C" void CPPTest()
{
    printf("size is: %zu\n", sizeof(MyID));

    MyID aID = 100;
    printf("aID value = %u, type = %d\n", aID.value, aID.type);

    const unsigned x = aID;
    printf("x = %u\n", x);
}
```
- [C++的RAII与智能指针](https://zhuanlan.zhihu.com/p/466904205)
- [C++ vector清空元素的三种方法](https://blog.csdn.net/weixin_30897079/article/details/97119054)
- [如何在C++ 11中创建线程对象数组？](http://cn.voidcc.com/question/p-vgibagru-zc.html)
- [C++11 并发指南五(std::condition_variable 详解)](https://www.cnblogs.com/haippy/p/3252041.html)
- [C++11中获取当前线程的ID](https://en.cppreference.com/w/cpp/thread/get_id)：使用 **`std::this_thread::get_id()`**
- [std::chrono::duration_cast](https://en.cppreference.com/w/cpp/chrono/duration/duration_cast)（除了 **`std::chrono::high_resolution_clock`**，还可使用 **`std::chrono::steady_clock`** 作为时间戳）
- [一文读懂C++右值引用和std::move](https://zhuanlan.zhihu.com/p/335994370)
- [优先使用using，而非typedef](https://zhuanlan.zhihu.com/p/266140466)
- C++11对某一类型做cv限定符的移除并声明一个对象
```cpp
    const int c = 100;
    std::decay<decltype(c)>::type a = c;        // a为int类型
```
- C++11原生字符串字面量（Raw string literal）
```cpp
    const char16_t* raw_u16string = uR"(你好，世界！)";
    std::u16string u16str(raw_u16string);
    printf(R"(The raw string length is: %zu
            )", u16str.length());
```
- C++11之后，新型函数类型声明方式：
```cpp
#include <cstdio>
#include <functional>

// 老旧的函数声明方式
static int(* Foo(int a))();

extern "C" void CPPTest(void)
{
    // 老旧的函数类型声明方式
    const std::function<int (void)> &f = [](void) -> int {
        return 100;
    };

    // 这里是对int类型构造器的调用，因此a的类型是int
    decltype(int()) a = 100;

    printf("value = %d\n", a + f());

    // ==== 以下为C++11之后新型函数类型的声明方式 ====

    typedef auto func_type(void) -> int;
    using ft = auto (void) -> int;

    const std::function<auto () -> int>& f2 = [] { return -100; };

    printf("value = %d\n", a + f() + f2());

    auto (*pFunc)(int) -> auto (*)() -> int = &Foo;
    a = pFunc(20)();
    printf("Finally, a = %d\n", a);
}

static int Foo2() { return 10; }

// C++11之后新型函数声明方式
static auto Foo(int a) -> auto (*)() -> int
{
    printf("a is %d in Foo!\n", a);
    return &Foo2;
}
```
- [std::initializer_list](https://en.cppreference.com/w/cpp/utility/initializer_list)
- C++11中对 **`std::initializer_list`** 的具体使用：
```cpp
#include <cstdio>
#include <initializer_list>

struct MyObject
{
    int a, b;
};

struct MyVirtualObj
{
    int a, b;

    // Non POD type, needs the constructor with std::initializer_list
    MyVirtualObj(const std::initializer_list<int>& initList)
    {
        a = 0; b = 0;

        int index = 0;
        for (auto const& data : initList)
        {
            const int currIndex = index++;
            if (currIndex == 0)
            {
                a = data;
                continue;
            }
            if (currIndex == 1)
            {
                b = data;
                continue;
            }
        }
    }

    virtual void hello() const { }
};

extern "C" void CPPTest()
{
    // For Plain Old Data, use it directly
    MyObject obj1{ 1, 2 };

    MyVirtualObj obj2{ 10, 20 };
}
```
- [std::isnan](https://en.cppreference.com/w/cpp/numeric/math/isnan)
- [std::to_string](https://en.cppreference.com/w/cpp/string/basic_string/to_string)
- [C++/C++11中std::transform的使用](https://blog.csdn.net/fengbingchun/article/details/63252470)
- [c++ ostringstream的用法（c语言的sprintf）](https://blog.csdn.net/zhenguo26/article/details/80716075)
- [C++中输出/输入十六进制数](https://blog.csdn.net/woaijssss/article/details/93190865)
- C++中将std::string十六进制字符串转为整数：`std::strtoull`；整数转字符串：`std::to_string()`
- [C++11 std::strtol, std::strtoll](https://en.cppreference.com/w/cpp/string/byte/strtol)
- [User-defined literals (since C++11)](https://en.cppreference.com/w/cpp/language/user_literal)
- [std::atomic_thread_fence](https://en.cppreference.com/w/cpp/atomic/atomic_thread_fence)（**NOTES**: On x86 (including x86-64), atomic_thread_fence functions issue no CPU instructions and only affect compile-time code motion, except for std::atomic_thread_fence(std::memory_order::seq_cst), which issues the full memory fence instruction MFENCE）
- [std::is_same](https://en.cppreference.com/w/cpp/types/is_same)
- [C++14中的变量模板（variable template）](https://en.cppreference.com/w/cpp/language/variable_template)
- C++14中的泛型lambda表达式以及返回匿名结构体对象的函数
```cpp
#include <cstdio>

static auto Foo(int a, int b)
{
    struct { int a, b; } s{ a, b };
    return s;
}

extern "C" void CPPTest(void)
{
    auto const lam = [](auto a, auto b) {
        return a + b + decltype(a)(100);
    };

    auto const res = lam(10.5, 20.5);
    auto const [a, b] = Foo(1, 3);
    printf("a = %d, b = %d, res = %f\n", a, b, res);
}
```
- C++14中lambda捕获列表里定义局部对象：
```cpp
    struct
    {
        int a;
        int b;
    } s { 1, 2 };

    auto const lam = [x = s.a, y = s.b](int i) -> int {
        return x + y + i;
    };

    printf("The value is: %d\n", lam(10));
```
- [c++11-17 模板核心知识（四）—— 可变参数模板 Variadic Template](https://www.cnblogs.com/zhangyachen/p/13946450.html)
- [C++17 Structured binding declaration](https://en.cppreference.com/w/cpp/language/structured_binding)
- [C++17：内联变量](https://www.toutiao.com/article/7117584483603497472/)
- [c++17中的 constexpr lambda 表达式](https://docs.microsoft.com/zh-cn/cpp/cpp/lambda-expressions-constexpr)
- [C++17 template \<auto\>](https://mariusbancila.ro/blog/2018/05/23/template-auto/)
- [C++20不定参数个数的宏](https://en.cppreference.com/w/cpp/preprocessor/replace#Function-like_macros)
- C++20中泛型模板lambda表达式
```cpp
    // Generic template lambda in C++20
    auto const genericLambda = []<typename T, int size>(const T& a) -> T {
        if constexpr (size < 0) {
            puts("Illegal size!!");
        }
        printf("size is: %d\n", size);

        return a + T(1);
    };

    // Use the generic lambda
    auto const lamRet = genericLambda.template operator() <short, 4> (100);
    printf("Generic lambda result: %d\n", lamRet);
```
- [C++20新特性—consteval与constinit](https://blog.csdn.net/guxch/article/details/113641104)
- [**\_\_VA_OPT\_\_**](https://en.cppreference.com/w/cpp/preprocessor/replace)（For versions (3,4), replacement-list may contain the token sequence **\_\_VA_OPT\_\_** ( content ), which is replaced by content if **\_\_VA_ARGS\_\_** is non-empty, and expands to nothing otherwise.）
- [C++20的三路比较运算符 **`operator<=>`** ](https://blog.csdn.net/longji/article/details/104017451)
- [std::counting_semaphore](https://en.cppreference.com/w/cpp/thread/counting_semaphore)
- [std::jthread与std::thread的区别](https://blog.csdn.net/danshiming/article/details/117648806)
- [C++20 Coroutine实例教学](https://zhuanlan.zhihu.com/p/414506528)
- [C++20协程原理和应用](https://csdnnews.blog.csdn.net/article/details/124123024)
- **C++ Boost** 库配置额外的编译选项：**[Configuration](https://www.boost.org/build/doc/html/bbv2/overview/configuration.html)** 以及 **[Boost.Config](https://www.boost.org/doc/libs/1_80_0/libs/config/doc/html/index.html)**。
- [C语言的JSON库Jansson](https://www.toutiao.com/a6751005440798114315/)
- [链接过程中的符号重定位_C底层](http://blog.csdn.net/darkfaker/article/details/79370796)
- [类Unix系统中如何获取另一个程序的输出内容](https://baike.baidu.com/item/popen)
- [使用popen执行shell命令并获取返回结果](https://www.cnblogs.com/hiawind/p/9089288.html)
- [C语言中的系统库system函数](https://baike.baidu.com/item/system/15078602?fr=aladdin)
- C语言将控制台输出内容转存到指定文件：`freopen(filePath, "w", stdout);`。用完之后再用`fclose`关闭文件即可。在转存过程中，控制台内容仍然会输出。
- 循环展开：GCC可直接使用`#pragma unroll`或是`_Pragma("unroll")`对循环做展开。MSVC可使用：**`#pragma loop(hint_parallel(0))`** 或 **`_Pragma("loop(hint_parallel(0))")`**。
- [pragma gcc optimize](https://blog.csdn.net/u010796610/article/details/69352484)（另参考此文：[GCC 设置部分代码的优化级别](http://blog.chinaunix.net/uid-26334045-id-4743500.html)）
- [Clang对指定函数禁用优化](https://clang.llvm.org/docs/AttributeReference.html#optnone)（比如：
```cpp
void foo(void) [[ clang::optnone ]] {  }
```
）
- [gcc在代码中禁止某些warning](https://www.cnblogs.com/jhj117/p/6639111.html)
- [Suppressing Warnings in GCC and Clang](https://nelkinda.com/blog/suppress-warnings-in-gcc-and-clang/)
- MSVC禁用指定warning使用 **`/wd"warningID"`**。比如：**`/wd"4819"`** 用于禁用4819编号的警告。
- [gcc 编译 gcc warning 'variable tracking size limit exceeded' 原因及解决办法](https://blog.csdn.net/photon222/article/details/89217737)
- [严格别名规则“-fstrict-aliasing”和“-fno-strict-aliasing”及类型双关](https://www.cnblogs.com/aquester/p/10299471.html)
- GCC对某一函数启用`-O2`编译选项并禁用`strict-aliasing`：`__attribute__((optimize("-O2"), optimize("-fno-strict-aliasing")))`
- GCC/Clang编译器下要使用 `<intrin.h>`，则需要包含：**`#include <x86intrin.h>`**。
- GCC默认连接静态库使用此连接选项：`-static`。
- GCC编译器指定结构体对齐：`-fpack-struct=n`。
- GCC与Clang使用打包的结构体：
```cpp
#if __clang__
    struct [[gnu::packed]]
#else
    struct __attribute__((packed))
#endif
    SS { long long a; int b; long long c; };

    static_assert(sizeof(SS) == 20);
```
- 用GCC编译C++代码时最好使用 `g++`，否则会导致一些特定的C++函数符号找不到。如果遇到某些引用STL库的函数而引发符号找不到错误，则可尝试添加 `-lstdc++` 来解决。
- [gcc, g++编译时消除特定警告的方法](https://blog.csdn.net/li_wen01/article/details/71171413)
- GCC上对于静态库或动态库文件名不以`lib`作为前缀的情况下可在连接时直接用该文件名去连。比如我们要连接一个`libtest.so`和`testlib.so`，我们可以用：`gcc -ltest testlib.so -o target`。
- GCC上对于用 **`-D`** 定义的预处理符号，如果其值包含双引号 **`"`**，则需要使用转义符 **` \ `**。比如：`-DMY_NAME=\"Smith\"`。
- [gcc命令objdump用法----反汇编](https://blog.csdn.net/cwcwj3069/article/details/8273129)
- [linux 强制32位编译,使用CMake强制进行32位编译的正确方法](https://blog.csdn.net/weixin_34952628/article/details/116756981)
- [C Programming/complex.h/carg](https://en.wikibooks.org/wiki/C_Programming/complex.h/carg)
- [《高级语言内的单指令多数据流计算(SIMD)》整理](https://www.cnblogs.com/zenny-chen/archive/2012/05/06/2486030.html)
- [Correctly implementing a spinlock in C++](https://rigtorp.se/spinlock/)
- [undefined symbol问题的查找定位与解决方法](https://blog.csdn.net/hjwang1/article/details/114387236)
- [undefined reference to `std::__cxx11::basic_string<char>`](https://www.cnblogs.com/lukybee/p/11846889.html)
- 获取当前进程ID：
```c
// Windows
#include <Windows.h>
DWORD GetCurrentProcessId();

// Unix
#include <unistd.h>

pid_t getpid(void);
```
- 获取当前系统环境变量
```c
#ifdef _WIN32
#include <Windows.h>
GetEnvironmentVariableA("APPDATA", buffer, bufferSize);
#else
#include <stdlib.h>
strcpy(buffer, getenv("HOME"));
#endif
```

<br />

## GCC内联汇编相关技巧（Clang编译器亦与之兼容）

- [gcc 内联汇编](https://blog.csdn.net/yanzhongqian/article/details/124482833)
- [ARM64基础11:GCC内嵌汇编补充](https://blog.csdn.net/luteresa/article/details/120140887)
- [如何在ARM aarch64中使用32位w寄存器进行GCC内联汇编？](https://cloud.tencent.com/developer/ask/sof/815815)

以下为几个常用例子：
```c
#include <stdbool.h>

// 常见的内联汇编方式
static inline int MyARM64Sub(int a, int b)
{
    int result;
    asm volatile ("sub    %w[dst], %w[src1], %w[src2]"
        : [dst] "=r" (result)
        : [src1] "r" (a), [src2] "r" (b));
    return result;
}

// 只有一个输出操作数
static inline unsigned MyGetFPCR(void)
{
    unsigned long long result;
    asm volatile ("mrs    %[result], fpcr" : [result] "=r" (result));
    return (unsigned)result;
}

// 只有一个输入操作数
static inline void MySetFPCR(unsigned fpcrValue)
{
    asm volatile ("msr    fpcr, %[fpcrValue]" : : [fpcrValue] "r" ((unsigned long long)fpcrValue));
}

// 参数expected在内联汇编中既作为输入操作数又作为输出操作数
static inline unsigned MyAtomicCAS_LSE(volatile void *dst, unsigned expected, unsigned newValue)
{
    asm volatile ("cas    %w[expected], %w[newValue], [%[dst]]"
        : [expected] "+r" (expected)
        : [newValue] "r" (newValue), [dst] "r" (dst));

    return expected;
}

static inline unsigned MyLDXR(const volatile void *ptr)
{
    unsigned result;
    asm volatile ("ldxr   %w[result], [%[ptr]]"
        : [result] "=r" (result)
        : [ptr] "r" (ptr));
    return result;
}

// 这里为了避免对不同变量使用相同的寄存器名，而特意指定相应的寄存器
static inline bool MySTXR(volatile void *dst, unsigned value)
{
    register volatile void *pDst asm("x2") = dst;
    register unsigned srcValue asm ("w1") = value;
    register bool result asm ("w0");

    asm volatile ("stxr   %w[result], %w[src], [%[dst]]"
        : [result] "=r" (result)
        : [src] "r" (srcValue), [dst] "r" (pDst));
    return result;
}

// 以上内联汇编的C函数在Android NDK平台下的测试：
const int result = MyARM64Sub(7, 3);
syslog(LOG_INFO, "The subtraction result: %d\n", result);

volatile unsigned data = 100;
unsigned expected = data;
expected = MyAtomicCAS_LSE(&data, expected, expected + 10);
syslog(LOG_INFO, "expected = %u\n", expected);
syslog(LOG_INFO, "now data = %u\n", data);

expected = MyLDXR(&data);
expected += 1000U;
const bool bRes = MySTXR(&data, expected);
syslog(LOG_INFO, "bRes = %d, expected = %u\n", bRes, expected);
syslog(LOG_INFO, "now data = %u\n", data);

MySetFPCR(0x07000000U);
expected = MyGetFPCR();
syslog(LOG_INFO, "Current FPCR: 0x%08X\n", expected);
```

<br />

## C11与C++11中的 **alignas**

在C++11中与C11中的 **`alignas`** 的摆放位置会因编译器而各有不同。而且C++11与C11中的摆放位置也是有所区别。其中，Clang编译器对 **`alignas`** 位置要求更为苛刻，而MSVC则对其位置要求比较宽松。

下面我们先举Clang编译器下C11和C++11中 **`alignas`** 用于修饰变量或结构体的摆放位置

```cpp
// 首先是C++11中alignas能够摆放的位置

static char s_dummy_chars alignas(64) [2] = "a";
static int s_dummy_int alignas(64) = 100;

alignas(64) static char s_dummy_chars2[2] = "a";
alignas(64) static int s_dummy_int2 = 100;

struct alignas(64) DummyS
{
    char s;
};
```

```c
// 然后这里是C11中alignas能够摆放的位置
#include <stdalign.h>

static char alignas(64) s_dummy_chars[2] = "a";
static int alignas(64) s_dummy_int = 100;

alignas(64) static char s_dummy_chars2[2] = "a";
alignas(64) static int s_dummy_int2 = 100;

static alignas(64) char s_dummy_chars3[2] = "a";
static alignas(64) int s_dummy_int3 = 100;

// Warning: Attribute '_Alignas' is ignored,
// place it after "struct" to apply attribute to type declaration
// 这里对alignas(64)的修饰会被Clang编译器忽略
alignas(64) struct DummyS1
{
    char s;
};

// 在Clang中可以这么对结构体类型做对齐要求设置
struct __attribute__((aligned(64))) DummyS2
{
    char s;
};
```

下面是MSVC编译器下，C11和C++11中 **`alignas`** 用于修饰变量或结构体的摆放位置：

```cpp
// 这里首先是C++源文件

static char s_dummy_chars alignas(64)[2] = "a";
static int s_dummy_int alignas(64) = 100;

alignas(64) static char s_dummy_chars2[2] = "a";
alignas(64) static int s_dummy_int2 = 100;

static alignas(64) char s_dummy_chars3[2] = "a";
static alignas(64) int s_dummy_int3 = 100;

static char alignas(64) s_dummy_chars4[2] = "a";
static int alignas(64) s_dummy_int4 = 100;

struct alignas(64) DummyS
{
    char s;
};
```

```c
// 然后这个是C语言源文件
#include <stdalign.h>

static char alignas(64) s_dummy_chars[2] = "a";
static int alignas(64) s_dummy_int = 100;

alignas(64) static char s_dummy_chars2[2] = "a";
alignas(64) static int s_dummy_int2 = 100;

static alignas(64) char s_dummy_chars3[2] = "a";
static alignas(64) int s_dummy_int3 = 100;

// 在MSVC中，直接用alignas(64)修饰结构体类型将会直接编译报错
//alignas(64) struct DummyS1 { char s; };

// MSVC中可以用以下方式修饰C语言的结构体对齐方式
struct __declspec(align(64)) DummyS2
{
    char s;
};
```

综上所述，无论是哪种编译器，无论是C还是C++，对一个 **变量** 指定用 **`alignas`** 进行修饰时，将它摆放在变量声明语句的最前面才是最通用的形式。

而C++中，**`alignas`** 用于修饰 **结构体、联合体、类等复合类型** 时的摆放位置在编译器中都是一样的——都是放在 **`struct`**、**`union`** 或 **`class`** 等关键字的后面，类型标识符的前面；而C11/C17中则暂不支持对结构体/联合体等复合类型的修饰。

<br />

## C++与C语言标准库头文件的对应

```cpp
#include <cstdio>       // <stdio.h>
#include <cstdint>      // <stdint.h>
#include <cstddef>      // <stddef.h>
#include <cstdlib>      // <stdlib.h>
#include <cstdarg>      // <stdarg.h>
#include <cstring>      // <string.h>
#include <cmath>        // <math.h>
#include <cassert>      // <assert.h>
#include <cinttypes>    // <inttypes.h>
#include <cctype>       // <ctype.h>
#include <cwctype>      // <wctype.h>
#include <cfloat>       // <float.h>
#include <csignal>      // <signal.h>
#include <cwchar>       // <wchar.h>
#include <cuchar>       // <uchar.h>
#include <cerrno>       // <errno.h>
#include <clocale>      // <locale.h>
#include <cfenv>        // <fenv.h>
#include <ctime>        // <time.h>
#include <csetjmp>      // <setjmp.h>
#include <limits>       // <limits.h>
#include <atomic>       // <stdatomic.h>
#include <complex>      // <complex.h>
#include <thread>       // <thread.h>

// The follwing C headers are deprecated since C++17
#include <cstdalign>    // <stdalign.h>
#include <cstdbool>     // <stdbool.h>
#include <ccomplex>     // <complex.h>
// The header <tgmath.h> behaves as if it simply includes the headers <cmath> and <complex>
#include <ctgmath>      // <tgmath.h>
#include <ciso646>      // <iso646.h>
```

**这里要注意的是**：由于`<cmath>`标准库各大编译器表现不太一致，而且都实现得比较简陋，因此C++要使用数学库最好同时包含`<math.h>`、`<cmath>`以及`<algorithm>`。

<br />

## 我的一些C语言有趣函数库

- 通过系统控制台输入命令并获得命令执行的结果：

```c
#ifndef _WIN32

#include <unistd.h>

#endif // !_WIN32


#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#ifdef _WIN32

bool ExecuteSystemCommand(char resultBuffer[], size_t bufferSize, const char* command)
{
    if (resultBuffer == NULL || command == NULL)
        return false;

    char lineBuffer[256] = { '\0' };

    FILE* hPipe = _popen(command, "r");
    if (hPipe == NULL)
    {
        puts("Pipe cannot be opened!");
        return false;
    }

    size_t const resultBufferCapacity = bufferSize - 1;
    size_t const lineBufferCapacity = sizeof(lineBuffer) - 1;
    size_t remainAvailBytes = resultBufferCapacity;
    size_t index = 0;
    while (feof(hPipe) == 0)
    {
        size_t const maxLineSize = remainAvailBytes < lineBufferCapacity ? remainAvailBytes : lineBufferCapacity;
        if (fgets(lineBuffer, maxLineSize, hPipe) != NULL)
        {
            if (strcpy_s(&resultBuffer[index], remainAvailBytes, lineBuffer) != 0)
                break;

            size_t const nReadBytes = strlen(lineBuffer);
            remainAvailBytes -= nReadBytes;
            index += nReadBytes;
        }
    }
    _pclose(hPipe);

    if (index > 0)
    {
        if (resultBuffer[index - 1] == '\n')
            resultBuffer[index - 1] = '\0';
    }

    return true;
}

#else

bool ExecuteSystemCommand(char resultBuffer[], size_t bufferSize, const char* command)
{
    int fd[2];
    int back_fd;

    if (pipe(fd) != 0)
    {
        puts("pipe establish failed!");
        return false;
    }
    // Backup standard I/O
    back_fd = dup(STDOUT_FILENO);

    // Redirect standard I/O to fd[1]
    dup2(fd[1], STDOUT_FILENO);
    close(fd[1]);

    system(command);

    read(fd[0], resultBuffer, bufferSize);

    // Restore standard I/O
    dup2(back_fd, STDOUT_FILENO);

    close(fd[0]);
    close(back_fd);

    size_t const resultLen = strlen(resultBuffer);
    if (resultLen > 0 && resultBuffer[resultLen - 1] == '\n')
        resultBuffer[resultLen - 1] = '\0';

    return true;
}

#endif // _WIN32


int main(void)
{
    char buffer[2048] = { '\0' };
    ExecuteSystemCommand(buffer, sizeof(buffer), "echo %USERPROFILE%");
    printf("command result is: %s\n", buffer);
}
```

- 在控制台中读取一行输入命令字符串

```c
    // Linux
    char *contents = NULL;
    size_t initLen = 0;
    // contents最后会包含一个换行符，这也就是意味着如果用户仅输入一个回车，
    // 那么contents中就一个换行符，长度为1。
    ssize_t contentLength = getline(&contents, &initLen, stdin);
    printf("Content length is: %zd, content is: %s", contentLength, contents);

    // Windows
    char commandBuffer[256] = { '\0' };
    gets_s(commandBuffer, sizeof(commandBuffer));
    // 这里commandBuffer不包含最后的换行符
    printf("The length is: %zu, content is: %s\n", strlen(commandBuffer), commandBuffer);
```
以上代码只需要包含`<stdio.h>`头文件即可。这里需要注意的是，getline的第二个参数不能为空。

- 获取当前执行程序所在的文件目录

```c
#include <stdint.h>

#define ZF_MAX_PATH_CHARACTERS    512

/// Store the current executable directory
static char sCurrentExecPath[ZF_MAX_PATH_CHARACTERS];

#ifdef __APPLE__

const char* zf_get_current_exec_path(void)
{
    if(sCurrentExecPath[0] == '\0')
    {
        const int maxSize = ZF_MAX_PATH_CHARACTERS - 1;
        uint32_t size = 0;
        _NSGetExecutablePath(NULL, &size);
        if(size > maxSize)
            size = maxSize;
        
        _NSGetExecutablePath(sCurrentExecPath, &size);
        sCurrentExecPath[size] = '\0';
    }
    
    return sCurrentExecPath;
}

#elif defined(_WIN32)

#include <Windows.h>

const char* zf_get_current_exec_path(void)
{
    if(sCurrentExecPath[0] == '\0')
    {
        WCHAR path[ZF_MAX_PATH_CHARACTERS];

        const int maxSize = ZF_MAX_PATH_CHARACTERS - 1;
        GetModuleFileNameW(NULL, path, maxSize);
        
        int len = WideCharToMultiByte(CP_UTF8, 0, path, -1, NULL, 0, NULL, NULL);
        if(len > maxSize)
            len = maxSize;

        WideCharToMultiByte(CP_UTF8, 0, path, -1, sCurrentExecPath, len, NULL, NULL);
    }

    return sCurrentExecPath;
}

#else
// Unix-like platforms
#include <unistd.h>

const char* zf_get_current_exec_path(void)
{
    if(sCurrentExecPath[0] == '\0')
    {
        const int maxSize = ZF_MAX_PATH_CHARACTERS - 1;
        int size = readlink("/proc/self/exe", sCurrentExecPath, sizeof(sCurrentExecPath));
        if(size > maxSize)
            size = maxSize;
        
        sCurrentExecPath[size] = '\0';
    }
    
    return sCurrentExecPath;
}

#endif

```

- 获得时间戳函数：

```c
#ifdef _WIN32

#include <Windows.h>
#include <intrin.h>

int main(void)
{
    DWORD tBegin = GetTickCount();
    _mm_mfence();

    volatile int count = 0;

    for (int i = 0; i < 1000 * 1000; i++) {
        count += i;
    }

    DWORD tEnd = GetTickCount();
    _mm_mfence();
    printf("Time spent: %u ms\n", tEnd - tBegin);
}

#else

#include <sys/time.h>
#include <x86intrin.h>

int main(void)
{
        struct timeval tBegin, tEnd;
        gettimeofday(&tBegin, NULL);
        _mm_mfence();

        volatile int count = 0;
        
        for(int i = 0; i < 1000 * 1000; i++) {
            count += i;
        }
        
        gettimeofday(&tEnd, NULL);
        _mm_mfence();
        
        long long deltaTime = 1000000LL * (tEnd.tv_sec - tBegin.tv_sec ) + (tEnd.tv_usec - tBegin.tv_usec);

        printf("Time spent: %lldus", deltaTime);
}
#endif
```

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

- 对一个32位带符号整数取饱和，将其值裁剪到\[-32768, +32767\]的范围内：

```c
static inline int ZennySat16(int src)
{
    const int mask = src >> 31;
    src ^= mask;
    if (src > 0x7fff) {
        src = 0x7fff;
    }
    src ^= mask;
    return src;
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

- C++11标准：UTF-8字符串与UTF-16字符串互转
```cpp
#include <string>
#include <codecvt>
#include <locale>
#include <cstdio>

extern "C" void CPPTest(void)
{
    std::string u8str = u8"你好，世界！";
    // UTF-8转UTF-16
    std::u16string u16str = std::wstring_convert< std::codecvt_utf8_utf16<char16_t>, char16_t >{}.from_bytes(u8str);
    // UTF-16转UTF-8
    std::string str = std::wstring_convert< std::codecvt_utf8_utf16<char16_t>, char16_t >{}.to_bytes(u16str);
    printf("UTF-8 string is: %s\n", str.c_str());
}
```

- 如果一个函数参数为一个结构体类型，那么可以对它传递一个匿名结构体对象；同样，如果返回类型是一个结构体类型，则也可以使用匿名结构体的初始化器进行构造：
```cpp
    struct {
        int a, b, c;
    } s2{ .a = 10, .c = -20 };
    std::cout << "s2 value = " << s2.a + s2.b + s2.c << std::endl;

    auto strucLam = [](const decltype(s2)& s) -> decltype(s2) {
        printf("The value is: %d\n", s.a + s.b + s.c);
        return { .a = 10, .b = 20, .c = 30 };
    };
    strucLam({ .a = 1, .b = 2, .c = 3 });
```

- 某个类型的对象指针直接显式地调用该类型的构造方法(仅针对Visual C++可用)：
```cpp
    struct MyStruct
    {
        int value;
        int data[];

        inline MyStruct(int i) : value(i) { }
    };

    constexpr int dataCount = 4;
    MyStruct* myData = (MyStruct*)malloc(sizeof(MyStruct) + dataCount * sizeof(myData->data[0]));
    // 显式调用构造方法对成员进行初始化 (仅针对Visual C++可用)
    myData->MyStruct::MyStruct(10);
    // 对data成员进行初始化
    for (int i = 0; i < dataCount; ++i) {
        myData->data[i] = i + 1;
    }

    int sum = myData->value;
    for (int i = 0; i < dataCount; ++i) {
        sum += myData->data[i];
    }

    free(myData);

    printf("sum = %d\n", sum);  // 这里将输出：sum = 20
```

- C++显式调用构造方法来创建一个指定内存位置的对象
```cpp
    struct MyObject
    {
        int value;
        MyObject(void) : value(1)
        {

        }

        ~MyObject(void)
        {
            puts("MyObject is destroyed!");
        }
    };

    uint8_t objBuffer[64] = { };

    MyObject* p = (MyObject*)objBuffer;

    // 注意！以下方法仅针对Visual C++可用
    // p->MyObject::MyObject();

    // 使用placement new对所有平台有效
    new(p) MyObject();

    printf("value in p is: %d\n", p->value);

    // 最后需要显式调用析构方法来释放对象，如果需要做额外内存释放的话
    p->~MyObject();
```

- C++17/20中将lambda表达式转换为函数指针的形式进行调用，并能存放其参数（这里的lambda表达式中不允许捕获任何变量）
```cpp
#include <cstdio>

// PARAM_TYPES必须与LAMBDA类型的参数类型完全等价
template <typename LAMBDA, typename ... PARAM_TYPES>
static inline void CallLambda(LAMBDA lambda, PARAM_TYPES... params)
{
    decltype(lambda(params...)) (* const fptr)(PARAM_TYPES...) = lambda;
    
    constexpr size_t maxParamCount = 64;
    
    unsigned long long paramBuffer[maxParamCount] = { static_cast<unsigned long long>(params)... };
    constexpr size_t nParams = sizeof...(params);
    static_assert(nParams <= maxParamCount, "parameter count exceeds the max count");
    
    printf("There are %zu parameters in this function\n", nParams);
    for (size_t i = 0; i < nParams; ++i)
    {
        printf("param i = %llu\n", paramBuffer[i]);
        paramBuffer[i] = 0;
    }
    
    int i = 0;
    (... , [](int i, unsigned long long *pBuffer, auto param) {
        pBuffer[i] = static_cast<unsigned long long>(param);
    }(i++, paramBuffer, params));
    
    if constexpr (nParams > 0) {
        printf("Verify fold expression to take the parameters...\n");
    }
    for(size_t i = 0; i < nParams; ++i) {
        printf("param i = %llu\n", paramBuffer[i]);
    }
   
    fptr(params...);
}

int main(void)
{
    CallLambda([](void) {
        printf("This is a lambda expression with no parameters...\n");
    });
    
    CallLambda([](int a, int b) -> int {
        const int result = a + b;
        printf("This is a lambda expression: %d\n", result);
        return result;
    }, 100, 20);
}
```

- 将Lambda表达式直接转换为其对应的函数指针类型（这里的lambda仍然不允许捕获任何变量）

```cpp
template<typename FUNC>
struct function_info : function_info<decltype(&FUNC::operator())> { };

template<typename RET_TYPE, typename ... Args>
struct function_info<RET_TYPE(Args...)>
{
    enum : size_t {
        PARAM_COUNT = sizeof...(Args)
    };

    using return_type = RET_TYPE;
    using function_type = RET_TYPE(Args...);
};

template<typename R, typename ... As>
struct function_info<R(*)(As...)> : function_info<R(As...)> { };

template<typename C, typename R, typename ... As>
struct function_info<R(C::*)(As...)> : function_info<R(As...)>
{
    using class_type = C;
    using function_type_with_class = R(C*, As...);
};

template<typename C, typename R, typename ... As>
struct function_info<R(C::*)(As...) const> : function_info<R(As...)>
{
    using class_type = C;
    using function_type_with_class = R(C*, As...);
};

template<typename F>
static constexpr size_t parameter_count_v = function_info<F>::PARAM_COUNT;

template<typename F>
using function_type = typename function_info<F>::function_type;

template<typename F>
using function_type_with_class = typename function_info<F>::function_type_with_class;

template<typename F>
using return_type = typename function_info<F>::return_type;

template<typename F>
using class_type = typename function_info<F>::class_type;

template <typename LAMBDA>
static inline auto FptrCast(LAMBDA lambda) noexcept
{
    return static_cast<function_type<LAMBDA>*>(lambda);
}

template <typename LAMBDA>
static void PrintLambdaParamCount(LAMBDA lambda)
{
    printf("Paramter count: %zu\n", parameter_count_v<LAMBDA>);
}

int main(void)
{
    auto const lam = [](int a, int b) {
        printf("a - b = %d\n", a - b);
    };
    auto const fptr = FptrCast(lam);
    fptr(5, 3);
    PrintLambdaParamCount(lam);
}
```


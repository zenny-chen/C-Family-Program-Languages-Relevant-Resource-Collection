# C Family Programming Languages Relevant Resource Collection
类C语言编程相关

<br />

- [ISO C Working Group's official website](http://www.open-std.org/jtc1/sc22/wg14/www/wg14_document_log.htm)
- [The Objective-C Programming Language](https://developer.apple.com/library/archive/documentation/Cocoa/Conceptual/ObjectiveC/Introduction/introObjectiveC.html)
- [Objective-C Runtime](https://developer.apple.com/documentation/objectivec?language=objc)
- [Objective-C Runtime Programming Guide](https://developer.apple.com/library/archive/documentation/Cocoa/Conceptual/ObjCRuntimeGuide/Introduction/Introduction.html?language=objc#//apple_ref/doc/uid/TP40008048)
- [http://www.cplusplus.com/reference/](http://www.cplusplus.com/reference/)
- [https://en.cppreference.com](https://en.cppreference.com/w/)
- [Clang Contents](https://clang.llvm.org/docs/index.html)
- [llvm-as - LLVM assembler](https://releases.llvm.org/8.0.0/docs/CommandGuide/llvm-as.html)
- [Attributes in Clang](https://clang.llvm.org/docs/AttributeReference.html)
- [Clang Language Extensions](https://clang.llvm.org/docs/LanguageExtensions.html)
- [GCC Extensions to the C Language Family](https://gcc.gnu.org/onlinedocs/gcc/C-Extensions.html#C-Extensions)
- **C++ Boost** 库配置额外的编译选项：**[Configuration](https://www.boost.org/build/doc/html/bbv2/overview/configuration.html)** 以及 **[Boost.Config](https://www.boost.org/doc/libs/1_80_0/libs/config/doc/html/index.html)**。（limiting which libraries get built with the **`--with-<library-name>`** or **`--without-<library-name>`** options. 比如：`bjam.exe --toolset=msvc-14.2 architecture=x86 address-model=64 link=static --build-type=complete --with-system --with-thread --with-date_time --with-filesystem --with-serialization`）
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
- ASCII 中的 **`0x0A`** 表示 LF/NL(Line Feed/New Line)，即换行到下一行的行首，对应于C语言中的 **`\n`**；**`0x0D`** 表示 CR (Carriage Return)，即把光标移到行首，对应于C语言中的 **`\r`**。
- [尾递归](https://baike.baidu.com/item/尾递归/554682)
- [Tail call](https://en.wikipedia.org/wiki/Tail_call)（[Relation to the while statement](https://en.wikipedia.org/wiki/Tail_call#Relation_to_the_while_statement) 部分的Julia程序演示了尾递归与非尾递归的演示。）
- [What is an indirect function (IFUNC)?](https://sourceware.org/glibc/wiki/GNU_IFUNC)
- [P1467R5 Extended floating-point types and standard names](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p1467r5.html)
- [Floating-point rules \(Direct3D 11\)](https://learn.microsoft.com/en-us/windows/win32/direct3d11/floating-point-rules)
- [C编译器剖析_1.5 结合C语言来学汇编_浮点数运算(比较大小)](https://blog.csdn.net/sheisc/article/details/43017909)
- Clang编译器下新引入的 **半精度浮点** 类型：[Half-Precision Floating Point](https://clang.llvm.org/docs/LanguageExtensions.html#half-precision-floating-point)
- GCC [Half-Precision Floating Point](https://gcc.gnu.org/onlinedocs/gcc/Half-Precision.html)
- [MSVC HALF Data Type](https://learn.microsoft.com/en-us/windows/win32/dxmath/half-data-type)（Only for C++）
- [bfloat16 floating-point format](https://en.wikipedia.org/wiki/Bfloat16_floating-point_format)
- [FP8 FORMATS FOR DEEP LEARNING](https://arxiv.org/pdf/2209.05433)
- [从速度和精度角度的 FP8 vs INT8 的全面解析](https://www.toutiao.com/article/7437070462351344163/)
- 关于 IEEE-754 标准中的 **ULP**（Units in Last Place），可见：[ULP Considerations of Native Floating-Point Operators](https://www.mathworks.com/help/hdlcoder/ug/ulp-considerations-of-native-floating-point-operators.html#ULP%20Considerations%20of%20Native%20Floating-Point%20Operators)
- [ULP 误差指标](https://zhuanlan.zhihu.com/p/513904295)
- [关于浮点数的学习笔记](https://blog.csdn.net/u010281174/article/details/115556416)
- 各种精度浮点计算的软件实现：[berkeley-softfloat-3](https://github.com/ucb-bar/berkeley-softfloat-3)
- [IEC 60559 interchange and extended types](https://www.open-std.org/jtc1/sc22/wg14/www/docs/n2601.pdf)
此标准提供了以下浮点类型：

浮点类型 | 关键字 | 后缀
---- | ---- | ----
二进制浮点 | `_Float16`、`_Float32`、`_Float64`、`_Float128` | `f16`、`f32`、`f64`、`f128`
二进制扩展浮点 | `_Float32x`、`_Float64x`、`_Float128x` | `f32x`、`f64x`、`f128x`
十进制浮点 | `_Decimal32`、`_Decimal64`、`_Decimal128` | `d32`、`d64`、`d128`
十进制扩展浮点 | `_Decimal32x`、`_Decimal64x`、`_Decimal128x` | `d32x`、`d64x`、`d128x`

上述类型后缀中，**`f`** 和 **`d`** 可用大写的 **f** 或 **D**。比如：**`F16`**、**`F64x`**、**`D32`**、**`D128x`**。

- [strcpy_s](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/strcpy-s-wcscpy-s-mbscpy-s)（返回类型为 **`errno_t`**，返回值定义为 **`<errno.h>`**；可用的值比如：**`EPERM`**、**`EIO`** 等）
- [详解C语言中的stdin，stdout，stderr](http://blog.csdn.net/Crazy_Tengt/article/details/72717144)
- [\<uchar.h\>中的 **c16rtomb** ](https://cloud.tencent.com/developer/section/1009566)
- [C11获得时间戳：`timespec_get`](https://en.cppreference.com/w/c/chrono/timespec_get)
- [X Macro](https://en.wikipedia.org/wiki/X_Macro)
- [C语言压缩文件和用MD5算法校验文件完整性的实例教程_C 语言](https://yq.aliyun.com/ziliao/119635)
- [C/C++下scanf的%匹配以及过滤字符串问题](https://www.toutiao.com/a6659550631625228808)
- 对 **`sprintf`** 做封装需要使用 **`vsprintf`**：
```c
#include <stdio.h>
#include <stdarg.h>

int my_sprintf(char buffer, const char *fmt, ...)
{
    va_list arglist;
    va_start(arglist, fmt);
    const int count = vsprintf(buffer, fmt, arglist);
    va_end(arglist);
    return count;
}
```
- [Clang官方对__has_include与\#include_next的举例](https://clang.llvm.org/docs/LanguageExtensions.html#include-file-checking-macros)
- [Wrapper Headers（GCC对\#include_next的官方解释）](https://gcc.gnu.org/onlinedocs/cpp/Wrapper-Headers.html)
- [C/C++11中的lock-free技术](https://www.toutiao.com/article/7379540606147691059/)
- [（有用的C++ proposal）Familiar template syntax for generic lambdas](http://open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0428r2.pdf)
- [C++ Namespaces（包含 **`using`** 的用法）](https://en.cppreference.com/w/cpp/language/namespace)
- C++ **`namespace`** 的别名化：
```cpp
namespace ABC
{
    int a = 100;
}

extern "C" auto CPPTest() -> int
{
    namespace abc = ABC;
    printf("ABC::a = %d\n", abc::a);
}
```
- [优先使用using，而非typedef](https://zhuanlan.zhihu.com/p/266140466)
- [C++ Placement new](https://en.cppreference.com/w/cpp/language/new#Placement_new)
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
- C++ 彻底清除 **`std::vector`** 中所有元素，并将其尺寸变为0的方式：
```cpp
    std::vector<int> vecArray { 1, 2, 3, 4 };
    // 清空vecArray。这种方式通用性比
    // vecArray.swap(std::vector<int>());
    // 更高。后者对于高版本C++会有const限定符转换上的编译错误
    std::vector<int>().swap(vecArray);
```
- 对 **`std::hash`** 的基本使用：
```cpp
    std::hash<std::string> strHash;
    const size_t hashValue0 = strHash("hello");
    const size_t hashValue1 = strHash(std::string("hello"));
    if (hashValue0 == hashValue1) {
        printf("Equal! The value is: %zu\n", hashValue0);
    }
    else {
        puts("Hash value not equal!");
    }

    const size_t hashValue2 = strHash("");
    const size_t hashValue3 = strHash(std::string(""));
    if (hashValue2 == hashValue3) {
        printf("Equal! Empty string hash: %zu\n", hashValue2);
    }
    else {
        puts("Empty string hash value not equal!");
    }
```
- [Detecting in C++ whether a type is defined, part 1: The initial plunge](https://devblogs.microsoft.com/oldnewthing/20190708-00/?p=102664)
- [C++ · RAII 和 智能指针](https://zhuanlan.zhihu.com/p/470270741)
- [C++RAII与智能指针](https://www.cnblogs.com/chen-pi/p/17825459.html)
- [C++ Reference declaration](https://en.cppreference.com/w/cpp/language/reference)
- [C++11之右值引用](https://blog.csdn.net/xiaomage1213888/article/details/125602156)
- [Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)
- [Lambda expressions in C++](https://learn.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp)
- [如何在C++ 11中创建线程对象数组？](http://cn.voidcc.com/question/p-vgibagru-zc.html)
- [C++11 并发指南五(std::condition_variable 详解)](https://www.cnblogs.com/haippy/p/3252041.html)
- [std::condition_variable](https://en.cppreference.com/w/cpp/thread/condition_variable)

```cpp
#include <cstdio>
#include <cstdlib>
#include <utility>
#include <algorithm>
#include <thread>
#include <chrono>
#include <condition_variable>
#include <mutex>

static auto CondVarTest() -> void
{
    std::condition_variable cond;
    std::mutex mtx;
    std::unique_lock producerLock(mtx);

    volatile int sharedValue = 0;

    std::thread consumerThread([&cond, &mtx, &sharedValue]() {
        std::unique_lock lck(mtx);
        cond.wait(lck, [&sharedValue]() { return sharedValue != 0; });
        lck.unlock();

        printf("Consumer thread running... sharedValue is: %d\n", sharedValue);
    });

    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    puts("Set sharedValue and notify the condition variable...");

    sharedValue = 100;

    producerLock.unlock();
    cond.notify_all();

    puts("Joining the consumer thread...");
    consumerThread.join();
}
```

- [C++11中获取当前线程的ID](https://en.cppreference.com/w/cpp/thread/get_id)：使用 **`std::this_thread::get_id()`**
- 获取 `std::thread::id` 对象实例的整数值：
```cpp
#include <thread>

// std::hash<std::thread::id> { } 用于构建一个临时的 std::hash<std::thread_id> 对象实例；
// 后面的 ( std::this_thread::get_id() ) 则是调用 std::hash 的 () 操作符函数，
// 该操作符函数返回一个 size_t 的值
const size_t threadID = std::hash<std::thread::id> { } (std::this_thread::get_id());
```
- [std::this_thread::sleep_for](https://en.cppreference.com/w/cpp/thread/sleep_for)  比如：
```cpp
std::this_thread::sleep_for(std::chrono::microseconds(1));
```
- [std::this_thread::yield](https://en.cppreference.com/w/cpp/thread/yield)
- [std::async](https://en.cppreference.com/w/cpp/thread/async)
- [std::chrono::duration_cast](https://en.cppreference.com/w/cpp/chrono/duration/duration_cast)（除了 **`std::chrono::high_resolution_clock`**，还可使用 **`std::chrono::steady_clock`** 作为时间戳）
- [std::chrono::duration](https://en.cppreference.com/w/cpp/chrono/duration)
- [一文读懂C++右值引用和std::move](https://zhuanlan.zhihu.com/p/335994370)
- [Type alias, alias template \(since C++11\)](https://en.cppreference.com/w/cpp/language/type_alias)（比如使用 **`template <typename T> using auto_ptr = unique_ptr<T>`**）
- C++11对某一类型做cv限定符的移除并声明一个对象：使用 [std::decay](https://en.cppreference.com/w/cpp/types/decay)，例如：
```cpp
    #include <type_traits>
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
- C++11之后，新型函数类型声明方式（对于任一涉及函数类型的部分，该函数类型的 **返回类型** 可用 **`auto`** 做类型推导）：
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
- [C++ 浮点数转为字符串并保留一定小数位数](https://blog.csdn.net/henry_23/article/details/117164310)
- [User-defined literals (since C++11)](https://en.cppreference.com/w/cpp/language/user_literal)
- [std::atomic_thread_fence](https://en.cppreference.com/w/cpp/atomic/atomic_thread_fence)（**NOTES**: On x86 (including x86-64), atomic_thread_fence functions issue no CPU instructions and only affect compile-time code motion, except for std::atomic_thread_fence(std::memory_order::seq_cst), which issues the full memory fence instruction MFENCE）
- [C++11 threads, affinity and hyperthreading](https://eli.thegreenplace.net/2016/c11-threads-affinity-and-hyperthreading/)
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
- [C++三剑客之std::optional(一) : 使用详解](https://blog.csdn.net/haokan123456789/article/details/136099479)
- [std::optional](https://en.cppreference.com/w/cpp/utility/optional)
- [std::nullopt](https://en.cppreference.com/w/cpp/utility/optional/nullopt)
- [C++17 Structured binding declaration](https://en.cppreference.com/w/cpp/language/structured_binding)
- [C++17：内联变量](https://www.toutiao.com/article/7117584483603497472/)
- [c++17中的 constexpr lambda 表达式](https://docs.microsoft.com/zh-cn/cpp/cpp/lambda-expressions-constexpr)
- [C++17 template \<auto\>](https://mariusbancila.ro/blog/2018/05/23/template-auto/)
- [C++17：用折叠表达式实现一个IsAllTrue函数](https://www.toutiao.com/article/7412256602583089705/)
- [std::size](https://en.cppreference.com/w/cpp/iterator/size)：可使用常量表达式返回一个C数组的元素个数，或是一个容器的元素个数。
- [Read-Write mutex with shared_mutex](https://ncona.com/2019/03/read-write-mutex-with-shared_mutex/)
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
- [**\_\_VA_OPT\_\_**](https://en.cppreference.com/w/cpp/preprocessor/replace)（For versions (3,4), replacement-list may contain the token sequence **`__VA_OPT__ (content)`**, which is replaced by ***content*** if **`__VA_ARGS__`** is non-empty, and expands to nothing otherwise.）
- [C++20的三路比较运算符 **`operator<=>`** ](https://blog.csdn.net/longji/article/details/104017451)
- [std::counting_semaphore](https://en.cppreference.com/w/cpp/thread/counting_semaphore)
- [std::jthread与std::thread的区别](https://blog.csdn.net/danshiming/article/details/117648806)
- [C++20 Coroutine实例教学](https://zhuanlan.zhihu.com/p/414506528)
- [C++20协程原理和应用](https://csdnnews.blog.csdn.net/article/details/124123024)
- [性能炸裂c++20协程+iocp/epoll，超轻量高性能异步库开发实战](https://www.toutiao.com/article/7274222072270897664/)
- [Fixed width floating-point types (since C++23)](https://en.cppreference.com/w/cpp/types/floating-point)
- C++23 递归lambda表达式：
```cpp
    auto lambdaExpr = [](this auto const& thisRef, unsigned n) -> unsigned {
        if (n < 2) return 1;

        return n * thisRef(n - 1);
    };

    auto const value = lambdaExpr(5) * lambdaExpr(1) * lambdaExpr(0);
    printf("value = %u\n", value);  // value = 120
```
- [Why is the new C++ visibility support so useful?](https://gcc.gnu.org/wiki/Visibility)
- [链接过程中的符号重定位_C底层](http://blog.csdn.net/darkfaker/article/details/79370796)
- [Parallel Patterns Library (PPL)](https://learn.microsoft.com/en-us/cpp/parallel/concrt/parallel-patterns-library-ppl)
- [微软并行模式库(PPL)](https://blog.csdn.net/longji/article/details/95199668)
- [oneAPI Threading Building Blocks (oneTBB)](https://github.com/oneapi-src/oneTBB)
- [oneTBB Developer Guide](https://oneapi-src.github.io/oneTBB/main/tbb_userguide/title.html)
- [Getting Started with Intel® Threading Building Blocks \(Intel® TBB\)](https://www.intel.com/content/www/us/en/developer/articles/guide/get-started-with-tbb.html)
- [TBB排序](https://blog.csdn.net/beyondjhf_2008/article/details/83405545)
- [TBB parallel_sort Template Function](https://www.threadingbuildingblocks.org/docs/help/index.htm#reference/algorithms/parallel_sort_func.html)
- [oneTBB Hybrid CPU and NUMA Support](https://oneapi-src.github.io/oneTBB/GSG/next_steps.html#hybrid-cpu-and-numa-support)（需要安装 [**HWLOC**](https://github.com/open-mpi/hwloc)，官网：[Portable Hardware Locality (hwloc)](https://www-lb.open-mpi.org/projects/hwloc/)）
- [**TBB** -- task_arena and task_group slowdown a lot my tasks](https://community.intel.com/t5/Intel-oneAPI-Threading-Building/task-arena-and-task-group-slowdown-a-lot-my-tasks/m-p/1565777/)
- [task_arenas numa constraints leads to partial cpu usage](https://github.com/oneapi-src/oneTBB/issues/773)
- [Optimize Intel® oneAPI Threading Building Blocks for NUMA Architectures](https://www.intel.com/content/www/us/en/developer/videos/onetbb-optimizing-for-numa-architectures.html)
- [C语言的JSON库Jansson](https://www.toutiao.com/a6751005440798114315/)
- [C中字符串查找](https://blog.csdn.net/sinat_41752325/article/details/125201722)
- [C语言中的系统库system函数](https://baike.baidu.com/item/system/15078602?fr=aladdin)
- C语言将控制台输出内容转存到指定文件：`freopen(filePath, "w", stdout);`。用完之后再用`fclose`关闭文件即可。在转存过程中，控制台内容仍然会输出。
- 循环展开：GCC可直接使用`#pragma unroll`或是`_Pragma("unroll")`对循环做展开。MSVC可使用：**`#pragma loop(hint_parallel(0))`** 或 **`_Pragma("loop(hint_parallel(0))")`**。
- [pragma gcc optimize](https://blog.csdn.net/u010796610/article/details/69352484)（另参考此文：[GCC 设置部分代码的优化级别](http://blog.chinaunix.net/uid-26334045-id-4743500.html)）
- [C Programming/complex.h/carg](https://en.wikibooks.org/wiki/C_Programming/complex.h/carg)
- [《高级语言内的单指令多数据流计算(SIMD)》整理](https://www.cnblogs.com/zenny-chen/archive/2012/05/06/2486030.html)
- [Correctly implementing a spinlock in C++](https://rigtorp.se/spinlock/)
- [undefined symbol问题的查找定位与解决方法](https://blog.csdn.net/hjwang1/article/details/114387236)
- [undefined reference to `std::__cxx11::basic_string<char>`](https://www.cnblogs.com/lukybee/p/11846889.html)
- [目标文件和可执行文件里面都有什么](https://www.cnblogs.com/zjuhaohaoxuexi/p/16217669.html)
- [COMDAT是什么，据说很多资深大佬都不清楚](https://blog.csdn.net/weixin_46222091/article/details/105084885)
- [What is the COMDAT section used for?](https://stackoverflow.com/questions/1834597/what-is-the-comdat-section-used-for)
- [聊一聊Linux动态链接和GOT、PLT](https://blog.csdn.net/lcmsir/article/details/130155368)
- [聊聊Linux动态链接中的PLT和GOT（１）——何谓PLT与GOT](https://blog.csdn.net/linyt/article/details/51635768)
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
- [C++ Hashmap Benchmark](https://zhuanlan.zhihu.com/p/569618538)
- [c++ map 查找性能測試](http://hk.aiuxian.com/article/p-bkrgjqnd-ke.html)
- [Klib: a Generic Library in C](https://github.com/attractivechaos/klib)
- [STC - Smart Template Containers](https://github.com/stclib/STC)

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
// 这里对alignas(64)的修饰会被Clang编译器忽略。
// 而使用 `struct alignas(64) DummyS1` 则直接编译报错！
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

// 在MSVC中，直接用alignas(64)修饰结构体类型将会直接编译报错。
// 除了以下声明，使用 `alignas(64) struct DummyS1 { char s; };` 也会有编译报错。
// struct alignas(64) DummyS1 { char s; };

// MSVC中可以用以下方式修饰C语言的结构体对齐方式
struct __declspec(align(64)) DummyS2
{
    char s;
};
```

综上所述，无论是哪种编译器，无论是C还是C++，对一个 **变量** 指定用 **`alignas`** 进行修饰时，将它摆放在变量声明语句的最前面才是最通用的形式。

而C++中，**`alignas`** 用于修饰 **结构体、联合体、类等复合类型** 时的摆放位置在编译器中都是一样的——都是放在 **`struct`**、**`union`** 或 **`class`** 等关键字的后面，类型标识符的前面；而C11/C17中则暂不支持对结构体/联合体等复合类型的修饰。

<br />

## C++11与C23 \[\[ attributes \]\] 对函数、对象及自定义类型的摆放位置

```cpp
// 修饰对象
[[maybe_unused]] static int dummy0 = 0;

static int dummy1 [[maybe_unused]] = 1;

static int dummyArray [[maybe_unused]] [5]  = { };

static void (* volatile dummyFuncPtrs [[maybe_unused]] [5])(int) = { };

// 修饰函数
[[maybe_unused]]
__attribute__((unused))
static void Foo0(void) { }

static void __attribute__((unused)) Foo1 [[maybe_unused, clang::optnone]] (
    // 修饰函数形参
    [[maybe_unused]] int a,
    float f [[maybe_unused]],
    [[maybe_unused]] char c[256],
    long* p [[maybe_unused]]
) { }

// C++ only
static auto FooCPP [[maybe_unused]] (float param) -> auto (*)(float) -> int { return nullptr; }

// 修饰复合类型
static struct [[maybe_unused]]  __attribute__((unused)) Dummy1
{
    // 修饰成员对象
    [[maybe_unused]]  __attribute__((unused))
    int a;
}
// 修饰用该结构体类型声明的对象
__attribute__((unused)) s1 [[maybe_unused]];

[[maybe_unused]]            // 修饰用结构体类型Dummy2所声明的对象
static struct [[maybe_unused]] __attribute__((unused)) Dummy2
{
    // 修饰成员对象
    int __attribute__((unused)) b [[maybe_unused]];

    [[maybe_unused]]
    int c __attribute__((unused));
} s2 __attribute__((unused));   // 修饰用结构体类型Dummy2所声明的对象
```
综上所述，对于使用 `[[attribute]]` 和 `__attribute__((attribute))` 修饰对象时，两者均可以放在整个对象声明的开头，也能放在对象标识符的后面。此外，`__attribute__((attribute))` 还可放在对象标识符的前面。

在修饰函数时，两者均可放在整个函数声明的开头。不过 `[[attribute]]` 只能放在函数标识符的后面；而 `__attribute__((attribute))` 只能放在函数标识符的前面。

在修饰自定义类型时，两者均可放在类型关键字（**`enum`**、**`struct`**、**`union`** 等）的后面以及类型标识符的前面。

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

- 动态分配指定字节对齐的存储空间

```c
#include <stdlib.h>

void* MyAlignedAlloc(size_t size, size_t alignment)
{
#if _WIN32
    return _aligned_malloc(size, alignment);
#else
    // Unix-like
    return memalign(alignment, size);
#endif
}
```

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
#include <mach-o/dyld.h>

const char* zf_get_current_exec_path(void)
{
    if(sCurrentExecPath[0] == '\0')
    {
        const int maxSize = ZF_MAX_PATH_CHARACTERS - 1;
        uint32_t size = 0;
        _NSGetExecutablePath(NULL, &size);
        if(size > maxSize) {
            size = maxSize;
        }
        
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
        if(len > maxSize) {
            len = maxSize;
        }

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
        if(size > maxSize) {
            size = maxSize;
        }
        
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
    auto (*fptr)(PARAM_TYPES...) -> decltype(lambda(params...)) = lambda;
    
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

<br />

## Github Codespaces调出控制台

如下图所示

![codespaces console](images/codespaces_console.png)

先点击上图中左上角的三条横杠图标的按钮，然后就能出现对话框。控制台一般处于当前用户根目录，比如：`/workspaces/codespaces-blank/`。



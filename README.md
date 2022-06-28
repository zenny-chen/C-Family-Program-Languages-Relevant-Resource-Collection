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
- CLion下常用快捷键——`点两次shift`：调出文件搜索工具栏；`ctrl+shift+f`：调出在当前工程搜索关键词的工具栏。
- [Clion中单行注释、多行注释及取消注释快捷键示例](https://blog.csdn.net/pan66rui/article/details/107841452)
- [CLion Hexadecimal view](https://www.jetbrains.com/help/clion/using-hexadecimal-view.html)
- [值得我们学习的C语言开源项目汇总](https://www.toutiao.com/a6816559091704398339/)
- [C编译器剖析_1.5 结合C语言来学汇编_浮点数运算(比较大小)](https://blog.csdn.net/sheisc/article/details/43017909)
- [详解C语言中的stdin，stdout，stderr](http://blog.csdn.net/Crazy_Tengt/article/details/72717144)
- [\<uchar.h\>中的 **c16rtomb** ](https://cloud.tencent.com/developer/section/1009566)
- [C语言压缩文件和用MD5算法校验文件完整性的实例教程_C 语言](https://yq.aliyun.com/ziliao/119635)
- [C/C++下scanf的%匹配以及过滤字符串问题](https://www.toutiao.com/a6659550631625228808)
- [（有用的C++ proposal）Familiar template syntax for generic lambdas](http://open-std.org/jtc1/sc22/wg21/docs/papers/2017/p0428r2.pdf)
- [C++ vector清空元素的三种方法](https://blog.csdn.net/weixin_30897079/article/details/97119054)
- [如何在C++ 11中创建线程对象数组？](http://cn.voidcc.com/question/p-vgibagru-zc.html)
- [std::jthread与std::thread的区别](https://blog.csdn.net/danshiming/article/details/117648806)
- [C++11 并发指南五(std::condition_variable 详解)](https://www.cnblogs.com/haippy/p/3252041.html)
- [C++11中获取当前线程的ID](https://en.cppreference.com/w/cpp/thread/get_id)：使用 **`std::this_thread::get_id()`**
- [一文读懂C++右值引用和std::move](https://zhuanlan.zhihu.com/p/335994370)
- [优先使用using，而非typedef](https://zhuanlan.zhihu.com/p/266140466)
- [std::initializer_list](https://en.cppreference.com/w/cpp/utility/initializer_list)
- [std::isnan](https://en.cppreference.com/w/cpp/numeric/math/isnan)
- [std::to_string](https://en.cppreference.com/w/cpp/string/basic_string/to_string)
- [C++/C++11中std::transform的使用](https://blog.csdn.net/fengbingchun/article/details/63252470)
- [c++ ostringstream的用法（c语言的sprintf）](https://blog.csdn.net/zhenguo26/article/details/80716075)
- [C++中输出/输入十六进制数](https://blog.csdn.net/woaijssss/article/details/93190865)
- C++中将std::string十六进制字符串转为整数：`std::strtoull`；整数转字符串：`std::to_string()`
- [C++20不定参数个数的宏](https://en.cppreference.com/w/cpp/preprocessor/replace#Function-like_macros)
- [c++11-17 模板核心知识（四）—— 可变参数模板 Variadic Template](https://www.cnblogs.com/zhangyachen/p/13946450.html)
- [C++20新特性—consteval与constinit](https://blog.csdn.net/guxch/article/details/113641104)
- [c++中的 constexpr lambda 表达式](https://docs.microsoft.com/zh-cn/cpp/cpp/lambda-expressions-constexpr)
- [C++20 Coroutine实例教学](https://zhuanlan.zhihu.com/p/414506528)
- [C++20协程原理和应用](https://csdnnews.blog.csdn.net/article/details/124123024)
- [C语言的JSON库Jansson](https://www.toutiao.com/a6751005440798114315/)
- [链接过程中的符号重定位_C底层](http://blog.csdn.net/darkfaker/article/details/79370796)
- [类Unix系统中如何获取另一个程序的输出内容](https://baike.baidu.com/item/popen)
- [使用popen执行shell命令并获取返回结果](https://www.cnblogs.com/hiawind/p/9089288.html)
- [C语言中的系统库system函数](https://baike.baidu.com/item/system/15078602?fr=aladdin)
- C语言将控制台输出内容转存到指定文件：`freopen(filePath, "w", stdout);`。用完之后再用`fclose`关闭文件即可。在转存过程中，控制台内容仍然会输出。
- GCC可直接使用`#pragma unroll`或是`_Pragma("unroll")`对循环做展开。
- [pragma gcc optimize](https://blog.csdn.net/u010796610/article/details/69352484)（另参考此文：[GCC 设置部分代码的优化级别](http://blog.chinaunix.net/uid-26334045-id-4743500.html)）
- [gcc在代码中禁止某些warning](https://www.cnblogs.com/jhj117/p/6639111.html)
- [gcc 编译 gcc warning 'variable tracking size limit exceeded' 原因及解决办法](https://blog.csdn.net/photon222/article/details/89217737)
- [严格别名规则“-fstrict-aliasing”和“-fno-strict-aliasing”及类型双关](https://www.cnblogs.com/aquester/p/10299471.html)
- GCC对某一函数启用`-O2`编译选项并禁用`strict-aliasing`：`__attribute__((optimize("-O2"), optimize("-fno-strict-aliasing")))`
- GCC/Clang编译器下要使用<intrin.h>，则需要包含：`#include <x86intrin.h>`。
- GCC默认连接静态库使用此连接选项：`-static`。
- GCC编译器指定结构体对齐：`-fpack-struct=n`。
- 用GCC编译C++代码时最好使用 `g++`，否则会导致一些特定的C++函数符号找不到。如果遇到某些引用STL库的函数而引发符号找不到错误，则可尝试添加 `-lstdc++` 来解决。
- [gcc, g++编译时消除特定警告的方法](https://blog.csdn.net/li_wen01/article/details/71171413)
- GCC上对于静态库或动态库文件名不以`lib`作为前缀的情况下可在连接时直接用该文件名去连。比如我们要连接一个`libtest.so`和`testlib.so`，我们可以用：`gcc -ltest testlib.so -o target`。
- GCC上对于用 **`-D`** 定义的预处理符号，如果其值包含双引号 **`"`**，则需要使用转义符 **` \ `**。比如：`-DMY_NAME=\"Smith\"`。
- [gcc命令objdump用法----反汇编](https://blog.csdn.net/cwcwj3069/article/details/8273129)
- [linux 强制32位编译,使用CMake强制进行32位编译的正确方法](https://blog.csdn.net/weixin_34952628/article/details/116756981)
- [C Programming/complex.h/carg](https://en.wikibooks.org/wiki/C_Programming/complex.h/carg)
- [《高级语言内的单指令多数据流计算(SIMD)》整理](https://www.cnblogs.com/zenny-chen/archive/2012/05/06/2486030.html)
- 获取当前进程ID：
```c
// Windows
#include <Windows.h>
DWORD GetCurrentProcessId();

// Unix
#include <unistd.h>

pid_t getpid(void);
```
- [linux下生成core dump方法与gdb解析core dump文件](https://blog.csdn.net/weixin_39249306/article/details/94554782)
- [GDB调试教程：1小时玩转Linux gdb命令](http://c.biancheng.net/gdb/)
- GDB查看寄存器
```bash
info registers
info all-registers
info registers reggroup
info registers regname
```
- Linux下在GDB调试模式下忽略 **`SIGSEGV`** 信号，而直接让程序继续执行：
```bash
handle SIGSEGV nostop noprint
```
- [GDB and LLDB Command Examples](https://developer.apple.com/library/archive/documentation/IDEs/Conceptual/gdb_to_lldb_transition_guide/document/lldb-command-examples.html)
- [gdb到底是怎样实现的？](https://www.toutiao.com/a6699652803918299655)
- [调试程序时，设置断点的原理是什么？](https://www.toutiao.com/a6651660887507599886/)
- [gdb（debugger）加入软件断点的本质原理分析](https://www.toutiao.com/a6828945264800170504/)

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

综上所述，无论是哪种编译器，无论是C还是C++，对一个变量指定用 **`alignas`** 进行修饰时，将它摆放在变量声明语句的最前面才是最通用的形式。

而C++中，**`alignas`** 用于修饰结构体的摆放位置在编译器中都是一样的；而C11中则暂不支持对结构体的修饰。

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

## CMake的常用用法集合

- [cmake 简介](https://www.cnblogs.com/lidabo/p/7359422.html)
- [CMAKE最全实战(1)](https://www.toutiao.com/i6858063275733713416/)
- [CMAKE最全实战(2)](https://www.toutiao.com/a6859561394904236547/)
- [If value not equal in cmake 2.8](https://stackoverflow.com/questions/11741325/if-value-not-equal-in-cmake-2-8)（使用`if(NOT <expression>)`时，里面的 **`NOT`** 必须是全大写）
- [cmake构建时指定编译器架构(x86 or x64)](https://www.cnblogs.com/lidabo/p/12017014.html)
- [CMake平台判断](https://blog.csdn.net/bianchengjingling22/article/details/88810593)
- [Android NDK 开发之 CMake 必知必会](https://blog.csdn.net/zhying719/article/details/82657519)
- [CMAKE添加编译选项](https://blog.csdn.net/qinglongzhan/article/details/80743731)（汇编语言的编译选项的环境变量：`CMAKE_ASM_FLAGS`）
- [如何使用CMake为单个目标编译具有不同选项的不同源文件？](https://www.javaroad.cn/questions/90941)
- [cmake 中使用环境变量](https://www.cnblogs.com/stdpain/p/13467203.html)
- CMake同时指定当前项目支持C、C++和CUDA：
```cmake
PROJECT(project_name C CXX CUDA)
```
- CMake给Visual Studio设置环境变量，使用`VS_DEBUGGER_ENVIRONMENT`。具体可参考：[Correct use of VS_DEBUGGER_WORKING_DIRECTORY etc.](http://cmake.3232098.n2.nabble.com/Correct-use-of-VS-DEBUGGER-WORKING-DIRECTORY-etc-td7599386.html)（其中，正确地设置`VS_DEBUGGER_ENVIRONMENT`变量的方式如下所示）
```cmake
set_target_properties(appName PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY "PATH=${CMAKE_INSTALL_PREFIX}/bin;%PATH% \$(LocalDebuggerEnvironment)"
```
- CMake为MSVC安装pdb调试文件：
```cmake
install(FILES $<TARGET_PDB_FILE:libname> DESTINATION bin)
```
- 在项目安装时，将指定文件重命名然后复制到指定目标路径：
```cmake
install(FILES ${MY_SRC_LIB}/file.txt  RENAME file.log  DESTINATION dst_dir)
```
- 用CMake来拷贝文件：
```cmake
file(COPY "${CMAKE_SOURCE_DIR}/some_dir/header.h" "${CMAKE_SOURCE_DIR}/another_dir/resource.res" DESTINATION "${CMAKE_BINARY_DIR}/dir")
```
- [In CMake, how can I test if the compiler is Clang?](https://stackoverflow.com/questions/10046114/in-cmake-how-can-i-test-if-the-compiler-is-clang)
- [switching between gcc and clang-llvm using cmake](https://stackoverflow.com/questions/7031126/switching-between-gcc-and-clang-llvm-using-cmake)
- CMake添加带有字符串的宏定义： 
```cmake
ADD_COMPILE_DEFINITIONS(SOME_DIR="${CMAKE_INSTALL_PREFIX}")
```
或是
```cmake
ADD_COMPILE_DEFINITIONS(SOME_DIR=\"${CMAKE_INSTALL_PREFIX}\")
```
- [cmake:设置编译选项的讲究(add_compile_options和CMAKE_CXX_FLAGS的区别)](https://blog.csdn.net/10km/article/details/51731959)
- [cmake中链接系统标准库](https://blog.csdn.net/ly890700/article/details/72806033)
- [cmake引入第三方库](https://blog.csdn.net/yuegooxi/article/details/123706146)
- CMake修改项目最终生成文件名的前缀和后缀：`set_target_properties(project_name PROPERTIES PREFIX "prefix")`；`set_target_properties(project_name  PROPERTIES SUFFIX "suffix")`。比如，要把输出文件扩展名改为 **.suf**：`set_target_properties(project_name PROPERTIES SUFFIX ".suf")`。如果当前CMake项目是一个Linux上的动态链接库，并且我们想让生成 .so 文件不带有“lib”前缀，则可以：`set_target_properties(MySharedLib PROPERTIES PREFIX "")`，那么最后将会生成“MySharedLib.so”文件。
- 用CMake生成Eclipse C/C++项目工程：`cmake -G"Eclipse CDT4 - Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug ...`。
- [Using NASM with CMake and Clang](https://metricpanda.com/using-nasm-with-cmake-and-clang/)
- CMake中开启汇编文件的编译：类Unix下使用GAS为 `ENABLE_LANGUAGE(ASM)`；Visual Studio下使用MASM为 `ENABLE_LANGUAGE(ASM_MASM)`；在Android Studio中使用为x86架构NASM，为：`enable_language(ASM_NASM)`。
- CMake中设置CUDA额外编译选项：`TARGET_COMPILE_OPTIONS(project_name PRIVATE $<$<COMPILE_LANGUAGE:CUDA>: --use_fast_math --gpu-architecture=sm35>)`
- CMake中启用CUDA单独编译（即relocatable device code，-rdc=true）：
```cmake
SET_TARGET_PROPERTIES(project_name PROPERTIES INTERFACE_LINK_LIBRARIES "" CUDA_SEPARABLE_COMPILATION ON)
```
- CMake中调用其他进程获取相应字符串值：
```cmake
# This module determines which compute capability / SM version
# we should be compiling our CUDA code for, and adds the appropriate
# switch to the NVCC compiler flags - so that you don't have to worry
# about it.
#
# TODO: Be willing to take CUDA_CC, CUDA_TARGET_COMPUTE_CAPABILITY, 
# CUDA_TARGET_COMPUTE or CUDA_TARGET_COMPUTE_CAP and maybe even 
# those without the CUDA_ prefix

if (NOT CUDA_TARGET_COMPUTE_CAPABILITY)
        if("$ENV{CUDA_SM}" STREQUAL "")
                set(ENV{CUDA_INCLUDE_DIRS} "${CUDA_INCLUDE_DIRS}")
                set(ENV{CUDA_CUDART_LIBRARY} "${CUDA_CUDART_LIBRARY}")
                set(ENV{CMAKE_CXX_COMPILER} "${CMAKE_CXX_COMPILER}")
                execute_process(COMMAND bash -c "${CMAKE_CURRENT_SOURCE_DIR}/scripts/get_cuda_sm.sh"  OUTPUT_VARIABLE CUDA_TARGET_COMPUTE_CAPABILITY_) 
        else()
                set(CUDA_TARGET_COMPUTE_CAPABILITY_ $ENV{CUDA_SM})
        endif()

        set(CUDA_TARGET_COMPUTE_CAPABILITY "${CUDA_TARGET_COMPUTE_CAPABILITY_}" CACHE STRING "CUDA compute capability of the (first) CUDA device on the system, in XY format (like the X.Y format but no dot); see table of features and capabilities by capability X.Y value at https://en.wikipedia.org/wiki/CUDA#Version_features_and_specifications")

        execute_process(COMMAND bash -c "echo -n $(echo ${CUDA_TARGET_COMPUTE_CAPABILITY})" OUTPUT_VARIABLE CUDA_TARGET_COMPUTE_CAPABILITY) 
        execute_process(COMMAND bash -c "echo ${CUDA_TARGET_COMPUTE_CAPABILITY} | sed 's/^\\([0-9]\\)\\([0-9]\\)/\\1.\\2/;' | xargs echo -n" OUTPUT_VARIABLE FORMATTED_COMPUTE_CAPABILITY) 

        message(STATUS "CUDA device-side code will assume compute capability ${FORMATTED_COMPUTE_CAPABILITY}")
endif()

set(CUDA_GENCODE "arch=compute_${CUDA_TARGET_COMPUTE_CAPABILITY},code=compu
```

<br />

## makefile的常用用法集合

- [GNU Make in Detail for Beginners](https://opensourceforu.com/2012/06/gnu-make-in-detail-for-beginners/)
- [linux下的C语言开发（makefile编写详解）](https://www.toutiao.com/i6763898618379239950/)
- [全网最牛Linux内核Makefile文件详解](https://www.toutiao.com/i7034387758751678988/)
- [Makefile编译选项](http://blog.chinaunix.net/uid-24612247-id-176517.html)
- [Makefile编译时怎么打印出变量值](https://blog.csdn.net/zygblock/article/details/53330643)

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

- 对某一类型做cv限定符的移除并声明一个对象

```cpp
    const int c = 100;
    std::decay<decltype(c)>::type a = c;        // a为int类型
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

- C++原生字符串字面量（Raw string literal）

```cpp
    const char16_t* raw_u16string = uR"(你好，世界！)";
    std::u16string u16str(raw_u16string);
    printf(R"(The raw string length is: %zu
            )", u16str.length());
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


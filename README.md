# C Family Programming Languages Relevant Resource Collection
类C语言编程相关

<br />

1. [Objective-C Runtime](https://developer.apple.com/documentation/objectivec?language=objc)
1. [详解C语言中的stdin，stdout，stderr](http://blog.csdn.net/Crazy_Tengt/article/details/72717144)
1. [C语言压缩文件和用MD5算法校验文件完整性的实例教程_C 语言](https://yq.aliyun.com/ziliao/119635)
1. [C/C++下scanf的%匹配以及过滤字符串问题](https://www.toutiao.com/a6659550631625228808)
1. [链接过程中的符号重定位_C底层](http://blog.csdn.net/darkfaker/article/details/79370796)
1. [类Unix系统中如何获取另一个程序的输出内容](https://baike.baidu.com/item/popen)
1. [使用popen执行shell命令并获取返回结果](https://www.cnblogs.com/hiawind/p/9089288.html)
1. [C语言中的系统库system函数](https://baike.baidu.com/item/system/15078602?fr=aladdin)
1. C语言将控制台输出内容转存到指定文件：`freopen(filePath, "w", stdout);`。用完之后再用`fclose`关闭文件即可。在转存过程中，控制台内容仍然会输出。
1. [《高级语言内的单指令多数据流计算(SIMD)》整理](https://www.cnblogs.com/zenny-chen/archive/2012/05/06/2486030.html)
1. [gdb到底是怎样实现的？](https://www.toutiao.com/a6699652803918299655)
1. [用Verilog实现流水移位寄存器，请尽量不要使用“阻塞赋值”](https://www.toutiao.com/a6746164678080086531/)


## 我的一些C语言有趣函数库

统计一个无符号32位整型有多少个比特为1。

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


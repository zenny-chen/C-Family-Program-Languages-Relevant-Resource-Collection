#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

#define _USE_MATH_DEFINES   1

#ifndef __USE_MISC
#define __USE_MISC          1
#endif

#include <math.h>

#if _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif // _WIN32


extern void CPPTest(void);

int main(int argc, const char* argv[])
{
#if _WIN32
    SetConsoleOutputCP(CP_UTF8);

    if (SwitchToThread()) {
        puts("SwitchToThread Successful!");
    }
    else {
        puts("SwitchToThread failed!");
    }
#endif

    printf("π + e = %f\n", M_PI + M_E);

    CPPTest();
}


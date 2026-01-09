#!/bin/sh
mkdir build
gcc  main.c  -o build/main.o  -c  -std=gnu17  -O0  -g
g++  hello.cpp  -o build/hello.o  -c  -std=gnu++17  -O0  -g
#as   hello.S -o build/hello.o  -c  -g

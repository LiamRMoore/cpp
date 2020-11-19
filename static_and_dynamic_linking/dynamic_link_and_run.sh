#!/bin/bash
# see https://medium.com/@yanyue1991/c-development-tutorial-4-static-and-dynamic-libraries-7b537656163e
# create dynamic library. recall lib...so convention necessary for linker
g++ -shared -o libmy_math.so my_math.o
# link
g++ main.o -L. -lmy_math -o a.out
# g++ main.o my_math.so -o a.out # equivalently
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$(pwd)
# alternatively, can add -rpath flag to speficy dir
./a.out

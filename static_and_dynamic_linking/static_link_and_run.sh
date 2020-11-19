#!/bin/bash
# create archive from object file of my_math.o
ar cr libmy_math.a my_math.o
# static link with main, look for my_math.o in .
g++ main.o -L. -lmy_math -o a.out
./a.out

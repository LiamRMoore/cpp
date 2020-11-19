#!/bin/bash
# compile and assemble, don't link
g++ -c main.cpp -o main.o
g++ -c my_math.cpp -o my_math.o
# link
g++ main.o my_math.o -o a.out
./a.out
#!/bin/bash
gcc -c *.c
gcc -shared -o *.o liball.so
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH

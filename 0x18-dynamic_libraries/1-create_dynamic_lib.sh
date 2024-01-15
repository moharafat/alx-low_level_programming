#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -o *.c liball.so *.o

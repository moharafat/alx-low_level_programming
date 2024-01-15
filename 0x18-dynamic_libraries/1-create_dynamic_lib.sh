#!/bin/bash
gcc -c -fPIC *.c
gcc -shared *.c liball.so

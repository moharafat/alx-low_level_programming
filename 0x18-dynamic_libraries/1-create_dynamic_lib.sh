#!/bin/bash
gcc -fpic -c *.c
gcc -shared *.c liball.so

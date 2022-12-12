#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c -fpic
gcc *.o -shared -o liball.so

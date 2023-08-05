#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c $(ls *.c | grep -v "main.c")
ar rcs liball.a *.o

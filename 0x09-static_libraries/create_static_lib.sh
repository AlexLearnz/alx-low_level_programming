#/bin/bash
gcc -Wall -Werror -Wextra -pedantic -stdgnu=89 -c *.c
ar rc liball.a *.o

#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.o
ar -rc liball.a *.o
ranlib liball.a

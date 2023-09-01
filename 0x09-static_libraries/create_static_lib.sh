#!/bin/bash
gcc -c *.c
ar -rc liball.a $(ls *.o | grep -v 'main.o')
ranlib liball.a
rm -f *.o

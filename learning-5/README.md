## Problem
1. As the scale of the project increased the number of .c files also increased.
2. Makefiles were getting long and repetitive. Every .c file needed a corresponding .o rule. Example:
```
file1.o: file1.c
    gcc -c file1.c -o file1.o
file2.o: file2.c
    gcc -c file2.c -o file2.o
```

## Solution
1. Makefile introduced implicit rules.
2. Now, make automatically knew how to build .o files from .c files without specifying commands:
```
program: file1.o file2.o
    gcc -o program file1.o file2.o
```
3. make automatically assumed:
```
gcc -c file1.c -o file1.o
gcc -c file2.c -o file2.o
```

## Hands-on
1. Open the Makefile in an editor.
2. Observe that the rules for building add.o and main.o are commented.
3. Exit and run 'make main'. You see that the .o files still get generated. Make runs the .o generation cmds for you.

Note: In case you are using a different gcc, you need to add it to the CC variable. Ex. 
```
CC = gcc
```

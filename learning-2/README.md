## Problem
1. Now we know **Makefile** works with the core concept of target, dependencies, and rule.
2. Even with this, the programmers faced problems.
3. The programmers needed to remember what are files that needed to be compiled before compiling the final target (forward dependencies).
5. This was a confusing task for the developers.

## Solution
1. Makefile solves the problem of compiling the required files by the use of dependencies section.
2. When a target is built all its dependecies get build first.

## Hands-on
### Case-1
1. The folder contains files add.c, add.h, and main.c.
2. The Makefile contains targets main, main.o and add.o.
3. The dependency for add.o is the existence of add.c which is already satisfied.
4. The dependency for main.o is the existence of main.c which is already satisfied.
5. The dependency for main is the existence of add.o and main.o which during the first execution does not exist.
6. Hence when 'make main' is run, first the target for main.o is called and then the target for add.o is called.
7. Once both files are generated, the rule for main gets executed.
8. This way the user need not to worry which targets needs to be built before building the final target.

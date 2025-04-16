## Problem
1. Now we know Makefile works with the core concept of target, dependencies, and rule.
2. But even with this, the programmers needed to remember what are all the files that needed to be re-compiled if one file is changed.
3. This was a confusing task for the developers.

## Solution
1. Makefile solves the problem of re-compiling the required files by the use of dependencies section.
2. When a target is built all its dependecies get build.
3. Also, when a dependency is changed all the dependent targets get built.

## Hands-on
### Case-1
1. The folder contains files add.c, add.h, and main.c.
2. The Makefile contains targets main, main.o and add.o.
3. The dependency for add.o is the existence of add.c.
4. The dependency for main.o is the existence of main.c.
5. The dependency for main is the eistence of add.o and main.o which during the first execution does not exist.
6. Hence when 'make main' is run, first the target for main.o is called and then the target for add.o is called.
7. Once both files are generated, the rule for main gets executed.
8. This way the user need not to worry which targets needs to be built before building the final target.

### Case-2
1. Modify add.c from 'res = i + j' to 'res = i + j -1'.
2. Run 'make main'.
3. Here add.o target is re-built because of the change made, and also main target get re-built.
4. This way the user need not to worry what dependency targets needs to be built if a file gets changed. Makefile handles the forward dependencies as well.

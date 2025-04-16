## Problem
1. From learning-2 we know that developers need not worry about the file dependencies any more.
2. But later developers faced another problem. If any one file is changed all the dependencies were rebuilt even though there were no changes in them.
3. This increased the build time even though the changes were minimal.
   
## Solution
1. Makefile used last modified time for deciding is a target has to be run.
2. Makfiles run the dependencies only if its last modified timestamp is greater than that of the target.
3. This way only the updated files get recompiled, greatly reducing the incremental build time.
   
## Hands-on
1. The folder contains subtract.c, subtract.h, add.c, add.h, and main.c.
2. Run 'make main'. All the dependencies get built. You will see prints for building subtract.o, add.o, main.o, and main.
3. Now go to subtract.c and remove the comment in line 1 and save the file. The last modified time of subtract.c is now greater than main.
4. Run 'make main'. You only see prints for building subtract.o and main.
5. The build for add.o and main.o is skipped because its and its dependencie's last modified timestamp is lesser than that of main.

Note: The last modified timestamp is not compared just for one level of dependencies but for all the recurring dependencies. 
      In this case, subtract.o modified timestamp is still less than that of main. But subtract.o's dependency subtract.c has a modified timestamp greater than subtract.o.
      Hence subtract.o and all its dependent tragets get rebuilt.

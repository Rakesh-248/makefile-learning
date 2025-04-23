## Problem
1. With implicit rule in Makefile one need not to write rules for generating .o files.
2. This made makefiles concise.
3. But implicit rules were rigid. Implicit rule exmaple.
```
cc -c main.c -o main.o
```
4. This does not allow the user to pass extra include flags, linker flags, and other flags that is used during compilation.
5. Implicit rules could be used only for very simple and small projects.
   
## Solution
1. To improve implicit rules, Makefile introduced 'automatic variables'.
2. List of automatic variables.
```
$@	The target name of the rule (e.g., myprog in myprog: main.o)
$%	The target member name, if the target is an archive member (like libfoo.a(member.o))
$<	The first prerequisite (e.g., main.c in main.o: main.c)
$^	All prerequisites, with duplicates removed
$+	All prerequisites, with duplicates preserved
$*	The stem of a pattern rule (e.g., foo for foo.o matched from %.o: %.c)
$(?)	All prerequisites that are newer than the target (i.e., out-of-date)
$(@D)	The directory part of $@ (e.g., src for src/foo.o)
$(@F)	The file part (basename) of $@ (e.g., foo.o from src/foo.o)
$(<D)	Directory part of $<
$(<F)	File part of $<
$(^D)	Directory part of $^
$(^F)	File part of $^
```
4. Using the automatic variables one can achieve the same functionality of implicit rule but with additional flexibility of passing flags etc.
5. One example.
```
CFLAGS = -Wall -g
CC = gcc

.c.o:
    $(CC) $(CFLAGS) -c $< -o $@
```
6. Here is the use of another rule called 'suffix rule' which is '.c.o' which means generate .o for all .c.
7. This was a very early rule brought in even before the implicit rule. It is not used much now a days.
8. We can see in the example, instead of an implicit rule, make used the one we defined for generating the .o files.
9. This gives the advange of implicit rule of reducing the amount of code and also adds the flexibility to modify the gcc cmd.

## Hands-on
1. Check the Makefile. A rule for generating .o files is created by passing the cflags.
2. Run 'make main'.
3. You will see the prints 'Building add.o' and 'Building main.o' as '$<' is the prerequisite.
4. Also note, the executable size in learning-5 is lesser than the executable generated in this example. This is because we are passing -g option in this example.

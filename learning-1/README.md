# The Time Before Makefiles
## Before 1970s
In the early days of computing, people wrote relatively small programs that could be compiled manually. A developer might compile a program like this:
```sh
gcc main.c -o main
```

## 1970s - The rise of large software projects

gcc worked fine for small projects. But as software grew in size and complexity, several problems emerged:
1. Large systems had hundreds or thousands of files, which needed a separate gcc command for each.
2. If a programmer changed just one file, they had to recompile everything manually, which was a waste of time.
3. If file1.c depended on file2.h, changing file2.h meant file1.c needed to be recompiled. Developers had to remember these file dependencies.
4. Different developers used different compile flags leading to "It works on my machine" problems.

## 1976 - Birth of make

Stuart Feldman, an engineer at Bell Labs, created make in 1976 to automate the build process.
The idea was simple:
- Describe the build process in a file (Makefile).
- Run a program (make) to execute the build when necessary.

### The Core Concept: Targets, Dependencies, and Rules

The make system had a simple yet powerful structure:
```
target: dependencies
  rule
```
Each part has a purpose:
1. Target: What you want to build.
2. Dependencies: Files that the target relies on.
3. Rule: The commands to build the target.

```
main.o: main.c main.h
  gcc -c main.c -o main.o
```

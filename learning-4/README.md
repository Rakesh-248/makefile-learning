## Problem
1. Till now the targets in Makefiles corresponded to an actual file. But not all targets needed to be a file or be dependent on the last modified time of the file.
2. Ex. The following target does not depend on a file (it does not generate a file 'delete'), and it should always run on calling the target.
```
delete:
    rm -rf *
```
3. In this case Makefile searches for the file 'delete' because it is not found it will run the rule.
4. But what if in the later stage of development, some other module creates a file 'delete'.
5. In that case, next time you run make delete, make sees a file delete, thinks the target is already up to date and does not run the 'rm -rf *' cmd.
6. To avoid this, Makefile provides an utility called '.PHONY'.

## Solution
1. In a Makefile, a phony target is a label for a command that doesn't correspond to a real file.
```
.PHONY: clean
clean:
    rm -rf *.o
```
2. Here, clean is a phony target. It doesn't create a file named clean; it's just a name for an action (deleting files).
3. By declaring a target as .PHONY, you tell make to always run it, no matter what files exist.

## Hands-on
1. The Makefile contains targets 'main', 'clean', and 'trial'.
2. In the current directory first run 'make main'.
3. This will generate the .o and the executable files.
4. The folder also contains files 'clean' and 'trial'.
5. Run 'make trial'. As the file trial already exists the echo cmd under it does not get called.
6. Run 'make clean'. The 'clean' target is declared as .PHONY. Hence make skips the file check and always executes everything under it. Hence we will be able to see the echo prints.
7. .PHONY is generally used in clean cmds which is used for clearing the object files and executables.

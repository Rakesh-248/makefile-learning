# Basic makefile cmd working

#Makefile generic structure
#---------------------------
#target: dependencies
#	rule
#---------------------------

#target: 	 	main
# Historically, this is the name of the file to be generated. In this case it is the executable main.
# Need to specify this target along with the make cmd. Example "make main".

#dependencies: 		main.c
# Historically, one other problem that the developers faced was for a small change in one file among thousand, all the files had to be recompiled.
# This problem was solved in Makefile by the introduction of dependencies. 
# The target gets executed only if the target file "main" has a last modified timestamp less than that of the dependency file main.c.
# This way on subsequent running of make, the compilation gets skipped if there was no modification on main.c from the previous run of make.
# This makes the compilation faster.

#rule: 			gcc main.c -o main
# Command to be executed for generating the target.

main: main.c
	gcc main.c -o main

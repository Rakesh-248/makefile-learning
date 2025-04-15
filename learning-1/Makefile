# Basic makefile cmd working

#Makefile generic structure
#---------------------------
#target: dependencies
#	rule
#---------------------------

#target: 	 	main
# Historically, this is the name of the file to be generated. In this case it is the executable main.
# One has to specify this target name along with the make cmd during build. Example "make main".

#dependencies: 		main.c
# Before running the rule for the target (main), make checks if the dependency files are present.
# If the file is not present then it runs the rule to generate the file.


# Historically, one other problem that the developers faced was for a small change in one file among thousand, all the files had to be recompiled.
# This problem was solved in Makefile by the introduction of dependencies. 
# The target gets executed only if the target file "main" has a last modified timestamp less than that of the dependency file main.c.
# This way on subsequent running of make, the compilation gets skipped if there was no modification on main.c from the previous run of make.
# This makes the compilation faster.

#rule: 			gcc main.c -o main
# Command to be executed for generating the target.

main: main.c
	gcc main.c -o main

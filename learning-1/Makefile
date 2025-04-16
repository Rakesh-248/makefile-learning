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

#rule: 			gcc main.c -o main
# Command to be executed for generating the target.

main: main.c
	gcc main.c -o main

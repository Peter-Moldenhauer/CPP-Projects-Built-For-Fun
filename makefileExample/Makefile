#<all:> tells make to start with the target for dateProgram
#dateProgram is the name of the executable file that will be made

all: dateProgram

#The dateProgram target is dependent on two object files: mainDate.o and date.o
#If all of the object files (.o) are present in the current directory, the g++ command following dateProgram will execute.  

dateProgram: mainDate.o date.o
	g++ mainDate.o date.o -o dateProgram

#If the object files are not present, then the commands following targets for the missing .o files will execute accordingly.
#The targets for each object file is dependent on the presence of the .cpp source files.

mainDate.o: mainDate.cpp
	g++ -c mainDate.cpp

date.o: date.cpp
	g++ -c date.cpp

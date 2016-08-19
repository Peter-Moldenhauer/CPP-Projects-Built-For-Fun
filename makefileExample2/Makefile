####################################################
#Name: Peter Moldenhauer
#Date: 8/18/16
#Description: This is a makefile that builds the 
#executable file "shapes" from the files shapes.h
#shapes.cpp and shapesMain.cpp
#####################################################

# #'s are line-comments


# CXX is a standard variable name used for the g++ compiler.
CXX = g++


# CXXFLAGS is a standard variable name for compile flags.
# -std=c++0x specifies to use a certain language version.
CXXFLAGS = -std=c++0x


# -Wall turns on all warnings
CXXFLAGS += -Wall


# -pedantic-errors strictly enforces the standard
CXXFLAGS += -pedantic-errors


# -g turns on debug information
CXXFLAGS += -g 


#########################
##### USER SECTION ######
#########################


# SRCS is a standard name for the source files
# Edit as needed
SRC1 = shapes.cpp
SRC2 = shapesMain.cpp
SRCS = ${SRC1} ${SRC2} 


# HEADERS is a standard name for the header files.
# Edit as needed
HEADER1 = shapes.h
HEADERS = ${HEADER1} 


# These will be the executable names
# Edit as needed
PROG1 = shapes
PROGS = ${PROG1}


# This is the name of the document(s)
# Edit as needed
DOC = 


# This is the name of the compressed file
# Edit name as needed but keep the format
ZIP = shapes_moldenhauer.zip


#######################
#### BUILD SECTION ####
#######################


# Typing "make" in terminal calls the first build available 
# Typing "make all" in terminal calls this build
all:
	${CXX} ${CXXFLAGS} ${SRCS} -o ${PROG1}


# Typing "make zip" in terminal calls this build
# This creates a compressed file
zip:
	zip ${ZIP} ${SRCS} ${HEADERS} ${DOC} Makefile 


# Typing "make clean" calls this build
# This is designed to clean up the folder
# Be careful with this, edit as needed
clean:
	rm -f ${PROGS} *.o *~ 

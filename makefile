# Makefile for morse code project

# to create morse.exe, we need morse.o, main.o
# these two will be used in the g++ command
morse: morse.o main.o
	g++ morse.o main.o -o morse

# we need morse.cpp to make morse.o
morse.o: morse.cpp
	g++ -c morse.cpp

# we need main.cpp to make main.o
main.o: main.cpp
	g++ -c main.cpp

# cleans out files with out and .o extensions
clean:
	rm *.out *.o *.exe
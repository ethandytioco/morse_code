# READ ME
=========

## Not sure / forgot what makefile does? ----
"Notes - how to create makefile.txt" and "makefile" have notes that describe what's happening.
Basically, makefile efficiently compiles your project based on what gets updated (instead of compiling absolutely everything al the time).

A {name}.exe file is created as a result.



# How to compile using makefile
If not already, PowerShell (run as system admin), enter: choco install make
	_This will set you up with GNU Make, which will let you use a command to build._

Then, open cmd to the project folder.

Enter: **make**
	_There might be some output stuff like:_
	_g++ morse.o main.o -o morse_



---- TO RUN MORSE.EXE ----
Instead of double clicking on morse.exe, open cmd, and enter: **morse.exe**

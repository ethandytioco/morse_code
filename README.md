-------- READ ME --------

---- Not sure / forgot what makefile does? ----
"Notes - how to create makefile.txt" and "makefile" have notes that describe what's happening.
Basically, makefile efficiently compiles your project based on what gets updated (instead of compiling absolutely everything al the time).

A {name}.exe file is created as a result.



---- TO BUILD USING MAKEFILE ----
If not already, PowerShell (run as system admin), enter: choco install make
	This will set you up with GNU Make, which will let you use a command to build.

Then, open cmd to the project folder.

Enter: make
	There might be some output stuff like:
	g++ morse.o main.o -o morse



---- TO RUN MORSE.EXE ----
Instead of double clicking on morse.exe, open cmd, and enter: morse.exe

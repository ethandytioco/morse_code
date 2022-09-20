/*
	Name:	main.cpp
	Author:	Ethan Dy Tioco
	Desc:	Trying out creating a morse-code translator. Starting simple (letter-to-morse), then maybe implementing other features like:
			- file read/write
			- user presses space bar instead of typing dots and dash
			- audio response
*/
#include <iostream>
#include <string>
#include <cctype>			// isupper(char), tolower(char)
#include <unordered_map>
#include "morse.h"
using namespace std;


int main(){
	cout << "---- TEST: MORSE.EXE ----\n";
	Morse obj;
	obj.printMap();
	cout << '\n';
	cout << obj.getMorse("poggy woggy");
	return 0;
}
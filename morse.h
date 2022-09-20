/*
	Name:	morse.h
	Author:	Ethan Dy Tioco
	Desc:	Declarations for Morse class
*/
#ifndef Morse_H
#define Morse_H
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Morse{
	private:
	static const unordered_map <string, string> translate;
	
	public:
	Morse();
	
	void printMap();
	string getMorse(string input);
};

#endif
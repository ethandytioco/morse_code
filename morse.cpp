/*
	Name:	morse.cpp
	Author:	Ethan Dy Tioco
	Desc:	Init. unordered_map and implementing functions for Morse class
*/

#include <iostream>
#include <string>
#include <unordered_map>

#include <vector>	// needed for getAlphanumeric()
#include <sstream>	// needed for getAlphanumeric()
#include "morse.h"
using namespace std;

const unordered_map<string, string> Morse::toMorse = {
	{"a", ".-"},
	{"b","-..."},
	{"c","-.-."},
	{"d","-.."},
	{"e","."},
	{"f","..-."},
	{"g","--."},
	{"h","...."},
	{"i",".."},
	{"j",".---"},
	{"k","-.-"},
	{"l",".-.."},
	{"m","--"},
	{"n","-."},
	{"o","---"},
	{"p",".--."},
	{"q","--.-"},
	{"r",".-."},
	{"s","..."},
	{"t","-"},
	{"u","..-"},
	{"v","...-"},
	{"w",".--"},
	{"x","-..-"},
	{"y","-.--"},
	{"z","--.."},
	
	{"0","-----"},
	{"1",".----"},
	{"2","..---"},
	{"3","...--"},
	{"4","....-"},
	{"5","....."},
	{"6","-...."},
	{"7","--..."},
	{"8","---.."},
	{"9","----."},
	
	{" ", "/"},
	{".", "//"},
	{"?", "..--.."}
};

const unordered_map<string, string> Morse::toAlphanumeric = {	
	{".-","a"},
	{"-...","b"},
	{"-.-.","c"},
	{"-..","d"},
	{".","e"},
	{"..-.","f"},
	{"--.","g"},
	{"....","h"},
	{"..","i"},
	{".---","j"},
	{"-.-","k"},
	{".-..","l"},
	{"--","m"},
	{"-.","n"},
	{"---","o"},
	{".--.","p"},
	{"--.-","q"},
	{".-.","r"},
	{"...","s"},
	{"-","t"},
	{"..-","u"},
	{"...-","v"},
	{".--","w"},
	{"-..-","x"},
	{"-.--","y"},
	{"--..","z"},
	
	{"-----","0"},
	{".----","1"},
	{"..---","2"},
	{"...--","3"},
	{"....-","4"},
	{".....","5"},
	{"-....","6"},
	{"--...","7"},
	{"---..","8"},
	{"----.","9"},
	
	{"/", " "},
	{"//", "."},
	{"..--..", "?"},
	{" ", ""}		// morse specific: ignore spaces by translating them to an empty string
};

Morse::Morse(){}

void Morse::printMap(){
	cout << "\nunordered_map<string, string> toMorse:\n";
	for (auto i = toMorse.begin(); i != toMorse.end(); i++)
		cout << i->first << "\t-->\t" << i->second << '\n';
	
	cout << "\nunordered_map<string, string> toAlphanumeric:\n";
	for (auto i = toAlphanumeric.begin(); i != toAlphanumeric.end(); i++)
		cout << i->first << "\t-->\t" << i->second << '\n';
}

string Morse::getMorse(string input /*alphanumeric*/){
	// start the morse message with a slash
	string output = "/";
	
	for (int i = 0; i < input.size(); i++){
		// first convert to lowercase
		if (isupper(input[i]))
			input[i] = tolower(input[i]);
		
		output += toMorse.at(string(1, input[i])) + " ";
	}
	
	return output;
}

string Morse::getAlphanumeric(string input /*morse*/){
	string output = "";
	
	// instead of parsing through letter-by-letter, we have to parse through by token (word)
	vector<string> letters;
	string buffer;
	stringstream sStream(input);
	while (getline(sStream, buffer, ' ' /*delimeter*/)){
		letters.push_back(toAlphanumeric.at(buffer));
	}
	
	// now that we're done parsing through the Morse letters and converting them to alphanumeric,
	// build the output string
	for (int i = 0; i < letters.size(); i++)
		output += letters.at(i);
	
	return output;
}
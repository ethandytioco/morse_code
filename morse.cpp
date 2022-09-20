/*
	Name:	morse.cpp
	Author:	Ethan Dy Tioco
	Desc:	Init. unordered_map and implementing functions for Morse class
*/

#include <iostream>
#include <string>
#include <unordered_map>
#include "morse.h"
using namespace std;

const unordered_map<string, string> Morse::translate = {
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
	{"----.","9"}
};

Morse::Morse(){}

void Morse::printMap(){
	for (auto i = translate.begin(); i != translate.end(); i++)
			cout << i->first << "\t-->\t" << i->second << '\n';
}

string Morse::getMorse(string input){
	return "testing string Morse::getMorse(string input).\nInput:\t" + input;
}
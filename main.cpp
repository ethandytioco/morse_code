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

int menu(){
	int choice = 0;
	
	// Keep looping while choice is invalid
	while (choice < 1 || choice > 3){
		cout << "\n\n\n\n---- TEST: MORSE.EXE ----\n";
		cout << "[1] - Alphanumeric to Morse (send out)\n";
		cout << "[2] - Morse to Alphanumeric (receiving)\n";
		cout << "[3] - Exit\n";
		cout << "Enter choice: ";
		cin >> choice;
	}
	
	// only return choice when it's within [1, 3]
	return choice;
}

int main(){
	Morse obj;
	int choice = 0;
	string msg;
	
	while (choice != 3){
		msg = "";
		choice = menu();
		cin.ignore();
		
		if (choice == 3)
			break;
		
		// User didn't exit, so go through the menu options
		if (choice == 1){
			cout << "Enter message: ";
			getline(cin, msg);
			
			cout << "\nSend out:\n" << obj.getMorse(msg);
		}
		else if (choice == 2){
			cout << "For Morse->Alphanumeric, use:\n";
			cout << "/ for space\n";
			cout << "// for period\n";
			cout << "..--.. for ?\n\n";
			
			cout << "Enter message: ";
			getline(cin, msg);
			
			cout << "\nReceived:\n" << obj.getAlphanumeric(msg);
		}
	}
	
	cout << "\nExiting...\n";
	return 0;
}
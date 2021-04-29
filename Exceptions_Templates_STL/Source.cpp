/*
Jacob Lewis
CIS 1202
3-25-21

Instructions:
Class program
*/

#include "Header.h"

using namespace std;

//function prototypes
char character(char, int);
void checkStart(char);

//******
//main *
//******
int main() {
	char start, letter;
	int offset;

	cout << "\nEnter start letter: ";
	cin >>start;
	cout << "Enter offset: ";
	cin >> offset;
	validateNum(offset);
	cout << endl;

	try {
		checkStart(start);
	}
	catch (string invalidRangeException) {
		cout << invalidRangeException;
	}
	
	try {
		letter = character(start, offset);
		cout << "\nThe calculated character is: " << letter;
	}
	catch (string invalidCharacterException){
		cout << invalidCharacterException;
	}

	endFile();
}

//************
//checkStart *
//************
void checkStart(char start) {
	if (!isalpha(start)) {
		string invalidCharacterException = "ERROR: Start value does not equate to an alphabetical character.\n";
		throw invalidCharacterException;
	}
}

//***********
//character *
//***********
char character(char start, int offset) {
	char letter = (start + offset);

	if (!isalpha(letter)) {
		string invalidRangeException = "ERROR: Calculated value does not equate to an alphabetical character.\n";
		throw invalidRangeException;
	}

	return letter;
}
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
void checkLetter(char, int);

//******
//main *
//******
int main() {
	char start, letter;
	int offset;
	bool goodLetter = true;

	cout << "\nEnter start letter: ";
	cin >> start;

	cout << "Enter offset: ";
	cin >> offset;
	validateNum(offset);
	cout << endl;


	try {//Checks if start is a letter
		checkStart(start);
	}
	catch (string invalidCharacterException) {
		cout << invalidCharacterException;
		goodLetter = false;
	}

	try {//Calculates final letter and checks if is letter
		letter = character(start, offset);
	}
	catch (string invalidCaseException){
		cout << invalidCaseException;
		goodLetter = false;
	}

	try {//Checks if calculated character is letter
		checkLetter(start, offset);

	}
	catch (string invalidRangeException) {
		cout << invalidRangeException;
		goodLetter = false;
	}

	if (goodLetter == true) {//makes sure the calculated letter is only displayed if no exceptions were thrown.
		cout << "\nThe calculated character is: " << letter;
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

	if ((isupper(start) && islower(letter)) || (isupper(letter) && islower(start))) {
		string invalidCaseException = "ERROR: Calculated value must not change case.\n";
		throw invalidCaseException;
	}

	return letter;
}

//*************
//checkLetter *
//*************
void checkLetter(char start, int offset) {
	char letter = (start + offset);

	if (!isalpha(letter)) {
		string invalidRangeException = "ERROR: Calculated value does not equate to an alphabetical character.\n";
		throw invalidRangeException;
	}
	
}
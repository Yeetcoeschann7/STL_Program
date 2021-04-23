#include <iostream>
#include <iomanip>
#include <random>
#include <time.h>
#include <assert.h>
#include <string>
#include <cstring>
#include <Windows.h> //Sleep function
#include <fstream> //File input/output
#include <vector>
#include <algorithm>

using namespace std;

//*********************
// endFile            *
// Ends the program   *
//*********************
int endFile() {//method signature: whats going out, function name, whats coming in
	cout << endl << endl << setfill('-') << setw(100) << "-" << endl;//Ends program
	cout << "programmed by Jacob Lewis.\n";
	cout << "\npress enter to end the program... " << endl;
	cin.ignore(100, '\n');
	cin.get();
	return 0;
}


//**************************
// validateNum             *
// Validates numeric input *
//**************************
//Version if has min and max bounds
float validateNum(float validCheck, float max, float min) {
	float menuChoice = validCheck;
	do {
		if (cin.fail() || !(menuChoice <= max) || !(menuChoice >= min)) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid input. Please enter a numeric value between " << min << " and " << max << ": ";
			cin >> menuChoice;
		}
	} while (cin.fail() || !(menuChoice <= max) || !(menuChoice >= min));
	return menuChoice;
}
//Version if no min or max
float validateNum(float validCheck) {
	float menuChoice = validCheck;
	do {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid input. Please enter a numeric value: ";
			cin >> menuChoice;
		}
	} while (cin.fail());
	return menuChoice;
}
//Version for int with min and max
int validateNum(int validCheck, int max, int min) {
	int menuChoice = validCheck;
	do {
		if (cin.fail() || !(menuChoice <= max) || !(menuChoice >= min)) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid input. Please enter a numeric value between " << min << " and " << max << ": ";
			cin >> menuChoice;
		}
	} while (cin.fail() || !(menuChoice <= max) || !(menuChoice >= min));
	return menuChoice;
}
//Version for int with no min or max
int validateNum(int validCheck) {
	int menuChoice = validCheck;
	do {
		if (cin.fail()) {
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid input. Please enter a numeric value: ";
			cin >> menuChoice;
		}
	} while (cin.fail());
	return menuChoice;
}


/*

Colin Durocher - 10/5/2017 - 3

Assignment Name : Program Problem 3 : Three_Digit_Ascend_Descend_Selection

*/

// Libraries

#include <iostream>	// <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	// Define and Assign your variable(s)
	
	int Number;

	// Display Text
	cout << "Type a 3 digit number.\n";
	cin >> Number;
	int A = Number / 100;
	int B = (Number % 100 ) /10;
	int C = (Number % 100) % 10;
	if (A < B && B < C)
		cout << "your number is asending\n";
	else if (A > B && B > C)
		cout << "your number is desending\n";
	else
		cout << "your number is not asending and it is not  desending\n";
	pause(); // pauses to see the displayed text
}
/*

Colin Durocher - 10/5/2017 - 3

Assignment Name : Program Problem 3 : Three_Digit_Ascend_Descend_Selection

*/
// Edited By Luke Hage

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
	cout << "Type a 3 digit whole positive number.\n";
	cin >> Number;
     for (int n = 0; 99 < Number && Number < 1000; n++ ) {
		
	     // Math to find if asending, desending, or neither
		int A = Number / 100;
		int B = (Number % 100) / 10;
		int C = (Number % 100) % 10;
		
	     // Loop
		if (A < B && B < C) {
			cout << "Your number is asending\n";
		}
		else if (A > B && B > C)
			cout << "Your number is desending\n";
		else
			cout << "Your number is not in asending or desending order\n";
		cout << "Type a 3 digit number.\n";
		cin >> Number;
		if (n == 29) { // so it ends after 30 times
			pause(); // pauses to see the displayed text
			break; // Closes program after it has gone 30 times or if a none three digit number is entered
		}
		
	}
	
}

/*

Colin Durocher - 10/5/2017 - 3 - EDITED BY SAM BRYANT P 2

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
	
	// Start loop here, to ask for the number 30 times :

	for (int i = 0; i++;) {



		// Display Text
		cout << "Type a 3 digit number.\n";
		cin >> Number; // Take in number from user
		int A = Number / 100; // divide by 100 leaving with the first digit as digit A
		int B = (Number % 100) / 10; // mod 10 then divide by ten giving the second digit as B
		int C = (Number % 10); // you can actually just do mod 10 and it will work the same with less code. gives last digit as C
		if (A < B && B < C) // determine if ascending
			cout << Number << " is asending\n"; // Now displays their number
		else if (A > B && B > C) //determine if descending
			cout << Number << " is desending\n"; // Now displays their number
		else // if not any of those it must be neither, so display neither:
			cout << Number << " is not asending and it is not  desending\n"; // Now displays their number

		// TEST FOR IF I HAS REACHED 30 :

		if (i == 30) {
			pause(); // move pause here to end program after it has asked 30 times for the number.
		}

	}
	pause(); // pauses to see the displayed text
	//end
	// EDITED BY SAM BRYANT PERIOD 2
}

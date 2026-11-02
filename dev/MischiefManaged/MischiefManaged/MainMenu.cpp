#include "MainMenu.h"
#include <iostream>
using namespace std;

// Starting with the fake "method" aka in this case the empty default constructor. It makes all the objects.
MainMenu::MainMenu()
{}

//Now lets display the menu. We're calling on that method we made and we'll put the logic in there
void MainMenu::displayMenu()
{
	cout << divider << "\n\n";
	cout << "                                               " << Title << endl;
	cout << "                                     " << subTitle << "\n\n";
	cout << divider << "\n\n\n";
	
	
	cout << "                                         " << greeting << endl;
	cout << "                          " << userInstructionsName << "\n\n";
	cout << "                                        "  << typeUserNameHere;
	getline(cin, djName);
	cout << "\n\n" << divider << "\n\n\n";
	cout <<  "                                          " << "Hello DJ, " << djName << "!" << endl;
	cout << "\n" << "                          " << "Welcome to Mixchief Managed, your new personal EDM Music Sorter.\n\n";
	cout << "                          " << userInstructionsSelection<< endl;
	cout << "\n" << "                                          " << Selection1 << endl;
	cout << "                                          " << Selection2 << endl;
	cout << "                                          " << Selection3 << endl;
	cout << "\n" << "                                          " << typeNumberSelectionHere; cin >> userChoice;

// User input is going to pull up one of the following options; Case switch is good for this since we're using int
	switch (userChoice)
	{
	case 1:
		// Call Duplicate Scanner
		break;

	case 2:
		// Call Full Music Library
		break;

	case 3:
		// Call Search by Song
		break;

	default:
		cout << "Invalid selection. Please try again." << endl;
		break;
	}
}


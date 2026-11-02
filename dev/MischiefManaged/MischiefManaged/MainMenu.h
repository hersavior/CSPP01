#pragma once
#include "MusicLibrary.h"
#include "Detector.h"
#include "Track.h"
using namespace std;
class MainMenu
{
	string divider = "------------------------------------------------------------------------------------------------------------------------";
	string Title = "Mixchief Managed";
	string subTitle = "EDM Music Merger & Music Management";
	string greeting = "Hello Music Producer #001! \n";
	string userInstructionsName = "Please tell me your DJ name so I know how to refer to you.";
// an input for user to set their personalized DJ Name throughout program	
	string djName;
	string typeUserNameHere = "DJ: ";
	string userInstructionsSelection = "Please select from one of the following menu options. Input the corresponding number below.";
	string typeNumberSelectionHere = "Option #: ";
	int userChoice;
	string Selection1 = "1 = Duplicate Scanner";
	string Selection2 = "2 = Display Full Music Library";
	string Selection3 = "3 = Search by Song";
	 // an input for the user to select an option
	 


public:
//Constructor
	MainMenu();
// A fuction to display the menu void cause its not gonna return anything
	void displayMenu();

};


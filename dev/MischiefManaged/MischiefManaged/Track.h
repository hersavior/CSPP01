#pragma once
#include <string>
using namespace std;
class Track
{
// Member variables
	string fileName;
	string filePath;
	string versionType;
	string Title;
	string Format;
	string Genre;

public:
// A constructor
	Track();

	//Our Getters
	string getTitle();
	string getFormat();
	string getGenre();


	// And Setters that change the info so they use a void return
	void setTitle(string Title);
	void setFormat(string Format);
	void setGenre(string Genre);

};


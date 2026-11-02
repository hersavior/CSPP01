#pragma once
#include <string>
using namespace std;
class Track
{
// Member variables
	string fileName;
	string filePath;
	string VersionType;
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
	string getVersionType();


	// And Setters can change the info so they use a void return
	void setTitle(string newTitle);
	void setFormat(string newFormat);
	void setGenre(string newGenre);
	void setVersionType(string newVersionType);
};


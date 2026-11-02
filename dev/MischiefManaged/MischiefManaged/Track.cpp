#include "Track.h"
#include <iostream>
using namespace std;

// Starting with the fake "method" aka in this case the empty default constructor. It makes all the objects.
Track::Track()
{}
//Now the real methods - the getters are gonna get the info. In this case my getTitle method.
//Just return not printing cause that'll happen with my printing class I think Im making
//For now I just need my getter to get that info and hold it in title;
//its return type is a string
string Track::getTitle() 
{
	return Title;

}
//return type is string
//Track is our class
// getFormat is an Member function in Track class
// and Format is an attribute of the Track class
string Track::getFormat()
{
	return Format;
}
//still a string return 
//still using my class to start with
string Track::getGenre()
{
	return Genre;
}
//This one is a biggie its the classification of what type it is 
// we're using that data as the main part of our program
string Track::getVersionType()
{
	return VersionType;
}
//Now we make the setter methods
//void returns
//track class
//now after getting the info we are setting it
void Track::setTitle(string newTitle)
{
//Title officially holds the updated correct title info
	Title = newTitle;
}
void Track::setFormat(string newFormat)
{
//Format officially holds the updated correct format info
	Format = newFormat;
}
void Track::setGenre(string newGenre)
{
	Genre = newGenre;
}
void Track::setVersionType(string newVersionType)
{
	VersionType = newVersionType;
}


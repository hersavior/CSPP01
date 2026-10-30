#include "Track.h"
#include <iostream>
using namespace std;

// Starting with the fake "method" aka in this case the constructor. It makes all the objects.

Track::Track()
{}
//Now the real methods - the getters are gonna get the info. In this case my 
string Track::getTitle() 
{
	return Title;

}
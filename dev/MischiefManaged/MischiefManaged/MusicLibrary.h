#pragma once
#include "Track.h"
#include <vector>
#include <string>
using namespace std;

class MusicLibrary

{
//I was trying to figure out what this would contain
// all the music tracks should be in a vector
//We're gonna go through that vector alot to search for duplicates
//and identify how many vips and versions
//we're getting the track info from track class
	vector <Track> fullLibrary;
	vector<string> MusicFolders;
//okay now what is it gonna do?
public:
//it's gotta go through all the music files and add them into a printable readable full library
	void loadMusicFiles();
	vector<Track> getFullLibrary();
};


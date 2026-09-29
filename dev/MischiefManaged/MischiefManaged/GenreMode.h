#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//Let's start by creating a genre mode class that will allow the user to select a genre and run it, scanning the music files. 
// It will hold all the genre vectors that users scan through.
//Making my vectors private so other parts of my code can't access it unless they are a friend of the class.
class GenreMode
{
private:
	vector<string> genres = { "Dubstep", "Drum and Bass", "Trap", "House", "Techno", "Trance", "Hardstyle", "Jungle", "Latin", "Pop", "Hip Hop", "Breakbeat" };
	vector<string> dubstepTerms = { "VIP", "VIP Mix", "Flip", "Bootleg", "Rework", "Riddim Edit", "Half-Time" };
	vector<string> drumAndBassTerms = { "VIP", "VIP Mix", "Dub", "Roller", "Jump-Up Edit, Bootleg", "Flip","Rework"};
//It would've been easier to have one vector with all the terms since some of the terms are used in multiple genres, but I wanted to make it more organized and easier to read/run.
public:
	GenreMode() = default;
	~GenreMode() = default;
	void displayGenres()
	{
		cout << "Available Genres:" << endl;
		for (const auto& genre : genres)
		{
			cout << "- " << genre << endl;
		}
	}
	const vector<string>& getGenres() const
	{
		return genres;
	}
	const vector<string>& getDubstepTerms() const
	{
		return dubstepTerms;
	}
	const vector<string>& getDrumAndBassTerms() const
	{
		return drumAndBassTerms;
	}
    
};


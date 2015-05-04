/****************************************************
Name:
Date:
Problem Number:
C&C++ 2008 Spring
Instructor: Komogortsev, TSU
Objective: Example of the test file for tsuPod code

************************/

#include <iostream>
#include <fstream>

#include "tsuPod.h"

using namespace std;

int main() 
{
	TsuPod song[NUM_SONGS];
	int totalMemory = 0;

    // Following code initializes the tsuPod 
    initTsuPod(song);

    // Following code lists all songs located in tsuPod memory
    showSongList(song);

    cout << endl;

    // Following code tests tsuPod input functionality by adding songs
    int retCode;				// Represents return value of addSong function
    retCode = addSong(song, "Comfort Eagle", "Cake", 1, 1, totalMemory);
    retCode = addSong(song, "Mr. Tambourine Man", "Bob Dylan", 2, 2, totalMemory);
    retCode = addSong(song, "Just Like Heaven", "The Cure", 3, 3, totalMemory);
    retCode = addSong(song, "Under the Bridge", "Red Hot Chili Peppers", 1, 4, totalMemory);
    retCode = addSong(song, "Pancho and Lefty", "Townes Van Zandt", 5, 5, totalMemory);
    retCode = addSong(song, "Space Oddity", "David Bowie", 6, 6, totalMemory);
    retCode = addSong(song, "Midnight City", "M83", 7, 7, totalMemory);
    retCode = addSong(song, "Icky Thump", "The White Stripe", 8, 8, totalMemory);
    cout << "Return Code: " << retCode << endl << endl;
    showSongList(song);
    cout << endl << "Total Memory: " << totalMemory << endl;		// Checks total memory available in TsuPod

    // Following code tests tsuPod song removal functionality         
    retCode = removeSong(song, "Space Oddity", totalMemory);
    cout << "Return Code: " << retCode << endl << endl;
    showSongList(song);
    cout << endl << "Total Memory: " << totalMemory << endl;

    // Following code tests clearMemory functionality
    clearMemory(song, totalMemory);
    cout << endl;
    showSongList(song);
    cout << endl << "Total Memory: " << totalMemory << endl;
}

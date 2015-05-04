/*
 * tsuPod.cpp
 *
 *  Created on: Feb 28, 2013
 *      Author: nj1062
 */

#include <iostream>
#include <string>
#include <cstdlib>

#include "tsuPod.h"

using namespace std;

// Following code initializes the tsuPod
void initTsuPod(TsuPod song[])
{
	for(int i = 0; i < NUM_SONGS; i++)
	{
		song[i].artist = "<<empty>>";
		song[i].title = "<<empty>>";
		song[i].size = 0;
	}
}

// Following code lists all songs located in tsuPod memory
void showSongList(TsuPod song[])
{
	cout << "TsuPod song list" << endl << endl;

	for(int i = 0; i < NUM_SONGS; i++)
	{
		cout << i + 1 << ") " << song[i].title << " - " << song[i].artist
				<< ",  " << song[i].size << "MB" << endl;
	}
}

// Following code implements input functionality by adding songs
int addSong(TsuPod song[], string newTitle, string newArtist, int size, int num, int &totalMemory)
{
	totalMemory += size;

	if(totalMemory > MEMORY_SIZE)				// If memory size of TsuPod is exceeded, return -1 and stop adding songs
	{
		cout << "Memory full, cannot add song." << endl;
		totalMemory -= size;
		return -1;
	}

	if(newArtist == " " || newTitle == " ")		// Artist and title cannot be blank, returns -2
	{
		cout << "Song artist or title cannot be blank." << endl;
		return -2;
	}

	if(size < 0)								// Size of song cannot be negative, returns -2
	{
		cout << "Size of song cannot be less than 0MB" << endl;
		return -2;
	}

	song[num - 1].artist = newArtist;
	song[num - 1].title = newTitle;
	song[num - 1].size = size;

	return 0;
}

// Following code implements song removal functionality
int removeSong(TsuPod song[], string title, int &totalMemory)
{
	int nullCount = 0;

	for(int i = 0; i < 8; i++)
	{
		if(title == song[i].title)				// Resets song slot to empty song
		{
			totalMemory -= song[i].size;

			song[i].artist = "<<empty>>";
			song[i].title = "<<empty>>";
			song[i].size = 0;
		}
		else
			nullCount++;
	}

	if(nullCount == 8)
	{
		cout << "No such song title found." << endl;
		return -1;
	}

	return 0;
}

// Following code implements clearMemory functionality
void clearMemory(TsuPod song[], int &totalMemory)
{
	for(int i = 0; i < NUM_SONGS; i++)
	{
		totalMemory -= song[i].size;

		song[i].artist = "<<empty>>";
		song[i].title = "<<empty>>";
		song[i].size = 0;
	}
}

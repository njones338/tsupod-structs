/****************************************************
Name:
Date:
Problem Number:
C&C++ 2008 Spring
Instructor: Komogortsev, TSU
Objective: 

This header file provides the prototypes of the function definitions
for the tsuPod project. This file has to be included in the program that tests the functionality of tsuPod.

You have to create file tsuPod.cpp with function definitions for the test program to work.

*********************************/
#ifndef tsuPod_h
#define tsuPod_h

#include <string>

using namespace std;

const int NUM_SONGS = 8; //we will have the maximum 8 slots with some slots being empty
const int MEMORY_SIZE = 25; //total memory size of tsuPod in MB

//Declares struct TsuPod that includes information on each song
struct TsuPod
{
	string title, artist;
	int size;
};

////////////////////////////////
/* FUNCTION - void initTsuPod

 Initialize all the slots to blank and 0 size memory
 
 input parms - none
 
 output parms - none
*/

void initTsuPod(TsuPod song[]);



///////////////////////////////
/* FUNCTION - int addSong
 * attempts to add a new song to the tsuPod
          o returns a 0 if successful
          o returns -1 if not enough memory to add the song
          o returns -2 for any other error (such as a blank title or artist)
 
 input parms - add nessesary parameters here
 
 output parms - add nessesary parameters here
*/

int addSong (TsuPod song[], string newTitle, string newArtist, int size, int num, int &totalMemory);




////////////////////////////
/* FUNCTION - int removeSong
    * attempts to remove a song from the tsuPod
          o returns 0 if successful
          o returns -1 if nothing is removed
    
          
input parms - add nessesary parameters here
 
output parms - add nessesary parameters here*/


int removeSong(TsuPod song[], string title, int &totalMemory);





////////////////////////////
/* FUNCTION - void clearMemory
* clears all the songs from memory

input parms - add nessesary parameters here
 
output parms - add nessesary parameters here*/

void clearMemory(TsuPod song[], int &totalMemory);




/////////////////////////////
/* FUNCTION - void showSongList   
    * prints the current list of songs in order from first to last to standard output
    * format - slot #, Title, Artist, size in MB (one song per line)
    * print "Empty" for any slots that do not contain a song

input parms - add nessesary parameters here
 
output parms - add nessesary parameters here*/

    
void showSongList(TsuPod song[]);

#endif

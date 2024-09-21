#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "music.h" // include the header file for the music class

using namespace std; // use the standard namespace

// constructor for the music class
music::music() {
    publisher = new char[50]; // allocate memory for the publisher attribute
}

// function to get the publisher of the music
char* music::getpublisher() {
    return publisher; // return the publisher attribute
}

// function to get the duration of the music track
int music::getduration() {
    return duration; // return the duration attribute
}

// function to get the artist of the music
char* music::getartist() {
    return artist; // return the artist attribute
}

// function to set the publisher of the music
void music::setpublisher(char* newpublisher) {
    delete[] publisher; // deallocate previously allocated memory to prevent memory leak
    publisher = new char[50]; // allocate new memory for the publisher attribute
    strcpy(publisher, newpublisher); // copy the new publisher name into the publisher attribute
}

// function to set the duration of the music track
void music::setduration(int newduration) {
    duration = newduration; // assign the provided duration to the duration attribute
}

// function to set the artist of the music
void music::setartist(char* newartist) {
    delete[] artist; // deallocate previously allocated memory to prevent memory leak
    artist = new char[50]; // allocate new memory for the artist attribute
    strcpy(artist, newartist); // copy the new artist name into the artist attribute
}

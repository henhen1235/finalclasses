#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "media.h" // include media class header file

// default constructor for the media class
media::media() {
    title = new char[50]; // allocate memory for the title attribute
}

// function to set the year attribute of the media object
void media::setyear(int y) {
    year = y; // assign the provided year to the year attribute
}

// function to set the title attribute of the media object
void media::setname(char* newtitle) {
    delete[] title; // deallocate the previously allocated memory to prevent memory leak
    title = new char[50]; // allocate new memory for the title attribute
    strcpy(title, newtitle); // copy the new title into the title attribute
}

// function to get the year attribute of the media object
int media::getyear() {
    return year; // return the year attribute
}

// function to get the title attribute of the media object
char* media::getname() {
    return title; // return the title attribute
}

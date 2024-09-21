#include <iostream> // include standard input-output library
#include "videogames.h" // include the header file for the videogames class
#include <cstring> // include c-string library for string manipulation

using namespace std; // use the standard namespace

// constructor for the videogames class
videogames::videogames() {
    publisher = new char[50]; // allocate memory for the publisher attribute
}

// function to get the publisher of the video game
char* videogames::getpublisher() {
    return publisher; // return the publisher attribute
}

// function to get the rating of the video game
float videogames::getrating() {
    return rating; // return the rating attribute
}

// function to set the publisher of the video game
void videogames::setpublisher(char* newpublisher) {
    delete[] publisher; // deallocate previously allocated memory to prevent memory leak
    publisher = new char[50]; // allocate new memory for the publisher attribute
    strcpy(publisher, newpublisher); // copy the new publisher name into the publisher attribute
}

// function to set the rating of the video game
void videogames::setrating(float newrating) {
    rating = newrating; // assign the provided rating to the rating attribute
}

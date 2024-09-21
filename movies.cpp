#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "movies.h" // include header file for the movies class

using namespace std; // use the standard namespace

// constructor for the movies class
movies::movies() {
    director = new char[50]; // allocate memory for the director attribute
}

// function to get the director's name
char* movies::getdirector() {
    return director; // return the director attribute
}

// function to get the duration of the movie
int movies::getduration() {
    return time; // return the duration (time) attribute
}

// function to get the rating of the movie
float movies::getrating() {
    return rating; // return the rating attribute
}

// function to set the director's name
void movies::setdirector(char* newdirector) {
    delete[] director; // deallocate previously allocated memory to prevent memory leak
    director = new char[50]; // allocate new memory for the director attribute
    strcpy(director, newdirector); // copy the new director name into the director attribute
}

// function to set the duration of the movie
void movies::setduration(int newtime) {
    time = newtime; // assign the provided duration to the time attribute
}

// function to set the rating of the movie
void movies::setrating(float newrating) {
    rating = newrating; // assign the provided rating to the rating attribute
}

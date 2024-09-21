#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#pragma once // ensure the header file is included only once during compilation

using namespace std; // use the standard namespace

// declaration of the media class
class media {
public:
    // default constructor to initialize the media object
    media();
    
    // virtual function to get the year of the media
    virtual int getyear();
    
    // virtual function to set the year of the media
    virtual void setyear(int y);
    
    // virtual function to get the name of the media
    virtual char* getname();
    
    // virtual function to set the name of the media
    virtual void setname(char* newtitle);
    
    // virtual destructor to properly deallocate dynamic memory
    virtual ~media() {
        delete[] title; // delete dynamically allocated memory for title
    }

public:
    int year; // attribute to store the year of the media
    char* title; // pointer attribute to store the title of the media
};

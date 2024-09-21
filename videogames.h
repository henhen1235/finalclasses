#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "media.h" // include the base media class header file

using namespace std; // use the standard namespace

// declaration of the videogames class, derived from the media class
class videogames : public media {
public:
    // default constructor to initialize the videogames object
    videogames();
    
    // function to get the publisher of the video game
    virtual char* getpublisher();
    
    // function to get the rating of the video game
    virtual float getrating();
    
    // function to set the publisher of the video game
    virtual void setpublisher(char* newpublisher);
    
    // function to set the rating of the video game
    virtual void setrating(float newrating);
    
    // destructor to properly deallocate dynamic memory
    virtual ~videogames() {
        delete[] publisher; // delete dynamically allocated memory for publisher
    }

public:
    char* publisher; // pointer attribute to store the publisher's name
    float rating; // attribute to store the rating of the video game
};

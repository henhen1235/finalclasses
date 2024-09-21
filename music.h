#include <iostream> // include standard input-output library
#include "media.h" // include the base media class header file
#include <cstring> // include c-string library for string manipulation

using namespace std; // use the standard namespace

// declaration of the music class, derived from the media class
class music : public media {
public:
    // default constructor to initialize the music object
    music();
    
    // function to get the publisher of the music
    virtual char* getpublisher();
    
    // function to get the duration of the music track
    virtual int getduration();
    
    // function to get the artist of the music
    virtual char* getartist();
    
    // function to set the publisher of the music
    virtual void setpublisher(char* newpublisher);
    
    // function to set the duration of the music track
    virtual void setduration(int newduration);
    
    // function to set the artist of the music
    virtual void setartist(char* newartist);
    
    // destructor to properly deallocate dynamic memory
    virtual ~music() {
        delete[] publisher; // delete dynamically allocated memory for publisher
        delete[] artist; // delete dynamically allocated memory for artist
    }

public:
    char* artist; // pointer attribute to store the artist's name
    int duration; // attribute to store the duration of the music track
    char* publisher; // pointer attribute to store the publisher's name
};

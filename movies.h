#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "media.h" // include the base media class header file

using namespace std; // use the standard namespace

// declaration of the movies class, derived from the media class
class movies : public media {
public:
    // default constructor to initialize the movies object
    movies();
    
    // function to get the director's name
    virtual char* getdirector();
    
    // function to get the duration of the movie
    virtual int getduration();
    
    // function to get the rating of the movie
    virtual float getrating();
    
    // function to set the director's name
    virtual void setdirector(char* newdirector);
    
    // function to set the duration of the movie
    virtual void setduration(int newtime);
    
    // function to set the rating of the movie
    virtual void setrating(float newrating);
    
    // destructor to properly deallocate dynamic memory
    virtual ~movies() {
        delete[] director; // delete dynamically allocated memory for director
    }

public:
    char* director; // pointer attribute to store the director's name
    int time; // attribute to store the duration of the movie
    float rating; // attribute to store the rating of the movie
};

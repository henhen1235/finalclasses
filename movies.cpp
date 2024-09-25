#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "movies.h" // include header file for the movies class

using namespace std; // use the standard namespace

movies::movies(){//create a new movie object
  director = new char[50];
}

char* movies::getdirector(){//get director
  return director;
}

int movies::getduration(){//get duration
  return time;
}

float movies::getrating(){//get rating
  return rating;
}

void movies::setdirector(char* newdirector){//set up the director
  delete[] director;
  director = new char[50];
  strcpy(director, newdirector);
}

void movies::setduration(int newtime){//set up the time
  time = newtime;
}

void movies::setrating(float newrating){//set up the rating
  rating = newrating;
}

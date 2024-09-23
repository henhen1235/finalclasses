#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

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

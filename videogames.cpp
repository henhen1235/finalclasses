#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;

videogames::videogames(){//calling a new video games object
  publisher = new char[50];
}

char* videogames::getpublisher(){//getting publisher
  return publisher;
}

float videogames::getrating(){//getting rating
  return rating;
}

void videogames::setpublisher(char* newpublisher){//setting publisher
  delete[] publisher;
  publisher = new char[50];
  strcpy(publisher, newpublisher);
}

void videogames::setrating(float newrating){//setting publisher
  rating = newrating;
}

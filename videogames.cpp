#include <iostream>
#include "videogames.h"
#include <cstrings>

using namespace std;

videogames::videogames(){
  publisher = new char[50];
}

videogames::getpublisher(){
  return publisher;
}

videogames::getrating(){
  return rating;
}

videogames::setpublisher(char* newpublisher){
  delete[] publisher;
  publisher = new char[50];
  strcpy(publisher, newpublisher);
}

videogames::setrating(float newrating){
  rating = newrating;
}

#include <iostream>
#include "videogames.h"
#include <cstring>

using namespace std;

videogames::videogames(){
  publisher = new char[50];
}

char* videogames::getpublisher(){
  return publisher;
}

float videogames::getrating(){
  return rating;
}

void videogames::setpublisher(char* newpublisher){
  delete[] publisher;
  publisher = new char[50];
  strcpy(publisher, newpublisher);
}

void videogames::setrating(float newrating){
  rating = newrating;
}

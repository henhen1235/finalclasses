#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

movies::movies(){
  director = new char[50];
}

char* movies::getdirector(){
  return director;
}

int movies::getduration(){
  return time;
}

float movies::getrating(){
  return rating;
}

void movies::setdirector(char* newdirector){
  delete[] director;
  director = new char[50];
  strcpy(director, newdirector);
}

void movies::setduration(int newtime){
  time = newtime;
}

void movies::setrating(float newrating){
  rating = newrating;
}

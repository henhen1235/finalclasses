#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

Xmovies::movies(){
  director = new char[50];
}

movies::getdirector(){
  return director;
}

movies::getduration(){
  return time;
}

movies::getrating(){
  return rating;
}

movies::setdirector(char* newdirector){
  delete[] director;
  director = new char[50];
  strcpy(director, newdirector);
}

movies::setduration(int newtime){
  time = newtime;
}

movies::setrating(flaot newrating){
  rating = newrating;
}

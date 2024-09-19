#include <iostream>
#include <cstring>
#include "media.h"

media::media(){
  title = new char[50];
}

void media::setyear(int y){//function for getting year
  year = y;
}

void media::setname(char* newtitle){
  delete[] title;
  title = new char[50];
  strcpy(title, newtitle);
}

int media::getyear(){
  return year;
}

char* media::getname(){
  return title;
}

#include <iostream>
#include <cstring>
#pragma once

using namespace std;

class media {
 public:
  media();//calling media
  virtual int getyear();//calling get year
  virtual void setyear(int y);//callling set year
  virtual char* getname();//calling get name
  virtual void setname(char* newtitle);//calling set name
  virtual ~media(){//deleting function
    delete[] title;
  }
 public:
  int year;//varriables that are available from this class
  char* title;
};

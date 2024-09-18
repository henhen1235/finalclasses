#include <iostream>
#include <cstring>
#pragma once

using namespace std;

class media {
 public:
  media();
  virtual int getyear();
  virtual void setyear(int y);
  virtual char* getname();
  virtual void setname(char* newtitle);
  virtual ~media(){
    delete[] title;
  }
 public:
  int year;
  char* title;
};

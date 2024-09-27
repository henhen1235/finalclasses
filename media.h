#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#pragma once // ensure the header file is included only once during compilation

using namespace std; // use the standard namespace

// declaration of the media class
class media {
 public:
  media();//calling media
  virtual int getyear();//calling get year
  virtual void setyear(int y);//callling set year
  virtual char* getname();//calling get name
  virtual void setname(char* newtitle);//calling set name
  virtual void print();//calling print function
  virtual ~media();
 public:
  int year;//varriables that are available from this class
  char* title;
};

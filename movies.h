#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class movies : public media{
 public:
  movies();
  virtual char* getdirector();
  virtual int getduration();
  virtual float getrating();
  virtual void setdirector(char* newdirector);
  virtual void setduration(int newtime);
  virtual void setrating(float newrating);
public:
  char* director;
  int time;
  float rating;
};
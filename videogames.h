#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class videogames : public media{
 public:
  videogames();
  virtual char* getpublisher();
  virtual float getrating();
  virtual void setpublisher(char* newpublisher);
  virtual void setrating(float newrating);
 public:
  char* publisher;
  float rating;
};

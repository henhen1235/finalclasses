#include <iostream>
#include "media.h"
#include <cstring>

using namespace std;

class music : public media{
 public:
  music();
  virtual char* getpublisher();
  virtual int getduration();
  virtual char* getartist();
  virtual void setpublisher(char* newpublisher);
  virtual void setduration(int newduration);
  virtual void setartist(char* newartist);
 public:
  char* artist;
  int duration;
  char* publisher;
}

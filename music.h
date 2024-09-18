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
  virtual ~music(){
    delete[] title;
    delete[] publisher;
    delete[] artist;
  }
 public:
  char* artist;
  int duration;
  char* publisher;
};
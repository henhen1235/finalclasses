#include <iostream> // include standard input-output library
#include "media.h" // include the base media class header file
#include <cstring> // include c-string library for string manipulation

using namespace std; // use the standard namespace

class music : public media{
 public:
  music();//calling new music object
  virtual char* getpublisher();//calling get publisher
  virtual int getduration();//calling get duration
  virtual char* getartist();//calling get artist
  virtual void setpublisher(char* newpublisher);//calling set publisher
  virtual void setduration(int newduration);//calling set duration
  virtual void setartist(char* newartist);//calling set artist
  virtual ~music(){//delete function
    delete[] publisher;
    delete[] artist;
  }
public://public varriables
  char* artist;
  int duration;
  char* publisher;
};

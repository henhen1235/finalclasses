#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class movies : public media{
 public:
  movies();//calling a new movie object
  virtual char* getdirector();//calling get director
  virtual int getduration();//calling get duration
  virtual float getrating();//calling get rating
  virtual void setdirector(char* newdirector);//calling set director
  virtual void setduration(int newtime);//calling set duration
  virtual void setrating(float newrating);//calling set rating
  virtual ~movies(){//delete everything
    delete[] director;
  }
public://public varribales
  char* director;
  int time;
  float rating;
};

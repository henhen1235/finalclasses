#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "media.h" // include the base media class header file

using namespace std; // use the standard namespace

class movies : public media{
 public:
  movies();//calling a new movie object
  virtual char* getdirector();//calling get director
  virtual int getduration();//calling get duration
  virtual float getrating();//calling get rating
  virtual void setdirector(char* newdirector);//calling set director
  virtual void setduration(int newtime);//calling set duration
  virtual void setrating(float newrating);//calling set rating
  void print();//calling print
  virtual ~movies();
public://public varribales
  char* director;
  int time;
  float rating;
};

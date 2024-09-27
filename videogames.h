#include <iostream> // include standard input-output library
#include <cstring> // include c-string library for string manipulation
#include "media.h" // include the base media class header file

using namespace std; // use the standard namespace

class videogames : public media{
 public:
  videogames();//calling a new video game object
  virtual char* getpublisher();//calling get publisher
  virtual float getrating();//calling get rating
  virtual void setpublisher(char* newpublisher);//calling set publishger
  virtual void setrating(float newrating);//calling set rating
  virtual ~videogames();
  void print();//calling print
public://public varriables
  char* publisher;
  float rating;
};

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class videogames : public media{
 public:
  videogames();//calling a new video game object
  virtual char* getpublisher();//calling get publisher
  virtual float getrating();//calling get rating
  virtual void setpublisher(char* newpublisher);//calling set publishger
  virtual void setrating(float newrating);//calling set rating
  virtual ~videogames(){//deleting videogame items
    delete[] publisher;
  }
public://public varriables
  char* publisher;
  float rating;
};

#include <iostream>
#include <cstring>

using namespace std;

class media {
 public:
  media();
  virtual int getyear();
  virtual void setyear(int y);
  virtual char* getname();
  virtual void setname(char* newtitle);
 public:
  int year;
  char* title;
}

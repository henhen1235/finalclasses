#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

music::music(){
  publisher = new char[50];
}

movies::getpublisher(){
  return publisher;
}

movies::getduration(){
  return duration;
}

movies::getartist(){
  return artist;
}

movies::setpublisher(char* newpublisher){
  delete[] publisher;
  publisher = new char[50];
  strcpy(publisher, newpublisher);
}

movies::setduration(int newduration){
  duration = newduration;
}

movies::setartist(char* newartist){
  delete[] artist;
  artist = new char[50];
  strcpy(artist, newartist);
}

#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

music::music(){
  publisher = new char[50];
}

char* music::getpublisher(){
  return publisher;
}

int music::getduration(){
  return duration;
}

char* music::getartist(){
  return artist;
}

void music::setpublisher(char* newpublisher){
  delete[] publisher;
  publisher = new char[50];
  strcpy(publisher, newpublisher);
}

void music::setduration(int newduration){
  duration = newduration;
}

void music::setartist(char* newartist){
  delete[] artist;
  artist = new char[50];
  strcpy(artist, newartist);
}

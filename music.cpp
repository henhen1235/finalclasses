#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

music::music(){//calling a new music object
  publisher = new char[50];
}

char* music::getpublisher(){//getting the publisher
  return publisher;
}

int music::getduration(){//getting the duration
  return duration;
}

char* music::getartist(){//getting the artist
  return artist;
}

void music::setpublisher(char* newpublisher){//setting the publisher
  delete[] publisher;
  publisher = new char[50];
  strcpy(publisher, newpublisher);
}

void music::setduration(int newduration){//setting the duration
  duration = newduration;
}

void music::setartist(char* newartist){//setting the artist
  delete[] artist;
  artist = new char[50];
  strcpy(artist, newartist);
}

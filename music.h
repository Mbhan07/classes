#ifndef MUSIC
#define MUSIC

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

/*
  this header file defines what is needed for music
 */

class Music: public Media{
 public:
  Music();
  //and it's probably obvious by now that we have title and year, still define
  char * artist;
  char * publisher;
  char * title;
  int year;
  int duration;
  Music(char * title, char * artist, char * publisher, int year, int duration);
  //destructor time
  ~Music();
  char * getArtist();
  char * getPublisher();
  int getDuration();
  virtual void printMedia();
    

};

#endif

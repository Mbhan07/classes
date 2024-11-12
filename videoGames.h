#ifndef VIDEOGAMES
#define VIDEOGAMES

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

/*
  child of media parent class, header file for videogames
 */

class videoGames:public Media{
 public:
  videoGames();
  //hopefully by this point its precedent enough that it inherites title/yr
  char * publisher;
  int rating;
  int year;
  char * title;
  videoGames(char * title, char * publisher, int year, int rating);
  ~videoGames();//destructor
  char * getPublisher();
  int getRating();
  virtual void printMedia();
};

#endif


//FINALLY OMG.h

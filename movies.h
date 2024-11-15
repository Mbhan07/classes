#ifndef MOVIES
#define MOVIES

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

/*

  this header file houses all the functions/variables used for movies

 */

class movies : public Media{
 public:
  movies();
  //title/year inherited from media parent class
  char * director;
  int duration;
  int rating;
  char * title;
  int year;

  //all paraemeters needed are included in call
  movies(char * title, char * director, int year, int duration, int rating);
  //destructor for movies
  ~movies();
  //a desctructor is a special function that runs when an object is deleted to clean up/free resources
  virtual char * getDirector();
  virtual int  getRating();
  virtual int  getDuration();
  virtual void printMedia();
  
};

//
#endif

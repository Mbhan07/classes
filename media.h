#ifndef MEDIA
#define MEDIA

#include <iostream>
#include <cstring>

using namespace std;

/*

  The media.h file defines the functions and vairbales relevent to media.cpp
  still parent class

*/

class Media{
 public:
  Media();
  char * title;
  int year;
  Media (char * title, int year);

  //virtual functions allow different versions of a function to run

  virtual char * getTitle();
  virtual int getYear();
  virtual void printMedia();
};

#endif

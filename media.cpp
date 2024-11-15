#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

/*
  Media.cpp defines the functions in media.h (which is its corresponding header file). It is also the parent class for this assignment

  Mahika Bhanika

 */

//we use :: to specify which method belongs to a class

Media::Media(){ //initialize title and set year equal to 0

  title = new char[100];
  year = 0;
}

Media::Media(char * newTitle, int newYear){
  title = new char[100];

  //using strcpy to make a copy of the title char array, so that it can be used universally
  strcpy(title, newTitle);
  year = newYear;

}

char * Media:: getTitle(){ //returns the title
  return title;
}

int Media:: getYear(){ //returns the year
  return year;
}

void Media::printMedia(){ //prints the medial details (title and year) : ::artis
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
}

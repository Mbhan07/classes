#include <iostream>
#include <cstring>
#include "movies.h"

using namespace std;

/*

  cpp file for movies,

  child class of media as it uses title/year method
 */

movies::movies(){  //initialize director and set duration/rating equal to 0
  director = new char[100];
  duration = 0;
  rating = 0;

}

//we are now using title and year from media class
//thus, a child class is accesssing a method from the parent class

movies::movies(char * title, char * newdirector, int year, int newduration, int newrating):Media(title, year){
  director = new char[100];
  strcpy(director, newdirector);  //copy director's nameto movie object
  duration = newduration;
  rating = newrating;
}

movies::~movies(){
  delete[] director;
}

//return director's name
char * movies::getDirector(){
  return director;
}

//return rating of movie
int movies::getRating(){
  return rating;
}

//return duration of movie
int movies::getDuration(){
  return duration;
}

//prints all details of movie (director, duration, rating)
void movies::printMedia(){
  cout << "Movies: " << endl;
  Media::printMedia(); //accessing title and year from media parent classend
  cout <<"Director: " << director << endl;
  cout << "Duration: " << duration << endl;
  cout << "Rating: " << rating << endl;
  
}

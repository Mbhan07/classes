#include <iostream>
#include <cstring>
#include "videoGames.h"

using namespace std;

/*

  this is the .cpp file of videogames, defines functions from videogames.h

 */

//same as before, just modified for specific alsss
videoGames::videoGames(char * title, char * newpublisher, int year, int newrating):Media(title, year){
  publisher = new char[100];
  strcpy(publisher, newpublisher);
  rating = newrating;
  
}

//destructo

videoGames::~videoGames(){
  delete[] publisher;
}

//return publisher
char * videoGames::getPublisher(){
  return publisher;
}

//return rating

int videoGames::getRating(){
  return rating;
}

//print everything

void videoGames::printMedia(){
  cout << "Videogame: " << endl;
  Media::printMedia();
  cout << "Publisher: " << publisher << endl;
  cout << "Rating: " << rating << endl;
}

//


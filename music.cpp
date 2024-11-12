#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

/*

  music.cpp fills contains functions needed for all music media

*/

Music::Music(){ //intialize artist, publisher and set duration to 0
  artist = new char[100];
  publisher = new char[120];
  duration = 0;
}


//get title and year from media parent class, basicallt the same as the other classess

Music::Music(char * title, char * newartist, char * newpublisher, int year, int newduration):Media(title, year){
  artist = new char[100];
  strcpy(artist, newartist);
  publisher = new char[100];
  strcpy(publisher, newpublisher);
  duration = newduration;
}

//destructoring the non-primitive types
Music::~Music(){
  delete[]artist;
  delete[] publisher;
  
}

char * Music::getArtist(){

  return artist;
}

char * Music:: getPublisher(){

  return publisher;

}

int Music::getDuration(){

  return duration;

}



//printing the params

void Music::printMedia(){
  cout << "Music" << endl;
  Media::printMedia();
  cout << "Artist: " << artist << endl;
  cout << "publisher: " << publisher << endl;
  cout << "duration: " << duration << endl;
  
}

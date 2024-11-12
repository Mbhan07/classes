#include <iostream>
#include "videoGames.h"
#include <cstring>
#include "media.h" // header files in quotes
#include "music.h"
#include "movies.h"
#include <vector>
#include <bits/stdc++.h>

using namespace std;

/*

  This is classes, a C++ project which explores classes and inheritance
  You can add, search, or delete different forms of media from moves to music
  CONCEPTS OF INTEREST:

     - use of header files
     - compiling multiple files at once
     - function prototypes
     - polymorphism
  Essentially the program first narros down WHICH media type the user is interested in, and then the action they would like to take (add, search, delete)

  If a user is interested in searching or deleting, they can do so via title or year

  This program utilizes a vector called MediaTypes, which is our "database" of media 
  ::get//
  By Mahika Bhan, <^><^><^><^><^><^><^><^><^><^><^><^>  | |
                                                       \___/
  
*/


//function protoypes

//these functions first narrow down whether a user wants to modify a movie, music, or video game

void movie(vector<Media*>&mediaTypes);
void videoGames(vector<Media*>&mediaTypes);
void music(vector<Media*>&mediaTypes);

//all of the methods used to add media into the music, videogame, or movie category

void addMovie(vector<Media*>&mediaTypes);
void addMusic(vector<Media*>&mediaTypes);
void addVideoGames(vector<Media*>&mediaTypes);

//universal search function - no matter the media tyoe

void searchMedia(vector<Media*>&mediaTypes);

//methods to search media - either by year or title

void searchTitles(vector<Media*>&mediaTypes);
void searchYear(vector<Media*>&mediaTypes);

//universal delete funtion - no matter the media

void deleteMedia(vector<Media*>&mediaTypes);

//methods to delete media - either by year or title

void deleteYear(vector<Media*>&mediaTypes);
void deleteTitle(vector<Media*>&mediaTypes);



int main(){

  //vector to store pointers to various media types
  vector<Media*> mediaTypes;
  while(true){
    char mediaType[100];
    cout << "What type of media would you like to modify? MOVIES, VIDEOGAMES, or MUSIC? You can also QUIT: ";
    cin >> mediaType;

    //check what user input matches and calls the appropiate functions
    if(strcmp(mediaType, "MOVIES") == 0){
      movie(mediaTypes);

    }else if(strcmp(mediaType, "VIDEOGAMES") == 0){
      videoGames(mediaTypes);
      
    }else if(strcmp(mediaType, "MUSIC") == 0){
      music(mediaTypes);
      
    }else if(strcmp(mediaType, "QUIT") == 0){
      cout << "Self-destructing in" << endl;
      cout << "3" << endl;
      cout << "2" << endl;
      cout << "1" << endl;
      cout << "Good-[whirrrrrrrr]bye" << endl;
      exit(0);
    }
  }
  return 0;
}

//function to handle anything movie related
void movie(vector <Media*> & mediaTypes){
  char input [100];
  cout << "Would you like to ADD, DELETE, or SEARCH for a movie? You can also QUIT: ";
  cin >> input;

  //check what user input matches and calls the appropiate functions

  if(strcmp(input, "ADD") == 0){
    addMovie(mediaTypes);
    
  }else if(strcmp(input, "DELETE") == 0){
    searchMedia(mediaTypes); //using the same function for all media types bc i'm lazy

  }else if(strcmp(input, "SEARCH") == 0){
    deleteMedia(mediaTypes);

  }else if(strcmp(input, "QUIT") == 0){
    exit(0);
  }
}

//method to handle anything videogame related
void videoGames(vector <Media*>& mediaTypes){
  char barackObama[100];
  cout << "Do you want to ADD, DELETE, SEARCH or QUIT" << endl;
  cin >> barackObama;

  //check what user input matches and call the appropiate function

  if(strcmp(barackObama, "ADD") == 0){
    addVideoGames(mediaTypes);
  }else if(strcmp(barackObama, "DELETE") == 0){
    deleteMedia(mediaTypes);
  }else if(strcmp(barackObama, "SEARCH") == 0){
    searchMedia(mediaTypes);
  }else if(strcmp(barackObama, "QUIT") == 0){
    exit(0);
  }
}

//method to handle anything music related
void music(vector <Media*>& mediaTypes){
  char userInput[100];
  cout << "Do you want to ADD, DELTE, OR SEARCH FOR MUSIC? You can also QUIT: ";
  cin >> userInput;

  //check what user input matches and call the appropiate function
  if(strcmp(userInput, "ADD") == 0){
    addMusic(mediaTypes);
  }else if(strcmp(userInput, "DELETE") == 0){
    deleteMedia(mediaTypes);
  }else if(strcmp(userInput, "SEARCH") == 0){
    searchMedia(mediaTypes);
  }else if(strcmp(userInput, "QUIT") == 0){
    exit(0);
  }
}


void addVideoGames(vector<Media*>&mediaTypes){

  //creating a new videogames media item
  Media * videoGamesMedia = new Media();

  //intializing variables that will hold relevant information about the media
  char * title = new char[100];
  char * publisher = new char[100];
  int year;
  int rating;

  cout << "What is the name of the videogame: ";
  cin.ignore(); // to clear input buffer
  cin.getline(title, 100, '\n');

  cout << "What is the name of the publisher: ";
  cin.getline(publisher,100,'\n');

  cout << "What year was the videoGame made: ";
  cin >> year;

  cout << "What is the rating of the video game: ";
  cin >> rating;

  // Create a new VideoGames object and add it to the mediaTypes vector
  videoGames* newvideoGame = new videoGames(title, publisher, year, rating);

  //store it
  mediaTypes.push_back(newvideoGame);
    
}


void addMovie(vector<Media*>&mediaTypes){

  //creating a new movie media item
  Media * movieMedia = new Media();

   //intializing variables that will hold relevant information about the media
  char * title = new char[100];
  char * director = new char[100];
  int year;
  int duration;
  int rating;

  cout << "What is the name of the movie: ";
  cin.ignore();
  cin.getline(title, 100, '\n');

  cout << "What is the name of the director: ";
  cin.getline(director,100,'\n');

  cout << "What year was the movie made: ";
  cin >> year;

  cout << "What was the duration of the movie: ";
  cin >> duration;

  cout << "What is the rating of the movie: ";
  cin >> rating;
  
   // Create a new Movies object and add it to the mediaTypes vector
  movies * newMovie = new movies(title, director, year, duration, rating);

  //store new dmovie to database
  mediaTypes.push_back(newMovie);

}


void addMusic(vector<Media*>&mediaTypes){
  //creating a new music media item
  Media * musicMedia = new Media();

  //initializaint vairables that will hold relevant information about the media
  char * title = new char[100];
  char * artist = new char[100];
  char * publisher = new char[100];
  int year;
  int duration;
 
  cout << "What is the name of the music: ";
  cin.ignore();
  cin.getline(title, 100, '\n');

  cout << "What is the name of the artist: ";
  cin.getline(artist,100,'\n');

  cout << "What is the name of the publisher: ";
  cin.getline(publisher,100,'\n');

  cout << "What year was the music made: ";
  cin >> year;

  cout << "What was the duration of the music: ";
  cin >> duration;

  //create a new music object and add it to the mediatypes vector
  Music * newMusic = new Music(title, artist, publisher, year, duration);

  //store new movie to our "database"
  mediaTypes.push_back(newMusic);

}

void searchMedia(vector<Media*>& mediaTypes){

  char * searchParameters = new char[100]; //searchParametes points to a char with 100 bit of memory
  cin.ignore(); //to format input andclear input bugger
  cout << "You can search the database by TITLE or by YEAR. Please pick one: ";
  cin.getline(searchParameters, 100, '\n');

  //check if user wants to search by title or year
  if(strcmp(searchParameters, "TITLE") == 0){
    searchTitles(mediaTypes);
  }else if(strcmp(searchParameters, "YEAR") == 0){
    searchYear(mediaTypes);
  }
}

void searchTitles(vector<Media*>&mediaTypes){

  char * inputTitle = new char[100];
  cout << "Please enter the title of the media: ";
  cin.getline(inputTitle, 100, '\n');

  
  //loop through each media in the vector to find a matching title
  for (int i = 0; i < mediaTypes.size(); i++){
    if(strcmp(inputTitle, mediaTypes[i] ->getTitle()) == 0){ //check if title matches
      cout << endl;
      mediaTypes[i] ->printMedia(); //print media details if a match is found
      cout << "\n" << endl;
    }
  }
}

void searchYear(vector<Media*>&mediaTypes){ // search by year
  int yearOfInterest;
  cout << "Please enter the year the media was made: ";
  cin >> yearOfInterest; //read in int from user

  //iteratre through media types
  for (int i = 0; i < mediaTypes.size(); i++){
    if(mediaTypes[i] ->getYear() == yearOfInterest){ //if the year in a specific element of media types matches the input year
      cout << "\n" << endl;
      mediaTypes[i] ->printMedia(); //print the details of the media
      cout << "\n" << endl;
    }
  }
} 


void deleteMedia(vector<Media*>&mediaTypes){

  char * searchParameters = new char[100];
  cin.ignore();
  cout << "Would you like to delete media from the database by TITLE or YEAR: ";
  cin.getline(searchParameters, 100, '\n');

  //check if user wants to delete bt title or year and call appropriate method
  if(strcmp(searchParameters, "TITLE") == 0){
    deleteTitle(mediaTypes);
  }else if(strcmp(searchParameters, "YEAR") == 0){
    deleteYear(mediaTypes);
  }

}

void deleteTitle(vector<Media*>&mediaTypes){

  char * inputTitle = new char[100]; //dynamicallyt allocating memory XD
  //int index;
  cout << "Please enter the title of the media: ";
  cin.getline(inputTitle, 100, '\n');

  //iterate through media types
  for (int i = 0; i < mediaTypes.size(); i++){
    if(strcmp(inputTitle, mediaTypes[i] ->getTitle()) == 0){ // if the title in a specific element of mediaTypes matches the input title
      mediaTypes[i] ->printMedia(); //print it
      char * confirmDeletion = new char[20]; //confirm with the user if they would like to deltete if before they do something irrevocably damaging
      cout << "Are you sure you want to delete, YES or NO: " << endl;
      cin.ignore(); //clearing that input buffer since 2007 :)
      cin.getline(confirmDeletion, 10, '\n');
      if(strcmp(confirmDeletion, "YES") == 0){ //if user says yes, then delte it
	cout << "You deleted: " << mediaTypes[i] ->getTitle() << endl;
	mediaTypes.erase(mediaTypes.begin() + i); // erasure
      }else if(strcmp(confirmDeletion, "NO") == 0){ //otherwise, continue as normal
	;
      }
    }
  }
}

void deleteYear(vector<Media*>&mediaTypes){

  int yearOfInterest;
  int index; //utilizing a second counter variable

  cout << "What was the year the media was produced: ";
  cin >> yearOfInterest;

  //same as above, but for year
  for (int i = 0; i < mediaTypes.size(); i++) {
      if(mediaTypes[i]->getYear()== yearOfInterest) {
        cout << endl;
        mediaTypes[i]->printMedia();
        index = i;

	char * confirmDeletion = new char[20];
        cout << "Do you want to delete this media YES or NO:" << endl;
	cin.ignore();
	cin.getline(confirmDeletion,20,'\n');
	
        if(strcmp(confirmDeletion,"YES")==0){
          cout << endl;
          cout<<"You deleted: " << mediaTypes[index]->getTitle()<<endl;
          mediaTypes.erase(mediaTypes.begin() + index);
        }
        else if (strcmp(confirmDeletion,"NO")==0){
          ;  // same as continue, but less boring of a syntax
        }
      }
  }
}



//ciao



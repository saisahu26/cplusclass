#include <iostream>
#include <cstring>
#include "VideoGame.h" //calls videogame header file

using namespace std;

VideoGame :: VideoGame (char* titleMedia, int yearMedia, char* publisherVideoGame, int ratingVideoGame) : Media(titleMedia, yearMedia) { //calls input
  titleMedia = new char [80]; //copies strings from pass into new string
  strcpy(titleMedia, titleMedia);
  yearMedia = yearMedia;
  publisher = new char[80];
  strcpy(publisher, publisherVideoGame);
  rating = ratingVideoGame;
}

//all the get functions for the inputs

char* VideoGame :: getPublisher() {
  return publisher;
}

int VideoGame :: getRating() {
  return rating;
}


//a print function that can be called from db
void VideoGame :: print() {
  cout << "title: " << title << endl;
  cout << "year: " << year << endl;
  cout << "publisher: " << publisher << endl;
  cout << "rating: " << rating << endl;
 

}

VideoGame :: ~VideoGame () {

}

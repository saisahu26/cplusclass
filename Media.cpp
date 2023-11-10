#include <iostream>
#include <cstring>
#include "Media.h"

using namespace std;

Media::Media() {
  
}

Media::Media(char* titleMedia, int yearMedia) { //calls input from db
  title = new char [80];
  strcpy(title, titleMedia);
  year = yearMedia;
  cout << "finished media con" << endl;
}


//input get functions
char* Media::getTitle() {
  return title;
}

int Media::getYear() {
  return year;
}

void Media :: print() {
  cout << "title: " << title << endl;
  cout << "year: " << year << endl;
}

Media :: ~Media() {
  
}

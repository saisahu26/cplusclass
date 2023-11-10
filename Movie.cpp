#include <iostream>
#include <cstring>
#include "Movie.h"

using namespace std;

Movie :: Movie(char* titleM, int yearMedia, char* directorMov, int ratingMov, int durationMov) : Media(titleM, yearMedia) {
   cout << "inside movie constructor " << endl;
   cout << titleM << "  " << directorMov << "  " << duration << "  " << endl;
   title = new char [80];
  strcpy(title, titleM);
    director = new char [80];
  strcpy(director, directorMov);
   year = yearMedia;
   duration = durationMov;
   rating = ratingMov;
}									       

char* Movie :: getDirector() {
  return director;
}

int Movie :: getDur() {
  return duration;
}

int Movie :: getRating() {
  return rating;
}

void Movie :: print() {
  cout << "title: " << title << endl;
  cout << "year: " << year << endl;
  cout << "director: " << director << endl;
  cout << "rating: " << rating << endl;
  cout << "duration: " << duration << endl;

}

Movie :: ~Movie () {

}

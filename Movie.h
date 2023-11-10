#ifndef ALPHA
#define ALPHA

#include <iostream>
#include <cstring>
#include "Media.h" //calling the media header file

using namespace std;

class Movie: public Media {
 public:
  Movie();
  Movie(char* titleMedia, int yearMedia, char* directorMov, int ratingMov,int durationMov); //passed in from db
  char* getDirector();
  int getDur();
  int getRating();
  void print(); 
  ~Movie(); //destructor 
 protected:
  char*director;
  int duration;
  int rating;
  
};

#endif // ALPHA

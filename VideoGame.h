
#ifndef DELTA
#define DELTA
#include <iostream>
#include <cstring>
#include "Media.h" //calls media header file

using namespace std;

class VideoGame : public Media { 

 public:
  VideoGame();
  VideoGame(char* titleMedia, int yearMedia, char*publisherVideoGame, int ratingVideoGame); //inputs from db

  //input get functions
  char* getPublisher();
  int getRating();
  void print();
  ~VideoGame();
 protected:
  char* publisher;
  int rating;

};

#endif // DELTA

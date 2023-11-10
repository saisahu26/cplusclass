#ifndef GAMMA
#define GAMMA
#include <iostream>
#include <cstring>
#include "Media.h" //clals media header file

using namespace std;

class Music : public Media {

 public:
  Music();
  Music(char* titleMedia, int yearMedia, char* artistMusic, char* publisherMedia, int durationMusic); //gets inputs
  char* getArtist(); //all of the string and int 'get' functions
  int getDuration();
  char* getPublisher();
  void print();
  ~Music(); //destructor 
 protected:
  char* artist;
  int duration;
  char* publisher;

};

#endif // GAMMA 

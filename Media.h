//media header file
#ifndef BETA
#define BETA
#include <iostream>
#include <cstring>



using namespace std;

class Media {
  public:
  Media();
  Media(char* titleMedia, int yearMedia); //universal inputs used to search to delete
  char*getTitle();
  int getYear();
  virtual void print();
   ~Media();
  protected:
  char* title;
  int year;

};

#endif // BETA

//sai sahu
//classes
//11/9/23

//calling all of the header files
#include <iostream>
#include <cstring>
#include "Movie.h"
#include "Music.h"
#include "VideoGame.h"
#include "Media.h"
#include <vector>

using namespace std;




//all of the functions being declared via vectors
void addMedia(vector<Media*> &MediaLs);
void searchMedia(vector<Media*> &MediaLs);
void deleteMedia(vector<Media*> &MediaLs);
int main() {
  char input[80];
  vector<Media*> MediaLs;
  bool flag = true;
  while(flag) { //while loop to repeat the functions
  cout <<"Enter print or remove" << endl;
  cin >> input;
  cin.ignore(256, '\n');

  //if add, search, quit, or delete is entred then the function will be called
  if(strcmp(input, "add") == 0){
  addMedia(MediaLs);
  }
  else if (strcmp(input, "search") == 0) {
      searchMedia(MediaLs);
    }
  else if (strcmp(input, "quit") == 0) {
    flag = false;
    }
 else if (strcmp(input, "delete") == 0) {
          deleteMedia(MediaLs);
  }


  }
  return 0;
}


void addMedia (vector<Media*> &MediaLs) { //add function that takes in all of the inputs and passes it into the class via a push
  char mediaVar[80];
  cout << "what type of media do you want to add?" << endl;
  cin.getline(mediaVar, 80);
  if (strcmp(mediaVar, "movie") == 0) { //if movie is entered its inputs will be taken

    char* title;
    title = new char[80];
    char* direct;
    direct = new char[80];
    int year = 0;
    int dur = 0;
    int rate = 0;
    cout << "enter title" << endl;
    cin >> title;
    cin.ignore(256, '\n');
    cout << "enter director" << endl;
    cin >> direct;
    cin.ignore(256, '\n');
    cout << "enter year" << endl;
    cin >> year;
    cin.ignore(256, '\n');
    cout << "enter duration" << endl;
    cin >> dur;
    cin.ignore(256, '\n');
    cout <<"enter a rating" << endl;
    cin >> rate;
    cin.ignore(256, '\n');
    cout << "in" << endl;
    Movie* mov = new Movie(title, year, direct, rate, dur);
    cout << "inn" << endl;
    MediaLs.push_back(mov);
    //cout << "innn" << endl;
  }
  else if (strcmp(mediaVar, "music") == 0) { //if music is enetred its inputs will be taken

    char* title;
    title = new char[80];
    char* artist;
    artist = new char[80];
    int year = 0;
    int dur = 0;
    char* publisher = 0;
    publisher = new char[80];
    cout << "enter title" << endl;
    cin >> title;
    cin.ignore(256, '\n');
    cout << "enter artist" << endl;
    cin >> artist;
    cin.ignore(256, '\n');
    cout << "enter year" << endl;
    cin >> year;
    cin.ignore(256, '\n');
    cout << "enter duration" << endl;
    cin >> dur;
    cin.ignore(256, '\n');
    cout <<"enter a pubslisher" << endl;
    cin >> publisher;
    cin.ignore(256, '\n');
    Music* mus = new Music(title, year, artist, publisher, dur);
    MediaLs.push_back(mus);
  }

  else if (strcmp(mediaVar, "videogames") == 0) { //if videogame is entered its inputs will be taken

    char* title;
    title = new char[80];
    int year = 0;
    int rate = 0;
    char* publisher = 0;
    publisher = new char[80];
    cout << "enter title" << endl;
    cin >> title;
    cin.ignore(256, '\n');
    cout << "enter year" << endl;
    cin >> year;
    cin.ignore(256, '\n');
    cout << "enter rating" << endl;
    cin >> rate;
    cin.ignore(256, '\n');
    cout <<"enter a publisher" << endl;
    cin >> publisher;
    cin.ignore(256, '\n');
    VideoGame* vd = new VideoGame(title, year, publisher, rate);
    MediaLs.push_back(vd);
  }


  
}
void searchMedia(vector<Media*> &MediaLs) { //search function
  vector<Media*> :: iterator it;
  char* input;
  input = new char[80];

  cout << "do you wish to search by title or year" << endl;

  cin.getline(input, 80);
  bool found = false;
  if (strcmp(input, "title") == 0) { //if title is enetred finc the corresponding directory and print its inputs from the designated class
    char* title;
    title = new char[80];
    cout << "please enter title" << endl;
    cin.getline(title, 80);
    for(it = MediaLs.begin(); it < MediaLs.end(); it++) {
      if (strcmp(title, (*it) -> getTitle()) == 0) {
	(*it) -> print();
        found = true;
	cout << "enter" << endl;
      }
      if (!found) {
         cout << " Movie title " << title << " not found " << endl;
      }
    }
  }
  else if(strcmp(input, "year") == 0) { //if year is enetred finc the corresponding directory and print its inputs from the designated class

    int year = 0;
    cout << "enter a year" << endl;
    cin >> year;
    for (it = MediaLs.begin(); it < MediaLs.end(); it++) {
      if(year == (*it) -> getYear()) {
	  (*it) -> print();
	}
    }
  }
}


void deleteMedia(vector<Media*> &MediaLs) { //delete function
   vector<Media*> :: iterator it;
  char* input;
  input = new char[80];

  cout << "do you wish to search by title or year" << endl;

  cin.getline(input, 80);

  if (strcmp(input, "title") == 0) { //if titled is entred delete all of the elements of that list
    char* title;
    int count = 0;
    title = new char[80];
    cout << "please enter title" << endl;
    cin.getline(title, 80);
    for(it = MediaLs.begin(); it < MediaLs.end(); it++) {
      if (strcmp(title, (*it) -> getTitle()) == 0) {
        (*it) -> print();
	MediaLs.erase(MediaLs.begin()+count); //deletes elements from the list
        cout << "enter" << endl;
      }
      else {
	count++;
      }
      cout << " Count value is " << count << endl;
    }
  }
  else  {
    
    cout << "error. enter title or year" << endl;
    }


}

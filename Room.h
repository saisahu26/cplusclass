//

//  Room.hpp

//  cpp

//

//  Created by Saikapish Sahu on 11/12/23.

//



#ifndef ROOM_H

#define ROOM_H

#include <iostream>

#include <stdio.h>

#include <cstring>

//#include "Room.h"





using namespace std;



class Room {

public:

    Room(char* name);

    char* getName();

    Room createRoom();

    

private:

    char* title;

    

};



#endif // ROOM_H

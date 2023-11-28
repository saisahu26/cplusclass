//

//  Item.cpp

//  cpp

//

//  Created by Saikapish Sahu on 11/13/23.

//



#include <stdio.h>

#include "Item.h"

#include <iostream>

#include <cstring>



using namespace std;



Item :: Item(char* name) {

    name = new char[80];

    strcpy(name, name);

}

char* Item :: getName() {

 return name;
}

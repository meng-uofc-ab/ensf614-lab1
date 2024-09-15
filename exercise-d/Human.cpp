//
//  Human.cpp
//  exercise-d
//
//  Created by Abhilash Paul on 2024-09-15.
//

#include <cstring>
#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(const char* nam, double x, double y): name(new char[strlen(nam)+1]) {
    strcpy(this ->name, nam);
    location.set_x(x);
    location.set_y(y);
}

Human::~Human() {
    delete[] name;
}
    
char* Human::get_name() {
    return name;
}
            
void Human::set_name(const char* name) {
    if (this->name != name) {
        delete[] this->name;
        this->name = new char[strlen(name)+1];
        strcpy(this ->name, name);
    }
}
   
Point Human::get_point() const {
    return location;
}
    
void Human::display() {
    cout << "Human Name: " << name << "\nHuman Location: "
    << location.get_x() << " ,"
    << location.get_y() << ".\n" << endl;
}

/*
* File Name: Human.cpp
* Assignment: Lab 1 Exercise D
* Lab section: B01
* Completed by: Abhilash Paul
* Development Date: Sept 14, 2024
*/


#include <cstring>
#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(const char* nam, double x, double y): name(new char[strlen(nam)+1]) {
    strcpy(this ->name, nam);
    location.set_x(x);
    location.set_y(y);
}

Human::Human(const Human& source)
    : name(new char[strlen(source.name) + 1]), location(source.location) {
    strcpy(this->name, source.name);
}

Human& Human::operator=(const Human& source) {
    if (this != &source) {
        delete[] name;

        name = new char[strlen(source.name) + 1];
        strcpy(name, source.name);

        location = source.location;
    }
    return *this;
}

Human::~Human() {
    delete[] name;
}
    
char* Human::get_name() const {
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
    
void Human::display() const {
    cout << "Human Name: " << name << "\nHuman Location: "
    << location.get_x() << " ,"
    << location.get_y() << ".\n" << endl;
}

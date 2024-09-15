//
//  Human.h
//  exercise-d
//
//  Created by Abhilash Paul on 2024-09-15.
//

#ifndef Human_h
#define Human_h

#include "Point.h"

class Human {
protected:
    Point location;   // Location of an object of Human on a Cartisian Plain
    char *name;       // Human's name
public:
    Human(const char* nam="", double x=0, double y=0);
    ~Human();
    char* get_name();
    void set_name(char* name);
    Point get_point() const ;
    void display();
};

#endif /* Human_h */

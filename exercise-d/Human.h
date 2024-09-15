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
    Human(const Human& source);
    ~Human();
    char* get_name() const;
    void set_name(const char* name);
    Point get_point() const;
    void display() const;
};

#endif /* Human_h */

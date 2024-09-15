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
    // Requires: A C-style string for name (default empty),
    // and two doubles for x and y coordinates (default 0)
    // Promises: Constructs a Human object with the given name and location
    
    Human(const Human& source);
    // Requires: A const reference to another Human object
    // Promises: Creates a new Human object as a deep copy of the source object
    
    Human& operator=(const Human& source);
    // Requires: A const reference to another Human object
    // Promises: Assigns the contents of the source object to this object, performing a deep copy
    
    ~Human();
    // Promises: Destroys the Human object and frees any dynamically allocated memory
    
    char* get_name() const;
    // Promises: Returns a pointer to the name of the Human
    
    void set_name(const char* name);
    // Promises: Returns the location of the Human as a Point object
    
    Point get_point() const;
    // Promises: Returns the location of the Human as a Point object
    
    void display() const;
    // Promises: Displays the Human's name and location information
};

#endif /* Human_h */

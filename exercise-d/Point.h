/*
* File Name: Point.h
* Assignment: Lab 1 Exercise D
* Lab section: B01
* Completed by: Abhilash Paul
* Submission Date: Sept 17, 2024
*/


#ifndef Point_h
#define Point_h

#include <stdio.h>
using namespace std;

// Class to handle a point in a cartesian plane
class Point{
private:
    double x, y;
public:
    Point(double a =0, double b =0);
    // Requires: Two double values (default to 0 if not provided)
    // Promises: Constructs a Point object with the given x and y coordinates
    
    double get_x() const;
    // Promises: Returns the x-coordinate of the Point
    
    double get_y() const;
    // Promises: Returns the y-coordinate of the Point
    
    void set_x(double a);
    // Requires: A double value representing the new x-coordinate
    // Promises: Sets the x-coordinate of the Point to the given value
    
    void set_y(double a);
    // Requires: A double value representing the new y-coordinate
    // Promises: Sets the y-coordinate of the Point to the given value
    
};
#endif /* Point_h */

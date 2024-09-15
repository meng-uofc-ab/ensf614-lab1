//
//  Point.cpp
//  exercise-d
//
//  Created by Abhilash Paul on 2024-09-15.
//

#include "Point.h"

Point::Point(double a, double b): x(a), y(b) {};
double Point::get_x(){return x;}
double Point::get_y(){return y;}
void Point::set_x(double a) { x = a;};
void Point::set_y(double a) { y = a;};

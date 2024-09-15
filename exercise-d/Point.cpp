/*
* File Name: Point.cpp
* Assignment: Lab 1 Exercise D
* Lab section: B01
* Completed by: Abhilash Paul
* Development Date: Sept 14, 2024
*/


#include "Point.h"

Point::Point(double a, double b): x(a), y(b) {}

double Point::get_x() const {return x;}
double Point::get_y() const {return y;}

void Point::set_x(double a) { x = a;}
void Point::set_y(double a) { y = a;}

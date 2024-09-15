//
//  Point.h
//  exercise-d
//
//  Created by Abhilash Paul on 2024-09-15.
//

#ifndef Point_h
#define Point_h

#include <stdio.h>
using namespace std;

class Point{
private:
    double x;
    double y;
public:
    Point(double a =0, double b =0);
    double get_x();
    double get_y();
    void set_x(double a);
    void set_y(double a);
};
#endif /* Point_h */

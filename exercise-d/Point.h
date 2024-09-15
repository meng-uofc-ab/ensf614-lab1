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
    double x, y;
public:
    Point(double a =0, double b =0);
    double get_x() const;
    double get_y() const;
    void set_x(double a);
    void set_y(double a);
};
#endif /* Point_h */

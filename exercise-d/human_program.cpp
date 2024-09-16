/*
* File Name: human_program.cpp
* Assignment: Lab 1 Exercise D
* Lab section: B01
* Completed by: Abhilash Paul
* Submission Date: Sept 17, 2024
*/

#include <cstring>
#include <iostream>
using namespace std;
#include "Human.h"

int main(int argc, char **argv)
{
	double x = 2000, y = 3000;
	Human h("Ken Lai", x , y); 
    h.display();
	return 0;
}

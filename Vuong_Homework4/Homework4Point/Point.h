//Jimmy Vuong
#pragma once
#include <iostream>
class Point
{
	friend std::ostream& operator<<(std::ostream&, const Point&); //the operator assign the initial value into the output
	friend std::istream& operator >> (std::istream&, Point&); // the operator assign the initial value into the input
public:
	Point(); //allow the Main program to use as main program
	~Point();
private: // only the point class h and cpp to use int xCoordinate and yCoordinate
	int xCoordinate; //get and set xCoordinate
	int yCoordinate; //get and set yCoordinate
};


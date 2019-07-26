// Jimmy Vuong
#include "stdafx.h"
#include "Point.h"
#include <string>
using namespace std;

Point::Point()
	: xCoordinate(0), yCoordinate(0) {} // start the xCoordinate and yCoordinate as 0 => (0,0) until the user input that will replace it.

ostream& operator<<(ostream& output, const Point& point) //ostream is where the user input are carry to this program to check if the coordinates is right or incorrect.
{
	if (cin.fail() != true) //If the user input only just the number then it be in out of xCoordinate and yCoordinate
	{
		output << "X Coordinate: " << point.xCoordinate << "\nY Coordinate: " << point.yCoordinate;
	}
	else // if user input that is not numbers, then return this output and end program
	{
		output << "Bad input was given.";
	}
	return output; // return the output of xCoordinate and yCoordinate
}

istream& operator >> (istream& input, Point& point) //The user input after the ostream
{
	input >> point.xCoordinate >> point.yCoordinate; //the user input of xCoordinate and yCoordinate
	if (point.xCoordinate < 0 || point.yCoordinate < 0) //if the user input that is that is negative number, then use failbit
	{
		input.clear(ios::failbit); 
	}
	return input; //return input of the xCoordinate and yCoordinate
}
Point::~Point()
{
}

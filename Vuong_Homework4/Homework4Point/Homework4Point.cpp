// Jimmy Vuong
// Homework4Point.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Point.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[]) //main program
{
	Point point; //using the Point class
	cout << "Enter in the coordinates in the format(x, y) : " << endl; //statement to tell user input x and y coordinates
	cin >> point;	//the input into the Point class
	cout << point << "\n\n" << endl; // return the result of Point class and print here
	return 0; // return 0 and end program
}
//Jimmy Vuong
// InheritanceHomework.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "OvernightPackage.h"
#include "Package.h"
#include "TwoDayPackage.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) // main
{
	OvernightPackage item1("Jimmy Vuong", "1836 Cherry Rd.", "Memphis", //Overnight package example
		"Tennessee", "38117", "Timmy Turner", "123 dimmsdale street", "Dimmsdale", "California",
		"90001", 37.11, 1.50, 1.10);
	TwoDayPackage item2("Daniel Sweetney", "3720 Alumni Ave", "Memphis", //Two Day Package example
		"Tennessee", "38152", "Shawn James", "127 W. 83rd St", "Manhattan", "New York",
		"10024",25.76, 1.05, 8.00);

	cout << fixed << setprecision(2);
	cout << "=======================================\n";
	cout << "Overnight Delivery\n";
	cout << "Sender        " << item1.getsender_name() << "\n"; 
	cout << "              " << item1.getsender_address() << "\n"; 
	cout << "              " << item1.getSendCity() << " " <<
		item1.getsender_state() << " " << item1.getsender_ZIPcode() << "\n";
	cout << "\n";
	cout << "Receiver     " << item1.getreceiver_name() << "\n";
	cout << "              " << item1.getreceiver_address() << "\n";
	cout << "              " << item1.getreceiver_city() << " " <<
		item1.getreceiver_state() << " " << item1.getreceiver_ZIPcode() << "\n";
	cout << "Cost          $ " << item1.calculateCost() << "\n";
	cout << "=======================================\n";

	cout << "\n\n";
	cout << "=======================================\n";
	cout << "2 Day Delivery\n";
	cout << "Sender        " << item2.getsender_name() << "\n";
	cout << "              " << item2.getsender_address() << "\n";
	cout << "              " << item2.getSendCity() << " " <<
		item2.getsender_state() << " " << item2.getsender_ZIPcode() << "\n";
	cout << "\n";
	cout << "Receiver     " << item2.getreceiver_name() << "\n";
	cout << "              " << item2.getreceiver_address() << "\n";
	cout << "              " << item2.getreceiver_city() << " " <<
		item2.getreceiver_state() << " " << item2.getreceiver_ZIPcode() << "\n";
	cout << "Cost          $ " << item2.calculateCost() << "\n";
	cout << "=======================================\n";

	system("pause");
	return 0;
}



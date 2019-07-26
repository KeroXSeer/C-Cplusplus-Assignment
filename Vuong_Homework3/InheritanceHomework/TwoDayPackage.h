//Jimmy Vuong
#ifndef TWODAYPACKAGE_H // if it is use twoday package, uses this class
#define TWODAYPACKAGE_H
#include "Package.h"
// it is a TwoDayPackage class of what will it do
class TwoDayPackage : public Package //inheritance of Package (main)
{
private:
	double two_day_delivery_fee; // it is private to only TwoDayPackage
public:
	TwoDayPackage(string sender_n, string sender_addr, string // Same from Package class which include everything from it
		sender_c, string sender_s, string sender_Z, string recipient_n, 
		string receiver_addr, string receiver_c, string receiver_s,
		string receiver_Z, double wei, double cost, double delivery_fee);

	double gettwo_day_delivery_fee(); // get two day delivery fee
	void settwo_day_delivery_fee(double delivery_fee); // void set get two day delivery fee
	double calculateCost(); // find the cost of the two day package
};
#endif // end of the two package program
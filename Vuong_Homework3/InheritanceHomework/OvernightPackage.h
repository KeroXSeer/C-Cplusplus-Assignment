//Jimmy Vuong
#ifndef OVERNIGHTPACKAGE_H // use the overnightpackage class if overnight class used
#define OVERNIGHTPACKAGE_H
#include "Package.h"
// it is a OvernightPackage class of what will it do
class OvernightPackage : public Package // inheritance of overnight package to package (main)
{
private:
	double overnight_delivery_fee; // private string overnight delivery fee only on overnightpackage class
public:

	OvernightPackage(string sender_n, string sender_addr, string sender_c, //public string is similiar to package string
		string sender_s, string sender_Z, string receiver_n, string receiver_addr,
		string receiver_c, string receiver_s, string receiver_Z, double wei,
		double cost, double delivery_fee);

	double calculateCost(); // get the cost of the package
	double getovernight_delivery_fee(); // get cost of the overnight fee
	void setovernight_delivery_fee(double delivery_fee); // set cost of the overnight fee

};
#endif // end of the overnight package class


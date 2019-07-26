//Jimmy Vuong
#include "stdafx.h"
#include "TwoDayPackage.h"
//TwoDayPackage is how will the twodaypackage does

TwoDayPackage::TwoDayPackage(string sender_n, string sender_addr, //TwoDayPackage string of sender: name, address, city, state, Zipcode.
	string sender_c, string sender_s, string sender_Z, string recipient_n,
	string receiver_addr, string receiver_c, string receiver_s, //TWoDayPackage string of receiver: name, address, city, state, Zipcode.
	string receiver_Z, double wei, double cost, double delivery_fee)
	:Package(sender_n, sender_addr, sender_c, sender_s, sender_Z, recipient_n, //Package is share in TwoDayPackage.
		receiver_addr, receiver_c, receiver_s, receiver_Z, wei, cost)
{
	settwo_day_delivery_fee(delivery_fee); // set two day delivery fee

}


double TwoDayPackage::gettwo_day_delivery_fee() // get two day delivey fee
{
	return two_day_delivery_fee;
}
void TwoDayPackage::settwo_day_delivery_fee(double delivery_fee) // void set two day delivery fee
{
	two_day_delivery_fee = delivery_fee; // delivery_fee => two_day_delivery_fee
}

double TwoDayPackage::calculateCost() // calculate the cost of two day package
{
	double result; // get the result
	result = Package::calculateCost() + two_day_delivery_fee; // result is add from calculate cost from package and two day delivery free in twodaypackage
	return result; // get result of package cost of twodaypackage
}

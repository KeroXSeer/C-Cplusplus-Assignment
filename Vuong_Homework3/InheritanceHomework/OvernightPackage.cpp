//Jimmy Vuong
#include "stdafx.h"
#include "OvernightPackage.h"

////Overnight class is how will the Overnightpackage does

OvernightPackage::OvernightPackage(string sender_n, string sender_addr, // Overnight string of sender: name, address, city, state, Zipcode
	string sender_c, string sender_s, string sender_Z, string receiver_n,
	string receiver_addr, string receiver_c, string receiver_s, // Overnight string of receiver: name, address, city, state, Zipcode
	string receiver_Z, double wei, double cost, double delivery_fee)
	:Package(sender_n, sender_addr, sender_c, sender_s, sender_Z, receiver_n, // Package string = Overnight string
		receiver_addr, receiver_c, receiver_s, receiver_Z, wei, cost)
{
	setovernight_delivery_fee(delivery_fee); // set over night delivery fee
}

double OvernightPackage::getovernight_delivery_fee() // get over night delivery fee
{
	return overnight_delivery_fee;
}
void OvernightPackage::setovernight_delivery_fee(double delivery_fee) //overnight fee <= delivery fee from package
{
	overnight_delivery_fee = delivery_fee;
}

double OvernightPackage::calculateCost() // find the cost of the overnight package
{
	double result; // find the result of cost of overnight package
	result = (getcostperounce() + overnight_delivery_fee) * getweight(); //add of costperonce and delivert fee which mutiply after that to get cost of overnight fee
	return result; // found the cost of overnight fee
}
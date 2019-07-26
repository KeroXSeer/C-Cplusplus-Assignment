//Jimmy Vuong
#include "stdafx.h"
#include "Package.h"
// It is a class of how Package would do

Package::Package(string sender_n, string sender_addr, string sender_c, string //String of sender: name, address, city, state, Zipcode
	sender_s, string sender_Z, string receiver_n, string receiver_addr, string // String of receiver: name, address, city, state , Zipcode
	receiver_c, string receiver_s, string receiver_Z, double wei, double cost) // double weight and double cost uses for weight of package the cost of package.
{
	sender_name = sender_n; // sender_s => sender_name.
	sender_address = sender_addr; // sender_addr => sender_address.
	sender_city = sender_c; // sender_c => sender_city.
	sender_state = sender_s; // sender_s => sender_state.
	sender_ZIPcode = sender_Z; // sender_Z => sender_Zipcode

	receiver_name = receiver_n; //receiver_n => receiver_name.
	receiver_address = receiver_addr; //receiver_addr =>receiver_address
	receiver_city = receiver_c; //receiver_c => receiver_city
	receiver_state = receiver_s; //receiver_s => receiver_state
	receiver_ZIPcode = receiver_Z; // receiver_Z => receiver_Zipcode

	if (wei > 0.0 && cost > 0.0) //if wei and cost is over 0.1 then 
	{
		weight = wei; // set wei => weight
		costperounce = cost; //set cost => costperounce
	}
	else //else if it is zero in both weight and costperonce
	{
		weight = 0.0; // weight is 0.0
		costperounce = 0.0; //costperounce is 0.0
	}

}

void Package::setsender_name(string sender_n) //set name of the sender
{
	sender_name = sender_n;
}
string Package::getsender_name() //get name of the sender
{
	return sender_name;
}

void Package::setsender_address(string sender_addr) //set address of the sender
{
	sender_address = sender_addr;
}
string Package::getsender_address() //get address of the sender
{
	return sender_address;
}

void Package::setsender_city(string sender_c) // set city of the sender
{
	sender_city = sender_c;
}

string Package::getSendCity() // get city of the sender
{
	return sender_city;
}

void Package::setsender_state(string sender_s) //set state of the sender
{
	sender_state = sender_s;
}
string Package::getsender_state() //get state of the sender
{
	return sender_state;
}

void Package::setsender_ZIPcode(string sender_Z) // set ZIPcode of the sender
{
	sender_ZIPcode = sender_Z;
}
string Package::getsender_ZIPcode() //get Zipcode of the sender
{
	return sender_ZIPcode;
}

void Package::setreceiver_name(string receiver_n) //set name of the receiver
{
	receiver_name = receiver_n;
}
string Package::getreceiver_name() // get name of the receiver
{
	return receiver_name;
}

void Package::setreceiver_address(string receiver_addr) // set address of the receiver.
{
	receiver_address = receiver_addr;
}
string Package::getreceiver_address() // get address of the receiver
{
	return receiver_address;
}

void Package::setreceiver_city(string receiver_c) // set city of the receiver
{
	receiver_city = receiver_c;
}
string Package::getreceiver_city() //get city of the receiver
{
	return receiver_city;
}

void Package::setreceiver_state(string receiver_s) // set state of the receiver
{
	receiver_state = receiver_s;
}
string Package::getreceiver_state() // get state of the receiver.
{
	return receiver_state;
}

void Package::setreceiver_ZIPcode(string receiver_Z) // set ZIPcode of the receiver
{
	receiver_ZIPcode = receiver_Z;
}
string Package::getreceiver_ZIPcode() // get Zipcode of the receiver
{
	return receiver_ZIPcode;
}

void Package::setweight(double w) // set double weight
{
	weight = (w < 0.0) ? 0.0 : w;
}
double Package::getweight() // get double weight
{
	return weight;
}

void Package::setcostperounce(double cost) // set double cost
{
	costperounce = (cost < 0.0) ? 0.0 : cost;
}

double Package::getcostperounce() // get double cost
{
	return costperounce;
}

double Package::calculateCost() // calculate cost of the package
{
	double result; // result the package cost

	result = weight * costperounce; //mutiply weight and costperounce to get result

	return result; // get result
}

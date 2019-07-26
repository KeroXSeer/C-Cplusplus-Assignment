//Jimmy Vuong
#pragma once
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
 // it is a package class of what will it do
class Package
{
private: // constructor for private where only it applied in package
	string sender_name; // string sender name for package
	string sender_address; // string sender address for package
	string sender_city; // string sender city for package
	string sender_state; // string sender state for package
	string sender_ZIPcode; // string sender Zipcode for package

	string receiver_name; // string receiver name for package 
	string receiver_address; // string receiver address for package
	string receiver_city; // string receiver city for package
	string receiver_state; // string receiver state for package
	string receiver_ZIPcode; // string receiver Zipcode for package

	double weight; // double weight for package
	double costperounce; // double costperounce for package
public: // public is can be used for eveything


	Package(string sender_n, string sender_addr, string sender_c,
		string sender_s, string sender_Z, string receiver_n, string receiver_addr,
		string receiver_c, string receiver_s, string receiver_Z, double wei,
		double cost);

	void setsender_name(string sender_n); // set sender name
	string getsender_name();	//get sender name

	void setsender_address(string sender_addr); // set sender address
	string getsender_address();		//get sender address

	void setsender_city(string sender_c); // set sender city
	string getSendCity();	//get sender city

	void setsender_state(string sender_s); //set sender state
	string getsender_state(); //get sender state

	void setsender_ZIPcode(string sender_Z); //set sender Zipcode
	string getsender_ZIPcode(); //get sender Zipcode

	void setreceiver_name(string receiver_n); //set receiver name
	string getreceiver_name(); // get receiver name

	void setreceiver_address(string receiver_addr); // set receiver address
	string getreceiver_address(); // get receiver address

	void setreceiver_city(string receiver_c); // set receiver city
	string getreceiver_city(); // get receiver city

	void setreceiver_state(string receiver_s); //set receiver state
	string getreceiver_state(); // get receiver state

	void setreceiver_ZIPcode(string receiver_Z); // set receiver Zipcode
	string getreceiver_ZIPcode(); // get receiver Zipcode

	void setweight(double w); // set double weight
	double getweight(); // get weight

	void setcostperounce(double cost); // set costperounce
	double getcostperounce(); //get costperounce

	double calculateCost(); // get cost of package
};


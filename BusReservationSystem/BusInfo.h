//BusInfo.h
//This header file allows us to create an interface that is visible to BusInfo.cpp file
//This file holds the declaration statements for data member and member function
//This header file also defines the "default" constructor for class BusInfo

#include <SDKDDKVer.h>
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class BusInfo
{
private:
	string inputcity;
	string inputnum;

public:
	//Default constructor
	BusInfo()
	{
		cout << "Message from Header file: constructor for class BusInfo!" <<endl << endl;
	}
	
	//member function that sets the bus number
	void setBusNumber(string inputnum);

	//member function that sets the destination city
	void setDestCity(string inputcity);

	//member function that gets the Bus number
	int getBusNumber();

	//member function that gets the Destination city
	string getDestCity();

};

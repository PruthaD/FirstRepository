//BusInfo.cpp
//This file implements the functions declared in BusInfo.h file
//This is the implementation part of the class BusInfo

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include "BusInfo.h"

using namespace std;
string city;
int busnum;

void BusInfo::setDestCity(string inputcity)
{
	city = inputcity;
}



void BusInfo::setBusNumber(string inputnum)
{
	

	//Over here, we are just validating negative Vs positive numbers. A Bus number should always be a non-zero positive number.
		if (stoi(inputnum) < 1)
		{
			cout << "bus number cannot be less than 1" << endl;
		}
		else
		{
			busnum = stoi(inputnum);
		}
	

}

int BusInfo::getBusNumber()
{
	return busnum;
}

string BusInfo::getDestCity()
{
	return city;
}
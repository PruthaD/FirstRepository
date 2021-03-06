// BusReservationSystem.cpp : Defines the entry point for the console application.
// BusReservationSystem.cpp file contains the Main class for this project
// The purpose of the code in this file is just to initialize the BusInfo class in BusInfo.h file
// and to pla with various functions and data members of this class

#include "stdafx.h"
#include <iostream>
#include <string>
#include "BusInfo.h"

using namespace std;

int main()
{
	//BusInfo Constructor
	BusInfo myBus;

	//Get the initial name of the destination city. It will be null by default
	cout << "Welcome to Online Bus Reservation System!!" << endl;
	cout << "Initial Destination City Name is: " << myBus.getDestCity() << endl << endl;
	cout << "Enter City Name: ";
	string cityName;
	getline(cin, cityName);

	//Set Destination City Name
	myBus.setDestCity(cityName);
	cout << "City name entered: " << myBus.getDestCity() << endl;

	//Get the initial bus number. It will be null by default
	cout << "Initial Bus Number is: " << myBus.getBusNumber() << endl;
	cout << "Enter Bus Number: ";
	string busNumber;
	getline(cin, busNumber);

	//Set Bus number. Number validation is done in BusInfo.cpp file
	myBus.setBusNumber(busNumber);
	cout << "Bus Number entered: " << myBus.getBusNumber();

	cin.ignore();
	return 0;
}


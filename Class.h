#pragma once

#ifndef CLASS_H
#define CLASS_H

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;



	/***************************  BASE CLASS AIRLINES  ****************************/

class Airlines
{

public:

	//FUNCTIONS
	

	
	//Function to read the Domestic flights data from the file for the display
	//i.e. Test Data for Domestic Flights.txt (FRS4).
	void Domesticflight(System::Windows::Forms::Label^ label3);

	//Function to read the International flights data from the file for the display
	//i.e. Test Data for International Flights.txt (FRS4).
	void Internationalflight(System::Windows::Forms::Label^ label3);


	//Function to add the choices of user into the file. (FRS2)
	void AddChoices(String^ airlines, String^ date, String^ payment, String^ cardNo);

	
};


	/***********************  DERIVED CLASS AIRLINETICKETS  ************************/


class AirlineTickets : public Airlines
{

private:
	float tickets;


public:
	
	//CONSTRUCTORS

	//Default Constructor
	AirlineTickets();
	
	//Constructor With Parameter To set the value of tickets.
	AirlineTickets(float t);
	
	
	//FUNCTIONS 
	
	
	//Function to add the basic details of user into the file. (FRS3)
	void AddFields(String^ name, String^ contact, String^ passport, String^ age,String^ email, String^ gender);
	
	//Function to book the flight tickets for the user.(FRS4)
	void BookTickets(String^ choice, String^ flight);

	//Function To Display the final ticket. (FRS5)
	void TicketGeneration(System::Windows::Forms::Label^ label1);

	//Function to Cancel the Airline Bookings (CancelFRS)
	void CancelTickets(String^ passport);
	

	//OPREATOR OVERLOADING
	
	//Function to input the value of cost for tickets in file (FRS4)
	void TotalCost();
	
	/**********************************  FRIEND FUNCTION  **********************************/
	friend AirlineTickets operator *(const AirlineTickets&, const AirlineTickets&);

};

#endif


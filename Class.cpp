#include <iostream>
#include <string>
#include "Class.h"
#include "FRS2.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;



//CLASS AIRLINES


//Function to read the Domestic flights data (FRS4)
void Airlines::Domesticflight(System::Windows::Forms::Label^ label3)
{
	label3->Text = "";
	StreamReader^ Read = gcnew StreamReader("Test Data for Domestic Flights.txt");
	String^ DomesticFlightData = Read->ReadToEnd();
	label3->Text = (DomesticFlightData);
	Read->Close();
}


//Function to read the International flights data (FRS4)
void Airlines::Internationalflight(System::Windows::Forms::Label^ label3)
{
	label3->Text = "";
	StreamReader^ Read = gcnew StreamReader("Test Data for International Flights.txt");
	String^ InternationalFlightData = Read->ReadToEnd();
	label3->Text = (InternationalFlightData);
	Read->Close();
}

//Function to add the choices of user into the file. (FRS2)
void Airlines::AddChoices(String^ airlines, String^ date, String^ payment, String^ cardNo)
{
	StreamWriter^ Out = gcnew StreamWriter("FRS2AddChoices.txt", true);
	Out->Write(airlines);
	Out->Write(":");
	Out->Write(date);
	Out->Write(":");
	Out->Write(payment);
	Out->Write(":");
	Out->Write(cardNo);
	Out->Write(";");
	Out->Close();
}



//CLASS AIRLINETICKETS


//CONSTRUCTORS

//Default Constructor
AirlineTickets::AirlineTickets()
{
	tickets = 0.0;
}


//Parameterised Constructor
AirlineTickets::AirlineTickets(float t)
{
	tickets = t;
}


// FUNCTIONS 

//Function to add the user data into the file. (FRS3)

void AirlineTickets::AddFields(String^ name, String^ contact, String^ passport, String^ age, String^ email, String^ gender)
{
		
	StreamWriter^ OutTicket = gcnew StreamWriter("Tickets.txt", true);
	OutTicket->Write(name);
	OutTicket->Write("\n");
	OutTicket->Write("\n");
	OutTicket->Write(contact);
	OutTicket->Write("\n");
	OutTicket->Write("\n");
	OutTicket->Close();


	StreamWriter^ Out = gcnew StreamWriter(passport + ".txt", true);
	Out->Write(name);
	Out->Write("\n");
	Out->Write(contact);
	Out->Write("\n");
	Out->Write(passport);
	Out->Write("\n");
	Out->Write(email);
	Out->Write("\n");
	Out->Write(gender);
	Out->Write("\n");
	Out->Close();
    
}


//Function to add the user book flights into the file. (FRS4)
void AirlineTickets::BookTickets(String^ choice, String^ flight)
{
	StreamWriter^ Out = gcnew StreamWriter("Tickets.txt", true);

	if (choice == "1" && flight == "Domestic")
	{
		Out->Write("Karachi");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Lahore");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("PIA");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}

	else if (choice == "2" && flight == "Domestic")
	{
		Out->Write("Islamabad");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Karachi");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Jinnah");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}

	else if (choice == "3" && flight == "Domestic")
	{
		Out->Write("Karachi");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Islamabad");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Serene");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}

	else if (choice == "4" && flight == "Domestic")
	{
		Out->Write("Lahore");
		Out->Write("\n");
		Out->Write("Karachi");
		Out->Write("\n");
		Out->Write("PIA");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}

	else if (choice == "5" && flight == "Domestic")
	{
		Out->Write("Islamabad");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Lahore");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("PIA");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}

	else if (choice == "1" && flight == "International")
	{
		Out->Write("Karachi");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Canada");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Serene");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}

	else if (choice == "2" && flight == "International")
	{
		Out->Write("Islamabad");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Tokyo");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Airblue");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();

	}
	else if (choice == "3" && flight == "International")
	{
		Out->Write("Karachi");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Austrailia");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Airblue");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}
	else if (choice == "4" && flight == "International")
	{
		Out->Write("Lahore");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Dubai");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("PIA");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}
	else if (choice == "5" && flight == "International")
	{
		Out->Write("Islamabad");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Paris");
		Out->Write("\n");
		Out->Write("\n");
		Out->Write("Serene");
		Out->Write("\n");
		Out->Write("\n");
		Out->Close();
	}
	else
	{
		MessageBox::Show("Invalid Choice", "Error");
	}

}

// Function to Display the final values on FRS5 (Ticket Generation)
void AirlineTickets::TicketGeneration(System::Windows::Forms::Label^ label1)
{
	StreamReader^ Read = gcnew StreamReader("Tickets.txt");
	String^ ticketgeneration = Read->ReadToEnd();
	label1->Text = (ticketgeneration);
	Read->Close();
}


//Function to Cancel the Airline Bookings (CancelFRS)
void AirlineTickets::CancelTickets(String^ passport)
{
	if ((File::Exists(passport + ".txt")) && (File::Exists(passport + ".txt"))) {
		File::Delete(passport + ".txt");
		MessageBox::Show("Data has been deleted.", "Notification",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (!File::Exists(passport + ".txt"))
		MessageBox::Show("Data not found", "Error",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
}


//OPREATOR OVERLOADING

AirlineTickets operator *(const AirlineTickets& firstpay, const AirlineTickets& secondpay)
{
	AirlineTickets temp;
	temp.tickets = firstpay.tickets * secondpay.tickets;
	return temp;
}


//Input the value of cost for tickets in file.
void AirlineTickets::TotalCost()
{
	String^ finalvalue = "";
	finalvalue = finalvalue + tickets;
	StreamWriter^ Out = gcnew StreamWriter("Tickets.txt", true);
	Out->Write(finalvalue);
	Out->Close();
}










    

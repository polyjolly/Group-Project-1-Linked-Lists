//Client.h

#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;
class Client
{
	
	public:
		//Default constructor
		Client();
		//Overloaded Constructor
		Client(string firstName, string lastName, int clientID);
		//Default destructor
		~Client() {};
		//mutators
		void setName(string fName, string lName);
		void setID(int ID);
		//accessors
		string getName();
		int getID();
		
		//Printing
		void print();
	
	private:
		string firstName;
		string lastName;
		int clientID;
};
#endif //Client.h

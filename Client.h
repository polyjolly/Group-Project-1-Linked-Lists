//Client.h

#ifndef CLIENT_H
#define CLIENT_H

#include <string>
#include "Account.h"
using namespace std;
class Client
{
	
	public:
		//Default constructor
		Client();
		//Overloaded Constructor
		
		//mutators
		void setName(string fName, string lName);
		void setID(int ID);
		//accessors
		string getName();
		string getID();
	
	private:
		string firstName;
		string lastName;
		int clientID;
};
#endif //Client.h

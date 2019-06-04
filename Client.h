//Client.h

#include <string>
#include "Account.h"
using namespace std;

#ifndef CLIENT_H
#define CLIENT_H

class Client
{
	private:
		string firstName;
		string lastName;
		string clientID;
	public:
		//Default constructor
		Client()
		{
			firstName = "";
			lastName = "";
			clientID = "";
		}
		//mutators
		void setName(string fName, string lName);
		void setID(string ID);
		//accessors
		string getName();
		string getID();
};
#endif

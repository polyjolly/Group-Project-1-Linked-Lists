//Account.h

#include <string>
#include "Client.h"
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
	private:
		string accountID;
		float balance;
	public:
		//Default constructor
		Account();

		//mutators
		void setID(string ID);
		void setBalance(float bal);
		//accessors
		string getID();
		float getBalance();
		
	
};
#endif

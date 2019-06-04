//Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <stdio.h>
#include "Client.h"

using namespace std;
class Account
{
	
	public:
		//Default constructor
		Account();
		//Overloaded Constructor
		//mutators
		void setAcc();
		void setAccNum(string ID);
		void setBalance(float bal);
		//accessors
		string getID();
		float getBalance();
	protected:
		string accountID;
		float balance;
		Client cl;	
	
};
#endif

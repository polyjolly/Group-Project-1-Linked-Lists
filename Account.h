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
		int getAccountID(){return User_AccountID;}
		float getBalance(){return User_AccountBalance;}
	protected:
		Client Cl;
		int User_AccountID;
		float User_AccountBalance;	
	
};
#endif

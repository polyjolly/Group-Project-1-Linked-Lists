//Account.h
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stdio.h>
#include "Client.h"

using namespace std;
class Account
{
	
	public:
		//Default constructor
		Account();
		//Overloaded Constructor
		Account(Client Input_Cl, int Input_AccountID, double Input_AccountBalance);
		//mutators
		void setAcc(Client Input_Cl);
		void setAccNum(int ID);
		void setBalance(float bal);
		//accessors
		int getAccountID(){return User_AccountID;}
		float getBalance(){return User_AccountBalance;}
		string getClientName(){return Cl.getName();}
		//Transaction Functions
		virtual void Deposit(double Input_Deposit);
		virtual void Withdraw(double Input_Withdraw);
		//Printing
		virtual void print();
		virtual string AccountType();
		
	protected:
		Client Cl;
		int User_AccountID;
		float User_AccountBalance;	
	
};
#endif //ACCOUNT_H

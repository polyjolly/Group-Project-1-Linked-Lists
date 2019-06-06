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
		Account(Client Input_Cl,int Input_AccountID,double Input_AccountBalance);
		//mutators
		void setAcc(Client Input_Cl);
		void setAccNum(int ID);
		void setBalance(float bal);
		//accessors
		int getAccountID(){return User_AccountID;}
		float getBalance(){return User_AccountBalance;}
		//Transaction Functions
		void Deposit(double Input_Deposit);
		void Withdraw(double Input_Deposit);
		//Printing
		void print();
		
	protected:
		Client Cl;
		int User_AccountID;
		float User_AccountBalance;	
	
};
#endif //ACCOUNT_H

//Checking.h

#ifndef CHECKING_H
#define CHECKING_H

#include <stdio.h>
#include "Account.h"

using namespace std;

class Checking: public Account
{
	public:
		//Constructor
		Checking();
		virtual void print();
		virtual string AccountType();
		
	private:
		double OverdraftLimit;
		double OverdraftFee;
		virtual void Deposit(double Input_Deposit);
    	virtual void Withdraw(double Input_Withdraw);
};

#endif

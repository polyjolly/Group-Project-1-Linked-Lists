//Saving.h

#ifndef SAVING_H
#define SAVING_H

#include <stdio.h>
#include "Account.h"

#define InterestRate 0.05

using namespace std;
class Saving : public Account
{
	public:
		//Constructor 
		Saving();
		//Overloaded
		Saving(Client Input_Cl,int Input_AccountID,double Input_AccountBalance, double Input_InterestRate);
		//Mutator
		void setInterestRate(double Input_Rate);
		//Accessor
		double getInterestRate() {return SavingsInterestRate;}
		//Abstract
		virtual void print();
    	virtual string AccountType();
    	virtual void Deposit(double Input_Deposit);
    	virtual void Withdraw(double Input_Withdraw);
	private:
		double SavingsInterestRate;
};
#endif

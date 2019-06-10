//Checking.cpp

#include <string>
#include "Checking.h"

using namespace std;

Checking::Checking()
{
	OverdraftLimit = 100.0;
	OverdraftFee = 35.0;
}

void Checking::print()
{
	Cl.print();
	cout<<": Checking Account: ";
	cout <<"$"<<getBalance()<<endl;
}

string Checking::AccountType()
{
    return "Checking";
}

void Checking::Deposit(double Input_Deposit)
{
    double OldBalance = getBalance();
    setBalance(OldBalance + Input_Deposit);
}

void Checking::Withdraw(double Input_Withdraw)
{
    double OldBalance = getBalance();
    if(OldBalance - Input_Withdraw < (OverdraftLimit *- 1))
	{
        setBalance(OldBalance - Input_Withdraw - OverdraftFee);
    }
	else
	{
        setBalance(OldBalance - Input_Withdraw);
    }
}

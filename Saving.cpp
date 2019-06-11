//Saving.cpp

#include "Saving.h"

using namespace std;

Saving::Saving()
{
	SavingsInterestRate = InterestRate;
}


void Saving::Saving::setInterestRate(double Input_Rate)
{
    SavingsInterestRate = Input_Rate;
}

void Saving::Saving::print(){
    Cl.print();
    cout<<": Savings Account: ";
    cout<<"$"<<getBalance()<<endl;
}

string Saving::AccountType()
{
    return "Savings";
}

void Saving::Deposit(double Input_Deposit)
{
    double OldBalance = getBalance();
    setBalance(OldBalance + Input_Deposit);
}

void Saving::Withdraw(double Input_Withdraw)
{
    double OldBalance = getBalance();
    if(OldBalance - Input_Withdraw < 0)
	{
        cout<<"Error Cannot Compleate Transaction Not Enough Funds"<<endl;
    }
	else
	{// If Valid Transaction
        setBalance(OldBalance - Input_Withdraw);
    }
}

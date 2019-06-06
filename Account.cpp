//Account.cpp

#include "Account.h"
using namespace std;

Account::Account()
{
	User_AccountBalance = 0.0;
}

Account::Account(Client Input_Cl,int Input_AccountID,double Input_AccountBalance)
{
	Cl = Input_Cl;
	User_AccountID = Input_AccountID;
	User_AccountBalance = Input_AccountBalance;
}

void Account::setAcc(Client Input_Cl)
{
	Cl = Input_Cl;
}

void Account::setAccNum(int Input_AccountID)
{
	User_AccountID = Input_AccountID;
}

void Account::setBalance(double Input_AccountBalance)
{
	User_AccountBalance = Input_AccountBalance;
}

void Account::Deposit(double Input_Deposit)
{
	double OldBalance = GetBalance();
	setBalance(OldBalance + Input_Deposit)       
}

void Account::Withdraw()
{
	
}

void Account::print()
{
	
}

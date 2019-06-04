//Account.h

#include <string>
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
		Account()
		{
			accountID = "";
			balance = 0;
		}
		//mutators
		void setID(string ID);
		void setBalance(float bal);
		//accessors
		string getID();
		float getBalance();
		
	
};
#endif

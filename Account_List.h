//Account_List.h
#ifndef ACCOUNT_LIST_H
#define ACCOUNT_LIST_H

#include <stdio.h>
#include "Checking.h"
#include "Saving.h"

class Account_List{
	public:
    	Account_List(){
        	head = NULL;
        	curr = NULL;
    	}
    	//Adding Account to Clients of Checking/Savings
    	void AddAccountSavings(Client Input_Client,int Input_AccountNumber,double Input_Balance);
    	void AddAccountChecking(Client Input_Client,int Input_AccountNumber,double Input_Balance);
    	//Printing Accounts
    	void PrintAllAccounts();
    	void PrintAllSavings();
    	void PrintAllChecking();
    	void PrintAccountByClientID(int ClientID_In);
    	//Perform a Transaction
    	void HandleTransactionById(int ClientID_In);

	private:
    	typedef struct account{
        	Account* User_Account;
        	account* next = NULL;
    	}* AccountPTR;
    
    	AccountPTR head = NULL;
    	AccountPTR curr = NULL;
};

#endif //ACCOUNT_LIST_H
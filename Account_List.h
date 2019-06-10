//Account_List.h
#ifndef ACCOUNT_LIST_H
#define ACCOUNT_LIST_H

#include <stdio.h>
#include "Checking.h"
#include "Saving.h"

class Account_List{
	public:
    	Account_List()
		{
        	head = NULL;
        	temp = NULL;
        	curr = NULL;
    	}
    	//Adding Account to Clients of Checking/Savings
    	void AddAccountSavings(Client Input_Client,int Input_AccountNumber,double Input_Balance);
    	void AddAccountChecking(Client Input_Client,int Input_AccountNumber,double Input_Balance);
    	//Printing Accounts
    	void PrintAllAccounts();
    	void PrintAllSavings();
    	void PrintAllChecking();
    	void PrintAccountByClientID(int Input_ClientID);
    	//Perform a Transaction
    	void HandleTransactionById(int Input_ClientID);
    	
    	void ErrorNoClients();

	private:
    	typedef struct account{
        	Account* User_Account;
        	Account* next = NULL;
    	}* AccountPTR;
    
    	AccountPTR head = NULL;
    	AccountPTR temp = NULL;
    	AccountPTR curr = NULL;
};

#endif //ACCOUNT_LIST_H

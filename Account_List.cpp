//Account_List.cpp

#include <cstdlib>
#include "Account_List.h"

void Account_List::AddAccountSavings(Client Input_Client,int Input_AccountNumber,double Input_Balance)
{
	AccountPTR A = new account;
    Account* TempNewAccount = new Saving();
    TempNewAccount->setAcc(Input_Client);
    TempNewAccount->setBalance(Input_Balance);
    TempNewAccount->setAccNum(Input_AccountNumber);
    A -> next = NULL;
    A -> User_Account = TempNewAccount;
    if(head != NULL)
	{
        curr = head;
        while(curr -> next != NULL)
		{
            curr = curr ->next;
        }
        curr -> next = A;
    }
    else
	{
        head = A;
    }
	
}

void Account_List::AddAccountChecking(Client Input_Client,int Input_AccountNumber,double Input_Balance)
{
	AccountPTR A = new account;
    Account* TempNewAccount = new Checking();
    TempNewAccount->setAcc(Input_Client);
    TempNewAccount->setBalance(Input_Balance);
    TempNewAccount->setAccNum(Input_AccountNumber);
    A -> next = NULL;
    A -> User_Account = TempNewAccount;
    if(head != NULL)
	{
        curr = head;
        while(curr -> next != NULL)
		{
            curr = curr -> next;
        }
        curr -> next = A;
    }
    else
	{
        head = A;
    }
}

void Account_List::PrintAllAccounts()
{
	if(head != NULL)
	{
        curr = head;
        while(curr != NULL)
		{
            curr->User_Account->print();
            curr = curr->next;
        }
    }
	else
	{
        ErrorNoClients();
    }
}

void Account_List::PrintAllSavings()
{
	if(head != NULL)
	{
        curr = head;
        while(curr != NULL)
		{
            if(curr->User_Account->AccountType() == "Savings")
			{
                curr->User_Account->print();
            }
            curr = curr->next;
        }
    }
	else
	{
        ErrorNoClients();
    }
}

void Account_List::PrintAllChecking()
{
	if(head != NULL)
	{
        curr = head;
        while(curr != NULL)
		{
            if(curr->User_Account->AccountType() == "Checking")
			{
                curr->User_Account->print();
            }
            curr = curr->next;
        }
    }
	else
	{
        ErrorNoClients();
    }		
}

void Account_List::PrintAccountByClientID(int Input_ClientID)
{
	if(head != NULL)
	{
        curr = head;
        while(curr != NULL)
		{
            if(curr->User_Account->getAccountID() == Input_ClientID)
			{
                curr->User_Account->print();
            }
            curr = curr->next;
        }
    }
	else
	{
        ErrorNoClients();
    }
}

void Account_List::HandleTransactionById(int Input_ClientID)
{
	if(head != NULL)
	{
        curr = head;
        
        while(curr != NULL)
		{
			cout<<"Inside While Loop";

            if(curr->User_Account->getAccountID() == Input_ClientID)
			{
				cout<<"Inside IF";
                int TempOption;
                cout<<"You Currently Have $"<<curr->User_Account->getBalance()<<endl<<"Do you Want to make a"<<endl;
                cout<<"1.) Deposit"<<endl<<"2.) Withdraw"<<endl<<"Choice: ";
                cin>>TempOption;
                if(TempOption == 1)
				{
                    cout<<"How Much Do you Want to Deposit?"<<endl<<"$: ";
                    double TempDeposit;
                    cin>>TempDeposit;
                    curr->User_Account->Deposit(TempDeposit);
                }
				else if (TempOption == 2)
				{
                    cout<<"How Much Do you Want to Withdraw?"<<endl<<"$: ";
                    double TempDeposit;
                    cin>>TempDeposit;
                    curr->User_Account->Withdraw(TempDeposit);
                }
            }
            curr = curr->next;
        }
    }
	else
	{
    	ErrorNoClients();
    }
}

void Account_List::ErrorNoClients()
{
	cout<< string( 100, '\n' );
    cout<<"================= Error ================="<<endl;
    cout<<"There Are Currently No Clients In the Database"<<endl;
    system("PAUSE");
}

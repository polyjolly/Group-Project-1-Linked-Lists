//Author: Matthew Petros and John Greim
//Date: 6/2/19
//Purpose: Utilizes linked lists to allow clients to create savings & checking accounts and perform transactions with them.
//		   Is able to display all information in the database and remove clients.

#include <iostream>
#include <cstdlib>
#include <string>
#include "Account_List.h"
using namespace std;

Account_List ClientDatabase;

//Contains the main menu for the program
int mainMenu()
{
	int choice = 0;
	system("CLS");
	cout<<"=======Banking=======\n"
		<<"1. Add clients and assign accounts\n"
		<<"2. View all clients\n"
		<<"3. View all checking accounts and their balances\n"
		<<"4. View all savings accounts and their balances\n"
		<<"5. Perform a transaction\n"
		<<"6. Remove a client\n"
		<<"7. Exit\n\n"
		<<"Select an option: ";
	
	cin>>choice;
	return choice;
}

//Allows the user to add one or more clients and their accounts to the linked list
void addClients()
{
	//Declare variables
	Client newClient;
	int choice = 0;
	string firstName = "";
	string lastName = "";
	int clientID = 0;
	int accountID = 0;
	double balance = 0;
	
	//Continues to add clients and accounts to the linked list until the user chooses to stop
	while (choice != 2)
	{
		system("CLS");
		cout<<"Enter the client's first and last name: ";
		cin>>firstName>>lastName;
		newClient.setName(firstName, lastName);
		cout<<"Enter the client's ID number: ";
		cin>>clientID;
		newClient.setID(clientID);
		
		cout<<"Does this client have a checking and/or savings account?\n"
			<<"1. Checking\n"
			<<"2. Savings\n"
			<<"Enter your choice: "<<endl;
		cin>>choice;
		
		if (choice == 1)
		{
			cout<<"Enter the ID of the checking account: ";
			cin>>accountID;
			cout<<"Enter the balance of the checking account: ";
			cin>>balance;
			ClientDatabase.AddAccountChecking(newClient, accountID, balance);
		}
		else if (choice == 2)
		{
			cout<<"Enter the ID of the savings account: ";
			cin>>accountID;
			cout<<"Enter the balance of the savings account: ";
			cin>>balance;
			ClientDatabase.AddAccountSavings(newClient, accountID, balance);
		}
		
		cout<<"Enter another client?\n"
			<<"1. Yes\n"
			<<"2. No\n"
			<<"Enter your choice: "<<endl;
		cin>>choice;
	}
}

//Prints Clients to Screen
void viewClients()
{
	cout<<"============= List Of all Clients In Database ============="<< endl;
	ClientDatabase.PrintAllAccounts();
	cout<<"==========================================================="<< endl;
}

void viewCheckAccounts()
{
	cout<<"============= List Of all Checking Accounts In Database ============="<< endl;
    ClientDatabase.PrintAllChecking();
    cout<<"==========================================================="<< endl;
}

void viewSaveAccounts()
{
	cout<<"============= List Of all Savings Accounts In Database ============="<< endl;
    ClientDatabase.PrintAllSavings();
    cout<<"==========================================================="<< endl;
}

void transaction()
{
	cout<<"============= Select A Client ID To Do a New Transaction ============="<<endl;
    ClientDatabase.PrintAllAccounts();
    int TempClientID;
    cin>>TempClientID;
    ClientDatabase.HandleTransactionById(TempClientID);
}


int main(int argc, char** argv) 
{
	//Declare variables
	int choice = 0;
	
	//Performs the actions chosen by the user in the main menu
	while (choice != 7)
	{
		choice = mainMenu();
		
		switch (choice) 
		{
			case 1: addClients(); break;
			case 2: viewClients(); break;
			case 3: viewCheckAccounts(); break;
			case 4: viewSaveAccounts(); break;
			case 5: transaction(); break;
			//case 6: removeClient(); break;
			case 7: exit (EXIT_SUCCESS); break;
			default: cout<<"ERROR: Invalid Option.\n";
		}
		system("PAUSE"); 
	}
	return 0;
}

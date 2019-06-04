//Author: Matthew Petros and John Greim
//Date: 6/2/19
//Purpose: Utilizes linked lists to allow clients to create savings & checking accounts and perform transactions with them.
//		   Is able to display all information in the database and remove clients.

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

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
		<<"7. Exit\n"
		<<"Select an option: ";
	
	cin>>choice;
	return choice;
}

int main(int argc, char** argv) 
{
	//Declare variables
	int choice = 0;
	
	//Performs the actions chosen by the user in the main menu
	while (choice != 7)
	{
		choice = mainMenu();
		
		/*switch (choice) //Note: Functions shown have not been implemented yet, return "undeclared" errors
		{
			case 1: addClients(); break;
			case 2: viewClients(); break;
			case 3: viewCheckAccounts(); break;
			case 4: viewSaveAccounts(); break;
			case 5: transaction(); break;
			case 6: removeClient(); break;
			case 7: exit (EXIT_SUCCESS); break;
			default: cout<<"ERROR: Invalid Option.\n";
		}
		system("PAUSE"); */
	}
	return 0;
}

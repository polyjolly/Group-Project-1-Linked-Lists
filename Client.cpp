//Client.cpp

#include <string>
#include <iostream>
#include "Client.h"
using namespace std;

//Default construct
Client::Client()
{
	firstName = "";
	lastName = "";
	clientID = 0;
}

//Overload Constructor
Client::Client(string fn, string ln, int ID)
{
	firstName = fn;
	lastName = ln;
	clientID = ID;
}
void Client::setName(string fn, string ln)
{
	firstName = fn;
	lastName = ln;
}

void Client::setID(int ID)
{
	clientID = ID;
}

string Client::getName()
{
	return firstName + " " + lastName;
}

int Client::getID()
{
	return clientID;
}

void Client::print()
{
	cout<<getID()<<".) "<<getName();
}

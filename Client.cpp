//Client.cpp

#include <string>
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

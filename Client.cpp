//Client.cpp

#include <string>
#include "Client.h"
using namespace std;

Client::Client()
{
	firstName = "";
	lastName = "";
	clientID = 0;
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

//Client_List.h
#include <string>
#include "Client.h"
using namespace std;

#ifndef CLIENT_LIST_H
#define CLIENT_LIST_H

class Client_List
{
	private:
		typedef struct node
		{
			Client cli;
			node* next;	
		}* nodePTR;
		
		nodePTR head;
		nodePTR curr;
		nodePTR temp;
		
	public:

			
};



#endif //CLIENT_LIST_H

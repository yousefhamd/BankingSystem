#ifndef BANKAPPLICATION_H
#define BANKAPPLICATION_H

#include "ClientClass.h"
#include "BankAccountClass.h"

class BankApplication
{
	Client client;
	BankAccount* account;

public:
	BankApplication();
	bool AddClient();
}

#endif // BANKAPPLICATION_H

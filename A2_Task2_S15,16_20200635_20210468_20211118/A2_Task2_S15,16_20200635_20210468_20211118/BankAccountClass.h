#pragma once
#include "ClientClass.h"

class BankAccount
{
	string accountID;
	double balance;
	Client* client;
public:
	BankAccount();
	BankAccount(double blnce);
	void setAccountID(string acntId);
	string getAccountID();
	void setBalance(double blnce);
	double getBalance();
	void setClient(Client* clint);
	Client* getClient();
	virtual int withdraw(double amount);
	virtual int deposit(double amount);
};


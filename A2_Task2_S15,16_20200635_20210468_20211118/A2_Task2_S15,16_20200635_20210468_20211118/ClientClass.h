#pragma once
#include "BankAccountClass.h"
#include <iostream>
#include <string>
using namespace std;

class Client
{
	string name, address, phone;
	BankAccount* bankAccount;

public:

	void setName(string nm);
	string getName();

	void setAddress(string adrs);
	string getAddress();

	void setPhone(string phn);
	string getPhone();

	void setBankAccount(BankAccount* bnkAcnt);
	BankAccount* getBankAccount();

	Client();

	~Client();
};


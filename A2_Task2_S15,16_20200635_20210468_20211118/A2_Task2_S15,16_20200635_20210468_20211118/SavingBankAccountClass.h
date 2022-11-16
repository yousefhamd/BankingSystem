#pragma once
#include "BankAccountClass.h"
class SavingBankAccount :
	public BankAccount
{
	double minimumBalance = 1000;
public:
	SavingBankAccount(double blnce, double minBlnce);
	void setMinimumBalance(double minBlnce);
	double getMinimumBalance();
	int withdraw(double amount);
	int deposit(double amount);
};


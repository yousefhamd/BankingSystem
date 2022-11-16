#include "SavingBankAccountClass.h"

SavingBankAccount::SavingBankAccount(double blnce, double minBlnce) : BankAccount(blnce), minimumBalance{ minBlnce } {}

void SavingBankAccount::setMinimumBalance(double minBlnce) { minimumBalance = minBlnce; }

double SavingBankAccount::getMinimumBalance() { return minimumBalance; }

int SavingBankAccount::withdraw(double amount) {
	if (minimumBalance - amount < 1000)
		return 0;
	else {
		minimumBalance -= amount;
		return 1;
	}
}

int SavingBankAccount::deposit(double amount) {
	if (amount > 100) {
		minimumBalance += amount;
		return 1;
	}
	else return 0;
}
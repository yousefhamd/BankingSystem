#include "BankAccountClass.h"

BankAccount::BankAccount() { balance = 0; }

BankAccount::BankAccount(double blnce) : balance{blnce} {}

void BankAccount::setAccountID(string acntId) { accountID = acntId; }

string BankAccount::getAccountID() { return accountID; }

void BankAccount::setBalance(double blnce) { balance = blnce; }

double BankAccount::getBalance() { return balance; }

void BankAccount::setClient(Client* clint) { client = clint; }

Client* BankAccount::getClient() { return client; }

int BankAccount::withdraw(double amount) {
	if (balance > amount) {
		balance -= amount;
		return 1;
	}
	else return 0;
}

int BankAccount::deposit(double amount) {
	if (amount > 0) {
		balance += amount;
		return 1;
	}
	else return 0;
}
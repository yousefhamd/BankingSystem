#include "ClientClass.h"

void Client::setName(string nm) {
	name = nm;
}
string Client::getName() {
	return name;
}

void Client::setAddress(string adrs) {
	address = adrs;
}
string Client::getAddress() {
	return address;
}

void Client::setPhone(string phn) {
	phone = phn;
}
string Client::getPhone() {
	return phone;
}

void Client::setBankAccount(BankAccount* bnkAcnt) {
	bankAccount = bnkAcnt;
}
BankAccount* Client::getBankAccount() {
	return bankAccount;
}

Client::Client() {
	name = address = phone = "";
	bankAccount = new BankAccount;
}

Client::~Client()
{
	delete bankAccount;
}

#include "BankApplication.h"
BankApplication::BankApplication()
{
	cout << "Welcome to FCAI Banking Application\n";
	string name, adress, phone, ID;
	double startingBalance, amount;
	account = new BankAccount();

	cout << "Welcome to FCAI Banking Application\n"
		<< "1. Create a New Account\n"
		<< "2. List Clients and Accounts\n"
		<< "3. Withdraw Money\n"
		<< "4. Deposit Money\n"
		<< "Please enter a choice: ";

	int input;
	cin >> input;
	switch (input) {
	case 1: cout << "Please Enter Client Name: "; getline(cin, name); client.setName (name);
			cout << "Please Enter Client Address: "; getline(cin, adress); client.setAddress (adress);
			cout << "Please Enter Client Phone: "; cin >> phone; client.setPhone (phone);
			cout << "What Type of Account Do You Like ? (1) Basic(2) Saving – Type 1 or 2:\n ";
			int input; cin >> input;
			if (input == 1) {
				cout << "Please Enter the Starting Balance: "; cin >> startingBalance; account->setBalance(startingBalance);
				cout << "An account was created with ID " << ID << " and Starting Balance " << account->getBalance() << " L.E.\n";
			}
			else if (input == 2) {

				cout << "Please Enter the Starting Balance (Not less than 1000 L.E.): "; cin >> startingBalance;

				if (startingBalance < 1000) cout << "Saving accounts should have balance 1000 or more balance!\n";
				SavingBankAccount NewSavingBankAccount;
			}
			else cout << "An account was created with ID " << ID << " and Starting Balance " << StartingBalance << " L.E.\n";
		break;
	case 2: cout << "------------- " << client.getName () << "---------\n";
            cout << "Adress: " << client.getAddress () << endl;
            cout << "Account ID: " << account->getAccountID << "( " << account.getType << " )" << endl;
            cout << "Balance: " << account.getBalance << endl;
	break;

	case 3: cout << "Please Enter Account ID (e.g., FCAI-015): "; cin >> ID; break;
            cout << "Account ID: " << ID << endl;
            cout << "Account Type: " << account.getType << endl;
            cout << "Account Balance: " << account.getBalace << endl;
            cout << "Please Enter The Amount to Withdraw: "; cin >> amount;
            if (account.getType == "Basic")
            account.withdraw (amount);
            else (account.getType == "Saving")
            savingAccountw.withdraw (amount);

	case 4: cout << "Please Enter Account ID (e.g., FCAI-015): "; cin >> ID; break;
            cout << "Account ID: " << ID << endl;
            cout << "Account Type: " << account.getType << endl;
            cout << "Account Balance: " << account.getBalace;
            cout << "Please Enter The Amount to Deposit: "; cin >> amount;
            if (account.getType == "Basic")
            account.deposit (amount);
            else (account.getType == "Saving")
            savingAccountw.deposit(amount);
             break;
	default: cout << "Invalid input! please try again.\n";

    }
}

bool BankApplication::AddClient() {


}
#include "money.h"

void Money::withdr() {
	cout << "Enter your account number." << endl; 
	int n=1; //gotta figure out how to set n equal to the number of accounts
	int acc_input,pin_input;
	int acc_num = 1;//Need 		figure		how to		these		a file.
	int pin_num = 5;//		to			out			read		from
	double how_much;
	double balance = 500.11;//
	
	cin >> acc_input;
	
	for(int i=0;i<=n;++i) {
		if(i==n) {
			cout << "Sorry but that is not a valid account number." << endl;
			break;
		}		
		if (acc_input==acc_num) {
			cout << "Please enter your pin number." << endl;
			cin >> pin_input;
			int j=0;
			while (pin_input!=pin_num) {
				cout << "Incorrect pin number, try again." << endl;
				cin >> pin_input;
				j++;
				if(j>3) {
					cout << "Exceeded attempt limit (5), exiting." << endl;
					break;
				}
			}
			if(pin_input==pin_num) {
				cout << "Correct. How much would you like to withdraw? (Less than $500)\n"
					<< "Your current balance is: $" << balance << endl;
				cin >> how_much;
				if(how_much>500) {
					throw 5;
				}
				else balance=balance-how_much;
				if(balance<50) { 
					cout << "Your account has less than $50 and will be closed.\n"
						<< "Please visit the front desk to recieve the rest of your money." << endl;
						break;
				}
				if(balance<1000) {
					balance=balance-10;
					cout<< "Since there is under $1000 in your account, a $10 fee will be taken out." << endl;
				}
				cout << "Your new balance is $" << balance << ". Have a good day." << endl;
			}
			break;
		}
	}	
	
}

void Money::depst() {
	cout << "Enter your account number." << endl; 
	int n=1; //gotta figure out how to set n equal to the number of accounts
	int acc_input,pin_input;
	int acc_num = 1;//Need 		figure		how to		these		a file.
	int pin_num = 5;//		to			out			read		from
	double how_much;
	double balance = 500.11;//
	
	cin >> acc_input;
	
	for(int i=0;i<=n;++i) {
		if(i==n) {
			cout << "Sorry but that is not a valid account number." << endl;
			break;
		}
		if (acc_input==acc_num) {
			cout << "Please enter your pin number." << endl;
			cin >> pin_input;
			int j=0;
			while (pin_input!=pin_num) {
				cout << "Incorrect pin number, try again." << endl;
				cin >> pin_input;
				j++;
				if(j>3) {
					cout << "Exceeded attempt limit(5), exiting." << endl;
					break;
				}
			}
			if(pin_input==pin_num) {
				cout << "Correct. How much would you like to Deposit?\n"
					<< "Your current balance is: $" << balance << endl;
				cin >> how_much;
				balance=balance+how_much;
				cout << "Your new balance is $" << balance << ". Have a good day." << endl;
			}
			break;
		}
	}
}

void Money::balance() {
	cout << "Enter your account number." << endl; 
	int n=1; //gotta figure out how to set n equal to the number of accounts
	int acc_input,pin_input;
	int acc_num = 1;//Need 		figure		how to		these		a file.
	int pin_num = 5;//		to			out			read		from
	double how_much;
	double balance = 500.11;//
	
	cin >> acc_input;
	
	for(int i=0;i<=n;++i) {
		if(i==n) {
			cout << "Sorry but that is not a valid account number." << endl;
			break;
		}
		if (acc_input==acc_num) {
			cout << "Please enter your pin number." << endl;
			cin >> pin_input;
			int j=0;
			while (pin_input!=pin_num) {
				cout << "Incorrect pin number, try again." << endl;
				cin >> pin_input;
				j++;
				if(j>3) {
					cout << "Exceeded attempt limit(5), exiting." << endl;
					break;
				}
			}
			if(pin_input==pin_num) {
				cout << "Correct. Your current balance is: $" << balance << endl;
			}
			break;
		}
	}
}
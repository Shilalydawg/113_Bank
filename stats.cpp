#include "stats.h"
void Stats::history() {
	cout << "Enter your account number." << endl; 
	int n=1; //gotta figure out how to set n equal to the number of accounts
	int acc_input,pin_input;
	int acc_num = 1;//Need 		figure		how to		these		a file.
	int pin_num = 5;//		to			out			read		from
	vector<string> trans (10000, "swag") ;
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
				cout << "Correct. Here is a list of your last 10 transactions: ";
				for(int q=0; q<10; q++) {
					cout << trans.at(q) << '\n';
					
				}
				cout << endl;
			}
			break;
		}
	}
}


void Stats::info() {
	cout << "1. Total number of customers." << endl;
	cout << "2. Total amount of deposits." << endl;
	cout << "3. Average current balance." << endl;
	int swag=0;
	cin >> swag;

	switch(swag) {
		case 1:
			total_customers();
			break;
		case 2:
			total_money();
			break;
		case 3:
			average_money();
			break;
		default:
			cout << "Nope." << endl;
	}
}
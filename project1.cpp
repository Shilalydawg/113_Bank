/*************************************
Project #1 CSCE 113-502
Your Last Name(s), First Name(s)
Login name(s): your CS login ID are here
****************************************/
/* Other comments may start here.
You can briefly describe the project */
#include "accounts.h"
#include "money.h"
#include "stats.h"
using namespace std;

int main() { 
	cout << "This is your Piggy Bank. Welcome valued customer. \n"
		 << "Please select one of these operations.\n"
		 << "1. Open a new account.\n"
		 << "2. Close an existing account.\n"
		 << "3. Withdraw money (up to $500).\n"
		 << "4. Deposit money.\n"
		 << "5. Account balance.\n"
		 << "6. List the last 10 transactions.\n"
		 << "7. Statistical information.\n";
	int choice = 0;
	cin >> choice;
	
	Creation c;
	destroy d;
	Money m;
	Stats s;
	
	switch(choice) { 
		case 1: 
			c.new_account();
			break;
		case 2: 
			d.close_account();
			break;
		case 3: 
			m.withdr();
			break;
		case 4: 
			m.depst();
			break;
		case 5: 
			m.balance();
			break;
		case 6: 
			s.history();
			break;
		case 7: 
			s.info();
			break;
		case 0:
			cout << "Have a great day!\n\n";
			return 0;
		default:
			cout << "That is not an option." << endl;
			main();
	}
}
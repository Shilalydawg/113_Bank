#include "accounts.h"
#include "parent.h"

string Creation::get_date() {
	time_t whatTime = time(NULL);
	struct tm *aTime = localtime(&whatTime);
	
	int day = aTime->tm_mday;
	int month = aTime->tm_mon+1;
	int year = aTime->tm_year+1900;
	stringstream ss;
	string s_day, s_mon, s_year;
	
	ss << month << '/' << day << '/' << year;
	ss >> s_mon >> s_day >> s_year;
	date = s_mon + s_day + s_year;
	return date;
}
string Customer::get_name(){
	cout << "Enter your first and last name." << endl;
	cin  >> first >> last;
	size_t found = customer.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
		if (found!=string::npos) { 
		cout << customer[found] << " is not a legal character for a name." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		Customer::get_name();
	}
	found = last.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ");
	if (found!=string::npos) { 
		cout << last[found] << " is not a legal character for a name." << endl;
		cin.clear();
		cin.ignore(1000, '\n');
		Customer::get_name();
	}
	customer = first + ' ' + last;
	return customer;
}

int Creation::get_ID(){
	int acc_num=0;
	srand(time(NULL));
	acc_num = rand() % 999999 + 100000;
	return acc_num;
}

int Creation::get_pin() {
	int pin_num=0;
	srand(time(NULL));
	pin_num = rand() % 9999 + 1000;	
	return pin_num;
}

double Creation::get_balance() {
	double start_balance=0;
	cout << "You must first add at least $1000 to start your account. Enter how much you would like to add." << endl;
	cin >> start_balance;
	if (start_balance<1000) {
		cout << "You need to add more than $1000 to start an account." << endl;
		Creation::get_balance();
	}
	return start_balance;
}

void Creation::new_account() {
	Customer c;
	c.get_name();
	Creation::get_ID();
	Creation::get_pin();
	Creation::get_balance();
	Creation::get_date();
} 

void destroy::close_account() {
	cout << "“Are you sure you want to close your account?”" << endl;
	string answer;
	cin >> answer;
	if (answer=="yes") {}
}

ostream& operator<<(ostream& os, Creation& C) {
		os << "[ customer: " << C.get_name() << "\n  account: " << C.get_ID()
			<< "\n  PIN: " << C.get_pin() << "\n  balance: " << C.get_balance()
			<< "\n  transactions: { (" << C.get_date() << ' ' << C.get_balance() << ") }" << endl;
			ofstream fout("info.txt");
			fout << os << endl << "end";
		return os;
}
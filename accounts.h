
#ifndef _Accounts_
#define _Accounts_

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;//this struct has the function new account which gets all info about account then outputs those values

struct Customer {
public:
	string get_name();
private:
	string customer,first, last;
};

struct Creation {//this struct contains functions that could either be called the above function or the main
public:
	void new_account();
	string get_date();
	int get_ID();
	int get_pin();
	double get_balance();
	string get_name(){return cust.get_name();}
private:
	string date;
	int acc_num, pin_num;
	double balance;
	Customer cust;
};

struct destroy {
	void close_account();
};

struct Account {
public: 
	friend ostream& operator<<(ostream& os, Creation& C);
private:
};



#endif
#pragma once
#include <iostream>
#include "MyTypes.h"

using namespace std;

class Account
{
private:
	int accountNumber; //a
	int balance;       //b  
	int code;          //c
	static int sumWithdraw;
	static int sumDeposit;
public:

	Account(int a = 0, int b = 0, int c = 0);
	~Account();
	void setAccountNumber(int);
	void setBalance(int);
	void setCode(int);
	int getAccountNumber();
	int getBalance();
	int getCode();
	friend istream &operator >> (istream & incoming, Account &);
	
	static int getSumWithdraw();
	static int getSumDeposit();
};


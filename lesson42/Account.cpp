#include "Account.h"


int Account::sumDeposit = 0;
int Account::sumWithdraw = 0;

Account::Account(int a, int b , int c )
{
	accountNumber = a;
	balance = b;
	code = c;

}

Account::~Account()
{
}

void Account::setAccountNumber(int a)
{
	accountNumber = a;
}
void Account::setBalance(int b)
{
	balance = b;
}
void Account::setCode(int c)
{
	code = c;
}
int Account::getAccountNumber() {
	return accountNumber;
}
int Account::getBalance() {
	return balance;
}
int Account::getCode() {
	return code;
}


istream &operator >> (istream & incoming, Account & num) {
	int accountNumber, code;

	incoming >> accountNumber >> code;
	if (code < 1000) throw MyTypes::exception_strings[MyTypes::CODE_DIGIT];
	if (isExist(accountNumber)) throw MyTypes::exception_strings[MyTypes::NOT_UNIQ_ACCOUNT_NUMBER];
	num.balance = 0; 
	num.code = code;
	return incoming;
}

void Account::deposit(int am)
{
}

void Account::withdraw(int am)
{
}

int Account::getSumWithdraw() {
	return sumWithdraw;
}
int Account::getSumDeposit() {
	return sumDeposit;
}

bool isExist(int accuntNumber) {

	return false;
}
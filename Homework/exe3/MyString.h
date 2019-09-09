#pragma once
#include <iostream>
#include <string>
using namespace std;

class MyString
{
private:
	char * str;
	void setString(const char* s);
public:
	// constructor.
	MyString(const char* s = nullptr);
	MyString(const MyString & s);
	~MyString();

	// view function.
	char* getString() const;

	// modify function.
	MyString & operator =(const MyString &);

	// operators
	bool operator==(const MyString &) const;
	bool operator!=(const MyString &) const;
	bool operator<(const MyString &) const;
	bool operator<=(const MyString &) const;
	bool operator>(const MyString &) const;
	bool operator>=(const MyString &) const;
	MyString  operator+(const MyString &);
	MyString  operator* (int);
	int length() const;

	// print
	void print() const;

	friend ostream&  operator<<(ostream& os, const MyString& st);
	friend istream&  operator>>(istream& is,  MyString& st);
};

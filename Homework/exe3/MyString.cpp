#include "MyString.h"


MyString::MyString(const char* s)
{
	setString(s);
}
MyString::MyString(const MyString & s)
{
	setString(s.getString());
}

MyString::~MyString()
{
	if (str)
		delete[] str;
	str = nullptr;
}
char* MyString::getString() const
{
	return str;
}


void MyString::setString(const char * s)
{
	if (s)
	{
		int len = strlen(s) + 1;
		str = new char[len];
		strcpy_s(str, len, s);
	}
	else str = nullptr;
}

MyString & MyString::
operator=(const MyString & s)
{
	if (str)
		delete[] str;
	setString(s.getString());
	return *this;
}
MyString MyString::
operator+(const MyString & s)
{
	int sizeI = strlen(this->str);
	int sizeII = strlen(s.getString());
	char* temp = new char[sizeI + sizeII + 1];
	strcpy_s(temp, sizeI + 1, str);
	strcpy_s(temp + sizeI, sizeII + 1, s.getString());
	MyString x(temp);
	return x;
}

MyString MyString::operator*(const int num)
{
	char* temp;
	int len = strlen(str);
	temp = new char[len*num + 1];
	for (int i = 0; i < num; i++)
		strcpy_s(temp + i * len, len + 1, str);
	MyString s(temp);
	return s;
}

bool MyString::
operator==(const MyString & s) const
{
	return !strcmp(str, s.getString());
}

bool MyString::operator!=(const MyString & st) const
{
	return !(*this==st);
}

bool MyString::operator<(const MyString &s) const
{
	return (strcmp(str, s.getString())<0);
}

bool MyString::operator<=(const MyString &st) const
{
	return ((*this < st) || (*this == st));
}

bool MyString::operator>(const MyString &st) const
{
	return !(*this <= st);
}

bool MyString::operator>=(const MyString & st) const
{
	return !(*this < st);
}

int MyString::length() const
{
	return strlen(str);
}

void MyString::print() const
{
	if (str) cout << str << endl;
}

ostream&  operator<<(ostream& os, const MyString& st)
{
	os << st.getString() << " " << st.length();
	return os;
}

istream&  operator>>(istream& is, MyString& st)
{
	is >> st.str;
	return is;
}
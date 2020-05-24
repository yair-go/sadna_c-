#pragma once
#include <iostream>
#include <cstring >
#pragma warning(disable : 4996)

using namespace std;

class Document
{
private:
	char *name;  // Document name.
	void  setName(const char*);
	char t;
	char t1;

public:
	Document(const char* docName = nullptr);
	char* getName() { return name; }
	virtual void print();
};

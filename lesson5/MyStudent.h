#pragma once
#include <iostream>

using namespace std;
class MyStudent
{
private:
	int _id;
public:
	MyStudent(int id = 0);
	~MyStudent();
	//void setId(int id);
	int getId();
	void print();
};


#pragma once
#include "MyStudent.h"
class MyBaStudent :
	public MyStudent
{
private:
	int _grade;
public:
	MyBaStudent(int id = 0);
	~MyBaStudent();
	void setGrade(int);
	int getGrade();
};




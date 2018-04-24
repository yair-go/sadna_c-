#pragma once
#include "Student.h"
class BAStudent :
	public Student
{
private:
	int _grade;
public:
	BAStudent(int id=0);
	~BAStudent();
	void setGrade(int);
	int getGrade();
};


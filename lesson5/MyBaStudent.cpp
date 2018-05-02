#include "MyBaStudent.h"



MyBaStudent::MyBaStudent(int id) :MyStudent(id)
{
	
}

MyBaStudent::~MyBaStudent()
{
}

void MyBaStudent::setGrade(int grade)
{
	this->_grade = grade;
}
int MyBaStudent::getGrade() {
	return _grade;
}

void MyBaStudent::print()
{
	cout << "id : " << getId() << "Grade :"<<_grade<< endl;
}

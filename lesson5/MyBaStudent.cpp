#include "MyBaStudent.h"



MyBaStudent::MyBaStudent(int id) //:Student(id)
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
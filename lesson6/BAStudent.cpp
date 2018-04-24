#include "BAStudent.h"




BAStudent::BAStudent(int id):Student(id)
{
	
}

BAStudent::~BAStudent()
{
}

void BAStudent::setGrade(int grade)
{
	this->_grade=grade;
}
int BAStudent::getGrade() {
	return _grade;
}

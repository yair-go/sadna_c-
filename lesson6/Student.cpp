#include "Student.h"
#include <string>



Student::Student(int id)
{
	_id = id;
}


Student::~Student()
{
}
int Student::getId() {
	return _id;
}
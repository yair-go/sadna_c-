#include "MyStudent.h"
#include <string>



MyStudent::MyStudent(int id)
{
	_id = id;
}


MyStudent::~MyStudent()
{
}
int MyStudent::getId() 
{
	return _id;
}

void MyStudent::print()
{
	cout << "id : " << _id << endl;
}

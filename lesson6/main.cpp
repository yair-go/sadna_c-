#include "Student.h"
#include "BAStudent.h"
#include <iostream>

using namespace std;

void print(Student& s) {
	cout << s.getId();
}

int main()
{
	BAStudent s(123);
	s.setGrade(100);
	print(s);
}
#include "Student.h"
#include "BAStudent.h"
#include <iostream>

using namespace std;

void fun(BAStudent& t){
	
}

void print(Student& st) {
	cout << st.getId();
	fun(st);
}

int main()
{
	BAStudent s(123);
	s.setGrade(100);
	print(s);
	Student s2(111);
	print(s2);
}
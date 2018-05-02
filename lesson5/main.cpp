#include "MyStudent.h"
#include "MyBaStudent.h"
#include <iostream>

using namespace std;

void fun(MyBaStudent& t) {

}

void print(MyStudent& st) {
	cout << st.getId();
	//cout<<st.getGrade();

	//fun(st);
}

int main()
{
	MyBaStudent s(123);
	
	s.print();
	s.setGrade(100);
	print(s);
	MyStudent s2(111);
	//print(s2);
}
#include <iostream>
#include "Rect.h"

using namespace std;

int main()
{
	Rect R1;
	Rect R4(3, 5);
	Rect R2(3);
	Rect R3(R2);
	cout << R2.getArea();
	const int* a;
	a = new int(3);
	a++;
	//(*a)++
	int* const b = new int(4);
	(*b)++;
	//b++;
	return 0;
}
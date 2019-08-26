#include <iostream>
#include "Rational.h"

using namespace std;

int main()
{
	cout << "enter two rational numbers" << endl;
	Rational Ra, Rb(2,3);
	char s;
	
	if (Ra.equal(Rb))
	{
		cout << "equal\n";
	}
	else
	{
		cout << "different ";
		Ra.print();
		cout << " ";  
		Rb.print();
	}
	return 0;
}

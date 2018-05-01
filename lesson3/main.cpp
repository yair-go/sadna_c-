#include "Rational.h"
Rational operator+(const Rational& rat, int num);

int main() {
	Rational num1(1, 2), num2(1, 4), num3;
	Rational num4(num1);
	cout << "num1="; num1.print();
	cout << "num2="; num2.print();
	num3 = num1 + num2;
	cout << "num1+num2="; num3.print();
	Rational num5 = num1 + 3;
	cout << "num1 + 3= "; num5.print();
	cout <<"num5 = " << num5 <<"num4 = "<< num4;
	cin >> num4;
	cout << "num4 = " << num4;
	return 0;
}

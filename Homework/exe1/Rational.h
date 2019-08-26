#pragma once
#include <iostream>


using namespace std;

class Rational
{
	int mechane;
	int mone;

public:
	void setMone(int);
	void setMechane(int);

	Rational(int num1=1, int num2=1);
	~Rational();

	void print();
	bool equal(Rational);
};


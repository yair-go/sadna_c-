#include "Rational.h"


Rational Rational::reduce()
{
	Rational temp;
	return temp;
}

void Rational::setMone(int mone)
{
	this->mone = mone;
}

void Rational::setMechane(int mechane)
{
	if (mechane == 0) mechane = 1;
	this->mechane = mechane;
}

Rational::Rational(int num1, int num2):mechane(num2)
{
	this->mone = num1;

}


Rational::~Rational()
{
}

void Rational::print()
{ {cout << mone << '/' << mechane << '\n'; }
}

bool Rational::equal(Rational r)
{
	return false;
}

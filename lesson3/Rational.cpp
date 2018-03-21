#include "Rational.h"

Rational::~Rational()
{
	cout << "Dtor\n";
}

void Rational::operator *=(Rational num)
{
	setMone(mone*num.getMone());
	setMechane(mechane*num.getMechane());
}
Rational Rational::operator *(Rational num)
{
	Rational tmp;
	tmp.setMone(mone*num.getMone());
	tmp.setMechane(mechane*num.getMechane());
	return tmp;
}
 Rational Rational::operator +(const Rational& num) const
{
	Rational tmp;
	tmp.setMone(mone*num.getMechane() +
		num.getMone()*mechane);
	tmp.setMechane(mechane*num.getMechane());
	return tmp;
}
Rational & Rational::operator =(const Rational & num)
{
	mone = num.getMone();
	mechane = num.getMechane();
	return *this;
}
bool Rational::operator==(const Rational & num) const {
	return (mone == num.mone && mechane ==
		num.mechane);
}
Rational Rational::operator++() {
	mone += mechane;
	return *this;
}
Rational Rational::operator++(int u) {
	Rational temp = *this;
	mone += mechane;
	return temp;
}
Rational operator+(const Rational& rat, int num) {
	Rational tmp;

	tmp.setMone(rat.getMone() + num *rat.getMechane()); 	
	tmp.setMechane(rat.getMechane());
	return tmp;
}

ostream& operator<<(ostream& out, const Rational& num)
{
	return out<<  num.mone << '/' << num.mechane << endl;
}

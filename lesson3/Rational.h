#pragma once
#include <iostream>
using namespace std;
class Rational
{
private:
	int mone;
	int mechane;
public:
	//constructor
	Rational(int myMone = 1, int myMechane = 1)
		:mone(myMone), mechane(myMechane) {}
	Rational(const Rational& num)
		:mone(num.getMone()), mechane(num.getMechane()) {}
	//modify functions
	void setMone(int myMone) { mone = myMone; }
	void setMechane(int myMechane)
	{
		mechane = myMechane;
	}
	//view functions
	int getMone() const { return mone; }
	int getMechane() const { return mechane; }
	~Rational();
	//operations
	void operator*=(Rational);
	Rational operator*(Rational);
	Rational operator+(const Rational&) const;
	Rational operator-(Rational);
	Rational operator/(Rational);
	bool operator==(const Rational&) const;
	Rational& operator=(const Rational &);
	Rational Rational::operator++();
	Rational Rational::operator++(int);
	Rational Rational::operator--();
	Rational Rational::operator--(int);
	//output
	void print() const {
		cout << mone << '/' << mechane << endl;
	}
	friend ostream& operator<<(ostream& out, const Rational& num);
	friend istream& operator>>(istream& in,  Rational& num);
};

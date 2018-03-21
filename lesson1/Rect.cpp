#include "Rect.h"


int Rect::getArea() {
	return length*width;
}
void Rect::setLength(int a)
{
	length = a;
}
Rect::Rect(int a, int b)
{
	length = a;
	width = b;
}

Rect::Rect(const Rect& r)
{
	this->length = r.length;
	this->width = r.width;
	Rect(r.length, r.width);
}


Rect::~Rect()
{
}

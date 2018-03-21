#pragma once
#pragma once
class Rect
{
private:
	int length;
	int width;
public:
	int getArea();
	void setLength(int);
	Rect(int a = 0, int b = 0);
	Rect(const Rect&);

	~Rect();
};


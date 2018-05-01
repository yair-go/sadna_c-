#include<iostream>
#include <exception>

using namespace std;

int divi(int x, int y,int & kod)
{
	kod = 1;
	if (y!=0)
		return x / y;
	kod = 0;
	return 0;
}

int divi(int x, int y)
{
	//if (y == 0) throw 0;
	return x / y;
}

int main()
{
	int numerator = 10;
	int denominator;
	cin >> numerator>> denominator;
	
	try {
		int div = divi(numerator, denominator);
		cout << "if denominator == 0, this will not printed ";
	}
	/*catch (int a) {
		cout << " divide by zero\n";
	}*/
	catch (std::logic_error e) {
		cout << e.what();
	}
	catch (exception e) {
		cout << e.what();
	}
	return 0;
}
// P04 Operator.cpp
#include "pch.h"
#include <iostream>
using namespace std;

int main(){
	{
		int x = 3, y = 6, z = 10;
		cout << "3 * 6 is " << x * y << endl
			<< "6 / 3 is " << y / x << endl
			<< "10 % 3 is " << z % x << endl
			<< "10 / 3 is " << (float)z / x << endl;
	}

	{
		double x = 3, y = 6, z = 10;
		cout << "3 * 6 is " << x * y << endl
			<< "6 / 3 is " << y / x << endl
			// << "10 % 3 is " << z % x << endl
			<< "10 / 3 is " << (float)z / x << endl;
	}

	int remainder = 3 % 2;

	bool isEven = ( remainder == 0 ) ; 

	remainder = 4 % 2;

	bool isOdd = ( remainder == 1 ); 

	cout << isEven << endl;
	cout << isOdd << endl; 

	return 0;
} 
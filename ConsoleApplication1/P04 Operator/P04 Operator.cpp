﻿// P04 Operator.cpp
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

	return 0;
} 
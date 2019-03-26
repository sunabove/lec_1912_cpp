// P05 Control.cpp : 이 파일에는 'main' 함수가 포함됩니다.

#include "pch.h"
#include <iostream>

using namespace std;

int main() {
	// The counter variable can be declared in the init-expression.
	for (int i = 0; i < 2; i++) {
		cout << i;
	}
	// Output: 01
	// The counter variable can be declared outside the for loop.
	int i;
	for (i = 0; i < 2; i++) {
		cout << i;
	}
	// Output: 01
	int j;
	for (i = 5, j = 10; i + j < 20; i++, j++) {
		cout << "i + j = " << (i + j) << '\n';
	}

	// Output: 10 9 8 7 6 5 4 3 2 1
	for (int i = 10; i < 20; i = i + 2) {
		cout << i << ' ';
	}

	for (int i = 10; i > 0; i--) {
		cout << i << ' ';
	}
	// Output: 10 9 8 7 6 5 4 3 2 1
	for (int i = 10; i < 20; i = i + 2) {
		cout << i << ' ';
	}
	// Output: 10 12 14 16 18

	for (i = 0; i < 5; cout << i << '\n', i++) {
		;
	}

	i = 0;
	while (i < 2) {
		cout << i++;
	}
}
// P04 Function.cpp : 이 파일에는 'main' 함수가 포함됩니다.
#include "pch.h"
#include <iostream>

using namespace std; 

int sum(int a, int b); // 함수 선언

int main() { // 함수 정의
	int i = sum(10, 32); // 함수 호출
	int j = sum(i, 66);  // 함수 호출

	cout << "The value of j is " << j << endl; // 108

	return 0; 
} 

int sum(int a, int b) { // 함수 정의
	return a + b;
}
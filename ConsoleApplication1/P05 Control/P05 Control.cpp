// P05 Control.cpp : 이 파일에는 'main' 함수가 포함됩니다.

#include "pch.h"
#include <iostream>

using namespace std;

int main(){
	
	for (int i = 0; i < 2; i++){
		cout << i;
	}
	
	int i;
	for (i = 0; i < 2; i++){
		cout << i;
	}
	
	int j;
	for (i = 5, j = 10; i + j < 20; i++, j++){
		cout << "i + j = " << (i + j) << '\n';
	}

	for (int i = 10; i < 20; i = i + 2){
		cout << i << ' ';
	}

	for (int i = 10; i > 0; i--){
		cout << i << ' ';
	}
	
	for (int i = 10; i < 20; i = i + 2){
		cout << i << ' ';
	}
	
	for (i = 0; i < 5; cout << i << '\n', i++){
		;
	}

	i = 0;
	while (i < 2){
		cout << i++;
	}
	
	return 0;
}

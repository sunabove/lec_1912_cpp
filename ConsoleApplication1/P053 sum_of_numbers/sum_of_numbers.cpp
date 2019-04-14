// 수열의 합의 구하는 프로그램입니다.

#include <iostream>
using namespace std; 

int main(){
	double sum = 0;
	for (int d = 1; d <= 100; d++) {
		sum = sum + (1.0/d); 
	}

	cout << "sum = " << sum << endl ; 

	return 0; 
}


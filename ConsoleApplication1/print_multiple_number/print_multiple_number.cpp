// 배수를 출력하는 프로그램입니다.

#include <iostream>
using namespace std; 

int main() {
	for (int i = 1; i < 100; i++) {
		if (i % 3 == 0) {
			cout << i << ", ";
		}
	}
	cout << endl; 
}


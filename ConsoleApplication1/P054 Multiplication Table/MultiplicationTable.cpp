// 구구단 출력 프로그램입니다.

#include <iostream>

using namespace std;

int main(){

	for (int i = 2; i < 10; i++) {
		for (int k = 2; k < 10; k++) {
			cout << i << " x " << k << " = " << i * k << endl;
		}
		cout << endl; 
	}

	return 0;
}


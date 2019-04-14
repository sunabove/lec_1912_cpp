// 별표(*)를 출력하는 프로그램 입니다.

#include <iostream>
using namespace std; 

int main() {

	for (int i = 1; i <= 8; i++) {
		for (int k = 1; k < i; k++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}

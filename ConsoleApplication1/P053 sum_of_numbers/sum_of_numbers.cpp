// ������ ���� ���ϴ� ���α׷��Դϴ�.

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


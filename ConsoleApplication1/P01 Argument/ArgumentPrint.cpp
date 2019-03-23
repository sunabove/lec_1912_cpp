// 프로그램 실행 인자 출력 프로그램

#include "pch.h"
#include <iostream>

using namespace std;

int main(int argc, char ** argv){
	
	cout << "argc = " << argc << endl; 
	
	for(int i = 0 ; i < argc ; i++){
		cout << "argv[" << i << "] = " << argv[i] << endl;		
	}

	return 0;
}


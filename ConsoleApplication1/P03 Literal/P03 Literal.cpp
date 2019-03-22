// 리터럴
#include "pch.h"
#include <iostream>
#include <locale>

using namespace std;

int main(){
	// locale 설정. 한글 출력시 설정한다.
	wcout.imbue(std::locale("kor"));

    cout << "C++ Literal\n"; 

	bool b = true ; 
	b = false;
	b = 3; 

	cout << b << endl; 

	char c = 'A'; // 대문자 A , 65
	c = 65;
	c = 'a'; // 소문자 a, 97
	c = 97;
	c = '0'; // 십진수 0, 48
	c = 48;
	c = '\0'; // 0
	c = 0;

	cout << c << endl;

	wchar_t wc = L'가'; // 한글 '가'

	// 한글 출력 시에는 wcout 을 사용한다. 
	wcout << wc << endl; 

	const char * str = "Hello";
	cout << str << endl;

	const wchar_t * wstr = L"안녕하세요";
	// 한글 출력 시에는 wcout 을 사용한다. 
	wcout << wstr << endl;

}
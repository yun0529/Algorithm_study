// 0 -> 비트가 꺼져있다. 1 -> 비트가 켜져있다.
// boolean 배열로 이진수를 저장
//  
// shift 연산은 보통 1<< b 의 형태로만 사용된다.
//  
//
#include <bits/stdc++.h>
using namespace std;

int main() {

	int a = 9;
	int b = 8;
	cout << (a & b) << '\n'; // AND 연산 

	cout << (a << b) << '\n'; // shift 연산 

	return 0;
}
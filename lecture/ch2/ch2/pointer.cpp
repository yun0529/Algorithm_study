///*
//* c, c++의 경우 자바, 파이썬 처럼 가비지 컬럭터가 없음
//* 포인터는 메모리의 주소를 담는 타입이다.
//* 
//*/
//
//#include <iostream>
//using namespace std;
//
//int a = 4;
//double a2 = 4.4;
//int t[3] = { 1,2,3 };
//
//int main() {
//	int* p = &a;
//	double* p2 = &a2;
//
//	cout << p << "\n";
//	cout << p2 << "\n";
//
//	// int와 double 포인터의 크기가 같음 -> 운영체제가 64bit 이기 때문
//	// 주소 체계가 같기 때문
//	cout << sizeof(p) << "\n";
//	cout << sizeof(p2) << "\n";
//
//	string a3 = "max";
//	string* p3 = &a3;
//
//	cout << p3 << "\n";
//	cout << *p3 << "\n"; // 역참조
//
//	int* p4 = t;
//	cout << p4 << "\n";
//	cout << &t[0] << "\n";
//	cout << p4+1 << "\n";
//	cout << &t[1] << "\n";
//}

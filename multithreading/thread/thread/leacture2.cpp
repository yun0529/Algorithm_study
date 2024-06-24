// 쓰레드 유형
// 5가지 유형이 있음
// 일단 동시에 쓰레드를 여러개 실행할 때 어떤 것이 먼저 실행될지를 보장하지 않음

#include "bits/stdc++.h"
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

// 첫번째 형태
//void fun(int x) {
//	while (x-- > 0) {
//		cout << x << endl;
//	}
//}
//
// 첫 번째 형태 : 함수 포인터
//int main() { 
//
//	std::thread t1(fun, 11);
//	t1.join();
//
//	return 0;
//}

// 두 번째 형태 : 람다 함수
//int main() {
//
//	 auto fun = ;
//	std::thread t([](int x) { // 직접 내부에서 선언하고 사용할 수 있음
//		while (x-- > 0) {
//			cout << x << endl;
//		}
//		}, 11);
//	t.join();
//
//	return 0;
//}

//세 번째 형태 : Functor

//class Base {
//public:
//	void operator ()(int x) { // 호출 가능한 객체로 처리된다.
//		while (x-- > 0) {
//			cout << x << endl;
//		}
//	}
//};
//
//int main() {
//
//	std::thread t((Base()), 11);
//	t.join();
//
//	return 0;
//}

// 네 번째 형태 : Non-static 멤버 함수
//class Base {
//public:
//	void run(int x) { 
//		while (x-- > 0) {
//			cout << x << endl;
//		}
//	}
//};
//
//int main() {
//	Base b;
//	std::thread t(&Base::run, &b, 11); // 해당 함수의 주소 입력 후 객체의 주소 제공
//	t.join();
//
//	return 0;
//}

// 다섯 번째 형태 : static 멤버 함수
class Base {
public:
	static void run(int x) {
		while (x-- > 0) {
			cout << x << endl;
		}
	}
};

int main() {
	std::thread t(&Base::run, 11); // 호출하는 것에 객체가 필요하지 않음. 그냥 함수의 주소만 필요
	t.join();

	return 0;
}
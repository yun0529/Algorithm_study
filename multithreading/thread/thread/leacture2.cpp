// ������ ����
// 5���� ������ ����
// �ϴ� ���ÿ� �����带 ������ ������ �� � ���� ���� ��������� �������� ����

#include "bits/stdc++.h"
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

// ù��° ����
//void fun(int x) {
//	while (x-- > 0) {
//		cout << x << endl;
//	}
//}
//
// ù ��° ���� : �Լ� ������
//int main() { 
//
//	std::thread t1(fun, 11);
//	t1.join();
//
//	return 0;
//}

// �� ��° ���� : ���� �Լ�
//int main() {
//
//	 auto fun = ;
//	std::thread t([](int x) { // ���� ���ο��� �����ϰ� ����� �� ����
//		while (x-- > 0) {
//			cout << x << endl;
//		}
//		}, 11);
//	t.join();
//
//	return 0;
//}

//�� ��° ���� : Functor

//class Base {
//public:
//	void operator ()(int x) { // ȣ�� ������ ��ü�� ó���ȴ�.
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

// �� ��° ���� : Non-static ��� �Լ�
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
//	std::thread t(&Base::run, &b, 11); // �ش� �Լ��� �ּ� �Է� �� ��ü�� �ּ� ����
//	t.join();
//
//	return 0;
//}

// �ټ� ��° ���� : static ��� �Լ�
class Base {
public:
	static void run(int x) {
		while (x-- > 0) {
			cout << x << endl;
		}
	}
};

int main() {
	std::thread t(&Base::run, 11); // ȣ���ϴ� �Ϳ� ��ü�� �ʿ����� ����. �׳� �Լ��� �ּҸ� �ʿ�
	t.join();

	return 0;
}
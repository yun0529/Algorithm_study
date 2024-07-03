// 
// mutex Ŭ������ try_lock���� �ٸ�
// std::try_lock(m1, m2, m3...., mn) ���� ����� 
// -> ���� ��ü�� ��� �� ����
// 5���� ���ؽ��� ���� �� m1.try ~ / m2. try ~ �̷��� ���� �ѹ��� ����
// 
// std::try_lock() �Լ��� ���޵� ��� �� ���� ��ü���� ������ ������� �ϳ��� ��׷��� �õ��մϴ�.
// Syntax: std::try_lock(m1, m2, m3, m4, ..., mn);
// �� �Լ��� �����ϸ� - 1�� ��ȯ�ϰ�, �׷��� ������ ��� �� ������ 0���� �����ϴ� ���ؽ� �ε��� ��ȣ�� ��ȯ�մϴ�.
// -> m3�� �����ϸ� 2�� ��ȯ�ȴ�. m1, m2, m3 ~ �� 0, 1, 2 �̼����� ������.
// ���� � ���ؽ��� ����� ���ϸ�, ������ ��� ��� ���ؽ��� ����� �����մϴ�.
// try_lock ȣ�� �� ���ܰ� �߻��ϸ�, ��߻��ϱ� ���� ��� ��� ��ü�� ����� �����մϴ�.
// -> �� ���� ������ t1, t2�� ���� t1.x, t2.y�� ���� t3�� x, y�� ������ ��� 0���� ������
// -> 
// 

#include "bits/stdc++.h"
#include <mutex> // ���� �߰� �ʿ�
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

int X = 0, Y = 0;
std::mutex m1, m2;

void doSomeWorkForSeconds(int seconds) { 
	std::this_thread::sleep_for(std::chrono::seconds(seconds)); // seconds ��ŭ ���
}

void incrementXY(int& XorY, std::mutex& m, const char* desc) { // m�� m1 or m2�� ó����
	for (int i = 0; i < 5; ++i) {
		m.lock();
		++XorY;
		cout << desc << XorY << '\n';
		m.unlock();
		doSomeWorkForSeconds(1);

	}
}

void consumeXY() {
	int useCount = 5;
	int XplusY = 0;
	while (1) {
		int lockResult = std::try_lock(m1, m2); // m1, m2 lock �õ���
		if (lockResult == -1) { // 2�� ��� lock�� ������ ���(�����ϸ� ��� �ݺ�)
			if (X != 0 && Y != 0) {
				--useCount;
				XplusY += X + Y;
				X = 0;
				Y = 0;
				cout << "XplusY " << XplusY << '\n';
			}
			m1.unlock();
			m2.unlock(); // ������ �� �ϱ�
			if (useCount == 0) break; // 5�� �����ϸ� break

		}

	}

}

int main() {
	// std::ref(X)�� ��ü�� ������ ����.
	std::thread t1(incrementXY, std::ref(X), std::ref(m1), "X ");
	std::thread t2(incrementXY, std::ref(Y), std::ref(m2), "Y ");
	std::thread t3(consumeXY);

	t1.join();
	t2.join();
	t3.join();
	return 0;
}
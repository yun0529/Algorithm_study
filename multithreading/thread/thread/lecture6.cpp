// 
// mutex 클래스의 try_lock과는 다름
// std::try_lock(m1, m2, m3...., mn) 으로 사용함 
// -> 여러 객체를 잠글 수 있음
// 5개의 뮤텍스가 있을 때 m1.try ~ / m2. try ~ 이렇게 말고 한번에 가능
// 
// std::try_lock() 함수는 전달된 모든 락 가능 객체들을 지정된 순서대로 하나씩 잠그려고 시도합니다.
// Syntax: std::try_lock(m1, m2, m3, m4, ..., mn);
// 이 함수가 성공하면 - 1을 반환하고, 그렇지 않으면 잠글 수 없었던 0부터 시작하는 뮤텍스 인덱스 번호를 반환합니다.
// -> m3가 실패하면 2가 반환된다. m1, m2, m3 ~ 는 0, 1, 2 이순으로 시작함.
// 만약 어떤 뮤텍스를 잠그지 못하면, 이전에 잠근 모든 뮤텍스의 잠금을 해제합니다.
// try_lock 호출 중 예외가 발생하면, 재발생하기 전에 잠근 모든 객체의 잠금을 해제합니다.
// -> 두 개의 스레드 t1, t2가 있음 t1.x, t2.y가 있음 t3는 x, y를 받으면 모두 0으로 변경함
// -> 
// 

#include "bits/stdc++.h"
#include <mutex> // 따로 추가 필요
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

int X = 0, Y = 0;
std::mutex m1, m2;

void doSomeWorkForSeconds(int seconds) { 
	std::this_thread::sleep_for(std::chrono::seconds(seconds)); // seconds 만큼 대기
}

void incrementXY(int& XorY, std::mutex& m, const char* desc) { // m은 m1 or m2로 처리됨
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
		int lockResult = std::try_lock(m1, m2); // m1, m2 lock 시도함
		if (lockResult == -1) { // 2개 모두 lock에 성공한 경우(실패하면 계속 반복)
			if (X != 0 && Y != 0) {
				--useCount;
				XplusY += X + Y;
				X = 0;
				Y = 0;
				cout << "XplusY " << XplusY << '\n';
			}
			m1.unlock();
			m2.unlock(); // 해제는 꼭 하기
			if (useCount == 0) break; // 5번 성공하면 break

		}

	}

}

int main() {
	// std::ref(X)는 객체를 참조로 전달.
	std::thread t1(incrementXY, std::ref(X), std::ref(m1), "X ");
	std::thread t2(incrementXY, std::ref(Y), std::ref(m2), "Y ");
	std::thread t3(consumeXY);

	t1.join();
	t2.join();
	t3.join();
	return 0;
}
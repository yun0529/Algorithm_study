// mutex, race condition
// mutex : Mutual Exclusion (전체 상호 배제)
// : 하나가 먼저 액세스하면 다른 것은 그 다음에 액세스할 수 있도록 하는 것.
// race condition은 서로 다른 쓰레드들이 동일한 자원을 사용할 때 발생하는 문제
// : 접근만 하는 것은 상관 없지만 수정을 하게 된다면 발생한다.
// load -> increment -> store 순서로 진행
// t1, t2가 모두 0을 load 하면 각각 increment를 해도 1이 되고 저장된다.

#include "bits/stdc++.h"
#include <mutex> // 따로 추가 필요
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

int myAmount = 0;
std::mutex m; // 모든 스레드에서 공통적인 뮤텍스 변수 사용해야함.

void addMoney() {
	m.lock();
	cout << this_thread::get_id() << endl;
	++myAmount; // 여거서 race condition 발생
	m.unlock();
}

int main() {

	std::thread t1(addMoney);
	std::thread t2(addMoney);

	t1.join();
	t2.join();

	cout << myAmount << endl;

	return 0;
}
// mutex::try_lock() : 뮤택스 클래스의 멤버 함수
// 
// 1. std::try_lock
// 2. std::mutex::try_lock
// 3. std::shared_lock::try_lock
// 4. std::timed_mutex::try_lock
// 5. std::unique_lock::try_lock
// 6. std::shared_mutex::try_lock
// 7. std::recursive_mutex::try_lock
// 8. std::shared_time_mutex::try_lock
// 9. std::recursive_time_mutex::try_lock
// 
// 이렇게 많지만 1, 2번만 할거임
// 
// 


#include "bits/stdc++.h"
#include <mutex> // 따로 추가 필요
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

int counter = 0;
std::mutex mtx;

void increaseTheCounterFor100000Time() {
	for (int i = 0; i < 100000; i++) {
		if (mtx.try_lock()) { // 뮤텍스를 잠글 수 없으면 다시 돌아와서 false를 반환
			// 그냥 lock을 사용할 경우 다른 스레드가 이미 lock을 얻었다면 계속해서 기다리게 된다.
			// 하지만 try_lock은 잠글 수 없으면 다시 돌아온다. (잠그면 true 반환) => 따라서 non-blocking 이라고 함
			// 같은 뮤택스나 스레드에서 이중 try_lock은 허용되지 않는다. -> 동일 스레드에서 동일 뮤텍스를 잠글려고 하면 deadlock이 발생
			// 그래도 특정 뮤택스르 한번 더 잠그로 싶으면 recursive_mutex 사용
			++counter; // locking이 cpu에 의존하기 때문에 결과가 다를 수 있음.
			// 실행 후 스레드가 바빠 lock이 해제되지 않으면 다른 스레드가 잠금을 얻지 못함.
			mtx.unlock();
		}
		// 아래처럼 하면 잘 나옴.(다른 스레드가 잠금이 풀리는 것을 건너뛰지 않고 대기하기 때문)
		//mtx.lock();
		//++counter;
		//mtx.unlock();
	}
}

int main() {

	std::thread t1(increaseTheCounterFor100000Time); 
	std::thread t2(increaseTheCounterFor100000Time); // 2개의 스레드가 하나의 전역 변수에 접근하려 함.

	t1.join();
	t2.join();

	cout << " counter could increase upto  : " << counter << endl;

	return 0;
}
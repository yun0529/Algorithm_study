// mutex::try_lock() : ���ý� Ŭ������ ��� �Լ�
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
// �̷��� ������ 1, 2���� �Ұ���
// 
// 


#include "bits/stdc++.h"
#include <mutex> // ���� �߰� �ʿ�
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

int counter = 0;
std::mutex mtx;

void increaseTheCounterFor100000Time() {
	for (int i = 0; i < 100000; i++) {
		if (mtx.try_lock()) { // ���ؽ��� ��� �� ������ �ٽ� ���ƿͼ� false�� ��ȯ
			// �׳� lock�� ����� ��� �ٸ� �����尡 �̹� lock�� ����ٸ� ����ؼ� ��ٸ��� �ȴ�.
			// ������ try_lock�� ��� �� ������ �ٽ� ���ƿ´�. (��׸� true ��ȯ) => ���� non-blocking �̶�� ��
			// ���� ���ý��� �����忡�� ���� try_lock�� ������ �ʴ´�. -> ���� �����忡�� ���� ���ؽ��� ��۷��� �ϸ� deadlock�� �߻�
			// �׷��� Ư�� ���ý��� �ѹ� �� ��׷� ������ recursive_mutex ���
			++counter; // locking�� cpu�� �����ϱ� ������ ����� �ٸ� �� ����.
			// ���� �� �����尡 �ٺ� lock�� �������� ������ �ٸ� �����尡 ����� ���� ����.
			mtx.unlock();
		}
		// �Ʒ�ó�� �ϸ� �� ����.(�ٸ� �����尡 ����� Ǯ���� ���� �ǳʶ��� �ʰ� ����ϱ� ����)
		//mtx.lock();
		//++counter;
		//mtx.unlock();
	}
}

int main() {

	std::thread t1(increaseTheCounterFor100000Time); 
	std::thread t2(increaseTheCounterFor100000Time); // 2���� �����尡 �ϳ��� ���� ������ �����Ϸ� ��.

	t1.join();
	t2.join();

	cout << " counter could increase upto  : " << counter << endl;

	return 0;
}
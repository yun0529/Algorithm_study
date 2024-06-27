// mutex, race condition
// mutex : Mutual Exclusion (��ü ��ȣ ����)
// : �ϳ��� ���� �׼����ϸ� �ٸ� ���� �� ������ �׼����� �� �ֵ��� �ϴ� ��.
// race condition�� ���� �ٸ� ��������� ������ �ڿ��� ����� �� �߻��ϴ� ����
// : ���ٸ� �ϴ� ���� ��� ������ ������ �ϰ� �ȴٸ� �߻��Ѵ�.
// load -> increment -> store ������ ����
// t1, t2�� ��� 0�� load �ϸ� ���� increment�� �ص� 1�� �ǰ� ����ȴ�.

#include "bits/stdc++.h"
#include <mutex> // ���� �߰� �ʿ�
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

int myAmount = 0;
std::mutex m; // ��� �����忡�� �������� ���ؽ� ���� ����ؾ���.

void addMoney() {
	m.lock();
	cout << this_thread::get_id() << endl;
	++myAmount; // ���ż� race condition �߻�
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
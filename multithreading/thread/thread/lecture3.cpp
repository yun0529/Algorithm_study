//// join, detach, joinable
//// �����尡 ���۵Ǹ� join�� ȣ���Ͽ� �ش� �����尡 �Ϸ�� ������ ��ٸ���.
//// join�̳� detach�� ������ ��ü���� ȣ��Ǿ�� �Ѵ�. �ƴϸ� 
//// �ƴϸ� ������ ��ü �Ҹ��� �����߿� ȣ��Ǿ�� �Ѵ�.
//// �Ҹ��ڿ��� joinable Ȯ���ϰ� ���α׷� �����Ѵ�.
//
//#include "bits/stdc++.h"
//#include <chrono>
//#include <thread>
//
//using namespace std;
//using namespace std::chrono;
//typedef unsigned long long ull;
//
//void run(int count) {
//	while (count-- > 0)
//		cout << count << " Cpp" << endl;
//
//	std::this_thread::sleep_for(chrono::seconds(3)); // 3�ʰ� ���
//	cout << "thread finish" << endl;
//}
//
//int main() {
//
//	std::thread t1(run, 10);
//	cout << "main()" << endl;
//	//t1.join();
//	// ���� �� ���� ����ϱ� ������ 10�� �ݺ� �� 3�� �Ŀ� �Ʒ��� ��� ����
//	//if (t1.joinable()) { // �׻� join �������� Ȯ���ϴ� ���� ����
//	//	t1.join(); // join 2���� ������ ����. (�̹� ���� �� ���� ������̱� ����)
//	//}
//	
//	//detach
//	t1.detach(); // �������� �����尡 �Ϸ�ɶ����� ��ٸ��� ����
//	
//	if(t1.joinable()) // join�� �����ϴٸ� �и��� �����ϴٴ� ��
//		t1.detach(); // �и��� 2�� �Ұ�����.
//	
//	cout << "main() after" << endl;
//	// main thread ������̱� ������ �ٸ� ������� ��� �����.
//	std::this_thread::sleep_for(chrono::seconds(3)); 
//	// OS�� �����带 �����Ű�� �ð��� ���� ����
//
//	return 0;
//}
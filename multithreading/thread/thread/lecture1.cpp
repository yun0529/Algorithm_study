//// c++ 11 �̻���� ����
//// ��� ���α׷��� main �����带 �����. ������ ������ ���� ������ ���ο��� ����.
//// ������� �淮 ���μ������ �� �� ����.
//
//#include <bits/stdc++.h>
//#include <chrono>
//#include <thread>
//using namespace std;
//using namespace std::chrono;
//typedef unsigned long long ull;
//
//ull OddSum = 0;
//ull EvenSum = 0;
//
//void findEven(ull start, ull end) {
//	for (ull i = start; i <= end; ++i) {
//		if ((i & 1) == 0) { // ¦
//			EvenSum += i;
//		}
//	}
//}
//void findOdd(ull start, ull end) {
//	for (ull i = start; i <= end; ++i) {
//		if ((i & 1) == 1) { // Ȧ
//			OddSum += i;
//		}
//	}
//}
//
//int main() { // ���������� �׷��� ū ���̴� ���� ����. (2.9�� -> 2.5��)
//
//	ull start = 0, end = 1900000000;
//
//	auto startTime = high_resolution_clock::now();
//
//	std::thread t1(findEven, start, end); // ������ ���� : ������� ȣ�� ������ ��ü�� �ʿ� (�Լ� ������, ����)
//	std::thread t2(findOdd, start, end); // t1 ������ѳ� ���ƿͼ� t2 ������.
//
//	t1.join(); // join�� �ؾ� �����尡 �۵����̸� ���� �����尡 ������� ����. -> ���� ������� ����.
//	t2.join();
//
//
//	//findOdd(start, end); // ���� ���� �� ����� ��
//	//findEven(start, end); // �Ʒ��� �Լ� ����� => �ϳ��� �������� ���
//
//	auto stopTime = high_resolution_clock::now();
//	auto duration = duration_cast<microseconds>(stopTime - startTime);
//
//	cout << "OddSum : " << OddSum << endl;
//	cout << "EvenSum : " << EvenSum << endl;
//	cout << "Sec: " << duration.count() / 1000000.0 << endl;
//
//	return 0;
//}
//// c++ 11 이상부터 지원
//// 모든 프로그램이 main 쓰레드를 사용함. 쓰레드 생성도 메인 쓰레드 내부에서 생성.
//// 쓰레드는 경량 프로세스라고 볼 수 있음.
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
//		if ((i & 1) == 0) { // 짝
//			EvenSum += i;
//		}
//	}
//}
//void findOdd(ull start, ull end) {
//	for (ull i = start; i <= end; ++i) {
//		if ((i & 1) == 1) { // 홀
//			OddSum += i;
//		}
//	}
//}
//
//int main() { // 아직까지는 그렇게 큰 차이는 나지 않음. (2.9초 -> 2.5초)
//
//	ull start = 0, end = 1900000000;
//
//	auto startTime = high_resolution_clock::now();
//
//	std::thread t1(findEven, start, end); // 스레드 생성 : 스레드는 호출 가능한 객체가 필요 (함수 포인터, 인자)
//	std::thread t2(findOdd, start, end); // t1 실행시켜놓 돌아와서 t2 실행함.
//
//	t1.join(); // join을 해야 스레드가 작동중이면 메인 스레드가 종료되지 않음. -> 메인 스레드와 결합.
//	t2.join();
//
//
//	//findOdd(start, end); // 먼저 실행 후 종료된 후
//	//findEven(start, end); // 아래의 함수 실행됨 => 하나의 스레드인 경우
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
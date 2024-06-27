//// join, detach, joinable
//// 스레드가 시작되면 join을 호출하여 해당 스레드가 완료될 때까지 기다린다.
//// join이나 detach는 스레드 객체에서 호출되어야 한다. 아니면 
//// 아니면 스레드 객체 소멸자 실행중에 호출되어야 한다.
//// 소멸자에서 joinable 확인하고 프로그램 종료한다.
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
//	std::this_thread::sleep_for(chrono::seconds(3)); // 3초간 대기
//	cout << "thread finish" << endl;
//}
//
//int main() {
//
//	std::thread t1(run, 10);
//	cout << "main()" << endl;
//	//t1.join();
//	// 끝날 때 까지 대기하기 때문에 10번 반복 후 3초 후에 아래의 출력 실행
//	//if (t1.joinable()) { // 항상 join 가능한지 확인하는 것이 좋음
//	//	t1.join(); // join 2번은 허용되지 않음. (이미 끝날 때 까지 대기중이기 때문)
//	//}
//	
//	//detach
//	t1.detach(); // 실행중인 스레드가 완료될때까지 기다리지 않음
//	
//	if(t1.joinable()) // join이 가능하다면 분리도 가능하다는 것
//		t1.detach(); // 분리도 2번 불가능함.
//	
//	cout << "main() after" << endl;
//	// main thread 대기중이기 때문에 다른 스레드는 계속 실행됨.
//	std::this_thread::sleep_for(chrono::seconds(3)); 
//	// OS가 스레드를 실행시키는 시간이 조금 느림
//
//	return 0;
//}
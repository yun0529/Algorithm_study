//#include "bits/stdc++.h" => iostream, vector, algorithm 등... 필요한거 거의 다 포함하는 헤더 visual studio 에서는 지원 안해서 다운받아서 넣음
#include <iostream>
using namespace std;
/*
- Cycle이 있다면 사용하면 안됨 (ex. f(a) -> f(b) -> f(a))
- 반복문으로 가능하다면 반복문을 사용하는 것이 좋음 
- 특정 상황에서는 재귀가 좋지만 기본적으로 함수 호출이 많기 때문에 반복문이 더 빠름
- 점화식을 코드로 작성하는 것
- 디버깅으로 의도한대로 함수 호출이 이루어지는지 확인하면 좋음
*/

int fact_rec(int n) {
	// 기저사례
	// 종료 시켜야 하는지 빠르게 판단하고 종료시킨다. -> 무한재귀방지
	// 논리적 흐름에 따라 결국 1 또는 0으로 최소가 되기 때문에 종료시키는 코드가 필요
	if (n == 1 || n == 0)return 1;
	return n * fact_rec(n - 1);
}

int fact_for(int n) {
	int ret = 1;
	for (int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}

//int n = 5;
//int main() {
//	cout << fact_for(n) << "\n";
//	cout << fact_rec(n) << "\n";
//
//	return 0;
//}
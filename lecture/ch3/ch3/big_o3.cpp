//#include <bits/stdc++.h>
//using namespace std;
//
//int N, cnt = 0;
//void solve(int N) { // 등비수열 생각하고 함수 2번 호출 -> 2^n, 3번 호출 -> 3^n
//	cnt++;
//	cout << cnt << '\n'; // main logic
//	if (N == 0)return;
//	for (int i = 0; i < 3; i++) {
//		solve(N - 1);
//	}
//	return;
//}
//
//
//int main() {
//	cin >> N;
//	solve(N);
//
//	return 0;
//}
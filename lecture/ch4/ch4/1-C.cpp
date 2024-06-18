//// 백준 2979
//// 트럭 주차 문제 -> 특정 구간에 트럭이 몇대인지 구하는 문제
//// 1대 : A 요금, 2대 : B 요금, 3대 : C 요금
//// 카운팅 배열이 생각나야 한다. -> 트럭의 위치에 카운팅
//// 시각은 이상 미만으로 한다.
//#include <bits/stdc++.h>
//using namespace std;
//
//int A, B, C, a, b, cnt[104], ret;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> A >> B >> C;
//
//	for (int i = 0; i < 3; i++) {
//		cin >> a >> b;
//		for (int j = a; j < b; j++) { // 이상 미만
//			cnt[j]++;
//		}
//	}
//	for (int j = 0; j < 100; j++) {
//		if (cnt[j]) {
//			if (cnt[j] == 1)ret += A;
//			else if (cnt[j] == 2)ret += B * 2;
//			else if (cnt[j] == 3)ret += C * 3;
//		}
//	}
//	cout << ret << '\n';
//
//	return 0;
//}
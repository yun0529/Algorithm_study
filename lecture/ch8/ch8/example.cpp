//#include <bits/stdc++.h>
//using namespace std;
//
//const int n = 4;
//string a[4] = { "사과", "딸기", "포도", "배" };
//
//void go(int num) {
//	string ret = "";
//	for (int i = 0; i < 4; i++) {
//		// 켜져있는 비트의 과일 저장
//		if (num & (1 << i)) ret += a[i] + " ";
//	}
//	cout << ret << '\n';
//	return;
//}
//
//int main() {
//
//	//string a[n] = { "사과", "딸기", "포도", "배" };
//	//for (int i = 0; i < (1 << n); i++) {
//	//	string ret = "";
//	//	for (int j = 0; j < n; j++) {
//	//		if (i & (1 << j)) {
//	//			ret += (a[j] + " ");
//	//		}
//	//	}
//	//	cout << ret << '\n';
//	//}
//
//	for (int i = 1; i < n; i++) {
//		// 사과 (1)을 포함하면서 다른 배열 idx 켜기
//		go(1 | (1 << i)); 
//	}
//
//	return 0;
//}
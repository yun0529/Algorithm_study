//#include <iostream>
//#include <vector>
//#include<tuple>
//using namespace std;
//
//char c[104];
//string str, ret = "";
//int arr[27];
//
//pair<char, int> srr[101];
//
//void printCur() {
//	for (int i = 0; i < str.length(); i++) {
//		if (srr[i].second != 0) cout << srr[i].first;
//	}
//	cout << '\n';
//
//	return;
//}
//void go(int start, int end) {
//	// 가장 작은 인덱스 찾기
//	int idx = start;
//	for (int i = start; i <= end; i++) {
//		if (srr[i].first < srr[idx].first) idx = i;
//	}
//	srr[idx].second = 1;
//	printCur();
//	// 인덱스 뒤로 위치할 것들 먼저 -> 사전순 하기 위함.
//	if (idx + 1 <= end) go(idx + 1, end);
//	// 인덱스 앞에 위치할 것들
//	if (start <= idx - 1) go(start, idx - 1);
//
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> str;
//	for (int i = 0; i < str.length(); i++) {
//		srr[i] = make_pair( str[i], 0 );
//	}
//	go(0, str.length() - 1);
//
//	
//	return 0;
//}
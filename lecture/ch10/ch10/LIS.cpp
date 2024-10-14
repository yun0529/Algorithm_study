//// 최대 증가 부분 수열
//// 10 20 10 30 20 50
//// -> 증가하는 부분수열 중 최대로 긴 부분 수열 (10 20 30 50)
//// 
//// 
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, a[1001], cnt[1001], ret;
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		int maxValue = 0;
//		for (int j = 0; j < i; j++) {
//			// 끝점을 찾아야함. 10 20 10 30 ... 
//			// 30이 기준일 때 maxValue는 0 10 20 30 순으로 증가함
//			if (a[j] < a[i] && maxValue < cnt[j]) { // 이전 값이 나보다 작고
//				// maxValue가 해당 숫자의 cnt 보다 작아야 함 -> 이전 값들중 가장 긴 최대 증가 부분 수열 뒤에 붙어야 함.
//				maxValue = cnt[j];
//				cout << maxValue << " , ";
//			}
//		}
//		cnt[i] = maxValue + 1; // 이전 maxValue에서 자기까지 해서 더함
//		ret = max(ret, cnt[i]);
//		cout << '\n';
//	}
//	cout << ret;
//}}
//#include <bits/stdc++.h>
//using namespace std;
//// O(1) : 상수 시간 시간복잡도
////int n,cnt = 0;
//
//// => O(n + m) 이다. 
//// N^2 + N + M^2 + M => O(N^2 + M^2)
//int solve(int n, int m) { 
//	for (int i = 0; i < n; i++) {
//
//	}
//	for (int j = 0; j < m; j++) {
//
//	}
//	return 0;
//}
//
//int n, a[1004], cnt;
//int go(int l, int r) { // 재귀 트리 그려보고 디버깅하면서 시간복잡도 측정 -> 2n -1 -> O(n)
//	cnt++;
//	if (l == r) return a[l];
//	int mid = (l + r) / 2;
//	int sum = go(l, mid) + go(mid + 1, r);
//
//	return sum;
//}
//
//int main() {
//
//	//cin >> n;
//	//int a = 0;
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < i; j++) { // (n^2 - n)/2 => O(n^2)
//	//		a += i + j;
//	//		cnt++;
//	//	}
//	//}
//	//cout << a << '\n';
//	//cout << " cnt : " << cnt << '\n';
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		a[i - 1] = i;
//	}
//	int sum = go(0, n - 1);
//	cout << sum << '\n';
//	cout << "cnt : " << cnt <<'\n';
//
//	return 0;
//}
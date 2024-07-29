//#include<bits/stdc++.h>
//using namespace std;
//int n, temp, ret, cnt;
//vector<int> v;
//const int mod = 11;
//
//void go(int idx, int sum) {
//	// 완전탐색 & 가지치기 -> 불필요한 탐색을 피함
//	// 최대가 10이기 때문에 10보다 큰 수가 나올 수 없음.
//	if (ret == 10)return;
//	if (idx == n) {
//		ret = max(ret, sum % mod);
//		cnt++;
//		return;
//	} 
//	go(idx + 1, sum + v[idx]);
//	go(idx + 1, sum);
//}
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> temp;
//		v.push_back(temp);
//	}
//	go(0, 0);
//	cout << ret << "\n";
//	cout << cnt << "\n";
//	return 0;
//}
//
//
//

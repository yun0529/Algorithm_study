//// 백준 2309 문제
//#include <bits/stdc++.h>
//using namespace std;
//
//// 9개 중에 순서 상관없이 7개를 뽑는다 9C7 의 합이 100이다.
//// 순서 상관있게 뽑아도 되기 때문에 9P7도 가능함.
//int a[9];
//int sum;
//pair<int, int> ret;
//vector<int> v;
//void solve(); // 조합 사용해서 뽑는법
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	for (int i = 0; i < 9; i++) {
//		cin >> a[i];
//	}
//
//
//	// 9C7을 뽑는 법 (9C2와 동일) -> 7명의 합이 100이여야함. 이때 나머지 두명 A, B가 있음. 
//	// 따라서 전체합 -A-B를 하거나 7개의 합 = 100 인거나 같음
//	solve();
//	for (int i = 0; i < 9; i++) {
//		if (ret.first == i || ret.second == i)continue; // ret에 걸리는 애들이 있으면 걸러냄
//		v.push_back(a[i]);
//	}
//	sort(v.begin(), v.end());
//	for (int i : v)cout << i << " ";
//
//	return 0;
//}
//
//void solve() {
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < i; j++) {
//			if (sum - a[i] - a[j] == 100) {
//				ret = {i,j}; // 가짜 2명을 뽑아서 집어넣음
//				return;
//			}
//		}
//	}
//}
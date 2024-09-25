//#include <bits/stdc++.h>
//using namespace std;
//
//int n,ret, e;
//vector<pair<int, int>> v;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back({ b,a });
//	}
//	sort(v.begin(), v.end());
//
//	for (pair<int, int> p : v) {
//		if (p.second >= e) {
//			ret++;
//			e = p.first;
//		}
//	}
//	cout << ret;
//
//	return 0;
//}
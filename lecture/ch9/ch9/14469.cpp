//#include <bits/stdc++.h>
//using namespace std;
//
//int n,ret;
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
//		v.push_back({ a,b });
//	}
//	sort(v.begin(), v.end());
//
//	for (pair<int, int> p : v) {
//		if (ret <= p.first) {
//			ret = p.first + p.second;
//		}
//		else {
//			ret += p.second;
//		}
//		
//	}
//	cout << ret;
//	return 0;
//}
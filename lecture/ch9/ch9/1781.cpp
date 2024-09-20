//#include <bits/stdc++.h>
//using namespace std;
//
//int n,ret;
//vector<pair<int, int>> v;
//
//priority_queue<int, vector<int>, greater<int>> pq;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		int a, b;
//		cin >> a>> b;
//		v.push_back({a , b});
//	}
//	sort(v.begin(), v.end());
//
//	for (pair<int, int> p : v) {
//		pq.push(p.second);
//		if (pq.size() > p.first) {
//			pq.pop();
//		}
//	}
//	int cnt = pq.size();
//	for (int i = 0; i < cnt;i++) {
//		ret += pq.top();
//		pq.pop();
//	}
//	cout << ret;
//	return 0;
//}
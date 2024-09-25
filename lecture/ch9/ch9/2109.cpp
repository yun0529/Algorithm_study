//#include <bits/stdc++.h>
//using namespace std;
//int n, cnt = 0, ret = 0;
//vector<pair<int, int>> v;
//
//bool comp(pair<int,int> a, pair<int, int> b) {
//	if (a.first == b.first) {
//		return a.second > b.second ? true : false;
//	}
//	else {
//		return a.first < b.first ? true : false;
//	}
//}
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
//	sort(v.begin(), v.end(), comp);
//
//	//for (int i = 0; i < n; i++) {
//	//	cout << v[i].first << ", " << v[i].second << '\n';
//	//}
//
//	priority_queue<int, vector<int>, greater<int>> pq;
//	vector<int> v2;
//	for (int i = 0; i < n; i++) {
//		pq.push(v[i].second);
//		if (pq.size() > v[i].first) {
//			pq.pop();
//		}
//		//if (v2.size() > v[i].first) {
//		//	v2.pop_back();
//		//}
//	}
//
//	//while (pq.size()) {
//	//	cout << pq.top() << ' ';
//	//	pq.pop();
//	//}
//	//cout << "\n";
//	while (pq.size()) {
//		ret += pq.top();
//		pq.pop();
//	}
//	//for (int i = 0; i < v2.size(); i++) {
//	//	ret += v2[i];
//	//}
//	cout << ret;
//	return 0;
//}
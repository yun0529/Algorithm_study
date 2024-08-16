//#include <bits/stdc++.h>
//using namespace std;
//
//int n, c, t;
//map<int, int> m, m_order;
//vector<pair<int, int>> v;
//bool comp(pair<int,int> p1, pair<int,int> p2) {
//	if (p1.second == p2.second) return m_order[p1.first] < m_order[p2.first];
//	return p1.second > p2.second;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> c;
//	for (int i = 0;i < n;i++) {
//		cin >> t;
//		m[t]++;
//		if (m_order[t] == 0) m_order[t] = i + 1;
//	}
//	for (auto it : m) {
//		v.push_back(it);
//	}
//
//	sort(v.begin(), v.end(), comp); // 내림차순 정렬
//	for (int i = 0;i < v.size();i++) {
//		for (int j = 0;j < v[i].second;j++) {
//			cout << v[i].first << " ";
//		}
//	}
//	return 0;
//}
//#include <iostream>
//#include <cmath>
//#include <algorithm>
//#include <vector>
//#include <map>
//using namespace std;
//
//bool comp(pair<string, int>& a, pair<string, int>& b) {
//	if (a.second == b.second) {
//		if (a.first.length() == b.first.length()) {
//			return a.first < b.first;
//		}
//		return a.first.length() > b.first.length();
//	}
//	return a.second > b.second;
//}
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	vector<pair<string, int>> vec;
//	map<string, int> mp;
//	int n, m;
//	cin >> n >> m;
//
//	string str;
//	for (int i = 0; i < n; i++) {
//		cin >> str;
//		if (str.length() >= m) mp[str]++;
//	}
//	for (auto& val : mp) {
//		vec.push_back(make_pair(val.first, val.second));
//	}
//	sort(vec.begin(), vec.end(), comp);
//	for (auto& val : vec) {
//		cout << val.first << "\n";
//	}
//
//	return 0;
//}
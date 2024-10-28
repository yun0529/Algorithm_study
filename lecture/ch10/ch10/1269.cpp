//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//int n,m;
//map<int, int> mp;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		int x;
//		cin >> x;
//		mp[x]++;
//	}
//	for (int i = 0; i < m; i++) {
//		int x;
//		cin >> x;
//		mp[x]++;
//	}
//
//	int cnt = 0;
//	for (auto i : mp) {
//		if (i.second == 1)cnt++;
//	}
//	cout << cnt;
//	return 0;
//}
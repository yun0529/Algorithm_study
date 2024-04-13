//#include <iostream>
//#include <map>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, m, count = 0;
//	cin >> n >> m;
//	map<string, int> num;
//	vector<string> db;
//	string a;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		num[a]++;
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> a;
//		if (++num[a] == 2) {
//			count++;
//			db.push_back(a);
//		}
//	}
//	cout << count << "\n";
//	sort(db.begin(), db.end());
//	vector<string>::iterator it;
//	for (it = db.begin(); it != db.end(); it++) {
//		cout << *it << "\n";
//	}
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, m;
//	cin >> n >> m;
//
//	map<string, int> a;
//	vector<string> name;
//	vector<string> b;
//
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		name.push_back(s);
//		a.insert({s,i});
//	}
//	
//	for (int i = 0; i < m; i++) {
//		cin >> s;
//		b.push_back(s);
//	}
//
//	for (int i = 0; i < m; i++) {
//
//		if (b[i][0] >= 65 && b[i][0] <= 90) {
//			cout << a.find(b[i])->second + 1 << "\n";
//		}
//		else {
//			cout << name[stoi(b[i]) - 1] << "\n";
//		}
//
//	}
//
//	return 0;
//}
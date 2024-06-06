//#include <bits/stdc++.h>
//using namespace std;
//
//map<string, int> a;
//vector<string> name; // 그냥 배열 사용하면 될듯
//string name_arr[100004];
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, m;
//	cin >> n >> m;
//	//vector<string> b;
//
//	string s;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		name.push_back(s);
//		name_arr[i] = s;
//		a.insert({ s,i });
//	}
//
//	//for (int i = 0; i < m; i++) {
//	//	cin >> s;
//	//	b.push_back(s);
//	//}
//
//	for (int i = 0; i < m; i++) {
//		cin >> s;
//		if (atoi(s.c_str()) == 0) { // 문자가 들어온 경우
//			cout << a.find(s)->second + 1 << "\n";
//		}
//		else {
//			cout << name_arr[atoi(s.c_str()) - 1] << "\n";
//
//		}
//
//	}
//
//	//for (int i = 0; i < m; i++) {
//
//	//	if (b[i][0] >= 65 && b[i][0] <= 90) { // 문자가 들어온 경우
//	//		cout << a.find(b[i])->second + 1 << "\n";
//	//	}
//	//	else {
//	//		cout << name[stoi(b[i]) - 1] << "\n";
//
//	//	}
//
//	//}
//
//	return 0;
//}
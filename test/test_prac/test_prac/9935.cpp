//#include <bits/stdc++.h>
//using namespace std;
//
//string str, fstr, check;
//stack<char> s;
//
//int main() {
//
//	cin >> str >> fstr;
//
//	for (int i = 0; i < str.length(); i++) {
//		s.push(str[i]);
//		if (s.size() >= fstr.length()) {
//			check = "";
//			for (int j = 0; j < fstr.size(); j++) {
//				check += s.top(); s.pop();
//			}
//			reverse(check.begin(), check.end());
//			if (check != fstr) {
//				for (int j = 0; j < check.size(); j++) {
//					s.push(check[j]);
//				}
//			}
//		}
//	}
//	if (s.empty()) {
//		cout << "FRULA";
//	}
//	else {
//		string ret = "";
//		for (int j = s.size() - 1; j >= 0; j--) {
//			ret += s.top(); s.pop();
//		}
//		reverse(ret.begin(), ret.end());
//		cout << ret;
//	}
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//int N;
//string str, ret;
//
//int main() {
//	
//	cin >> N;
//	
//	for (int i = 0; i < N; i++) {
//		cin >> str;
//		ret = "YES";
//		string open = "";
//		for (int j = 0; j < str.length(); j++) {
//			if (str[j] == '(') open += "(";
//			else {
//				if (open.find("(") != string::npos) {
//					open = open.substr(0,open.length()-1);
//				}
//				else {
//					ret = "NO";
//				}
//			}
//
//		}
//		if (!open.empty()) ret = "NO";
//		cout << ret << '\n';
//	}
//	
//
//	return 0;
//}
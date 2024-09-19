//#include <bits/stdc++.h>
//using namespace std;
//
//string str, boom, ret;
//int arr[130];
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> str >> boom;
//	//int cnt = str.size();
//	//int ptr = str.find(boom);
//	//for (int i = 0; i < cnt; i = ptr) {
//	//	if (str.size() == 0) {
//	//		cout << "FRULA";
//	//		return 0;
//	//	}
//	//	else if (str.find(boom) == string::npos) {
//	//		cout << str;
//	//		return 0;
//	//	}
//	//	else if (str.find(boom) != string::npos) {
//	//		str.replace(str.find(boom), boom.length(), "");
//	//		ptr = i;
//	//	}
//
//	//}
//	for (char c : str) {
//		ret += c;
//		if (ret.size() >= boom.size() && ret.substr(ret.size() - boom.size(), boom.size()) == boom) {
//			ret.erase(ret.size() - boom.size(), boom.size());
//		}
//	}
//
//	if (ret.empty()) {
//		cout << "FRULA";
//	}
//	else {
//		cout << ret;
//	}
//
//	//int j = -1;
//	//while (true) {
//	//	j++;
//	//	if (str.size() == 0) {
//	//		cout << "FRULA";
//	//		return 0;
//	//	}else if (str.find(boom) == string::npos) {
//	//		cout << str;
//	//		return 0;
//	//	}
//	//	//else if (str.find(boom) != string::npos) {
//	//	//	str.replace(str.find(boom), boom.length(), "");
//	//	//}
//
//	//	if (str.substr(j, boom.length()) == boom) {
//	//		str.replace(j, boom.length(), "");
//	//		int a = j - boom.length();
//	//		if (a >= 0) {
//	//			j = j - boom.length();
//	//		}
//	//		else {
//	//			j = -1;
//	//		}
//	//	}
//
//	//	if (j + boom.length() >= str.size()) {
//	//		if (str.size() == 0) {
//	//			cout << "FRULA";
//	//			return 0;
//	//		}
//	//		else if (str.find(boom) == string::npos) {
//	//			cout << str;
//	//			return 0;
//	//		}
//	//	}
//	//}
//	return 0;
//}
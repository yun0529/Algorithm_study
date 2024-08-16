//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m,cnt;
//string str, ret;
//
//string arr[10004];
//
//void save_arr(string s) {
//	while (true) { // erase 하는데 length를 조건으로 준 for 문을 사용하여 틀린듯 함...
//		if (s.length() != 1 && s[0] == '0') s.erase(0,1);
//		else break;
//	}
//	if (s.length() == 0) s = "0";
//	arr[cnt] = s;
//	cnt++;
//	ret = "";
//}
//
//bool comp(string a, string b) {
//
//	if (a.length() == b.length()) return a < b;
//
//	return a.length() < b.length();
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 0;i < n;i++) {
//		cin >> str;
//		int cur = cnt;
//		ret = "";
//		for (int j = 0;j < str.length();j++) {
//			if (str[j] >= '0' && str[j] <= '9') {
//				ret += str[j];
//				//arr[cnt] = (int)(str[j] - '0');
//				//cnt++;
//
//			}
//			if ((str[j] >= 65 || j == (str.length() - 1)) && ret.size() != 0) {
//				save_arr(ret);
//			}
//		}
//	}
//	sort(&arr[0], &arr[0] + cnt,comp);
//	for (int i = 0;i < cnt;i++) {
//		cout << arr[i] << '\n';
//	}
//	return 0;
//}
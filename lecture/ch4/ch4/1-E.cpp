//// 백준 1159
//// 카운팅 배열 사용
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, cnt[26];
//string s, ret;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		cnt[s[0] - 'a']++;
//	}
//
//	for (int i = 0; i < 26; i++) {
//		if (cnt[i] >= 5) {
//			ret += (i + 'a'); // i + 'a'를 하여 배열의 위치에 해당하는 알파뱃으로 변경 
//		}
//	}
//	if (ret.size()) {
//		cout << ret << '\n';
//	}
//	else {
//		cout << "PREDAJA" << '\n';
//	}
//	return 0;
//}
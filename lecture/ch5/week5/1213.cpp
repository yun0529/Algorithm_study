//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[26], cnt = 0;
//string str, ret;
//char mid;
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> str;
//
//	for (char s : str) {
//		arr[s - 65]++;
//	}
//	
//	for (int i = 25; i >= 0 ; i--) {
//		if (arr[i]) {
//			if (arr[i] % 2 != 0) {
//				mid = char(i+65);
//				cnt++;
//				arr[i]--; // 하나를 mid에 사용한거기 때문
//			}
//			if (cnt == 2) {
//				break;
//			}
//			for (int j = 0; j < arr[i]; j += 2) {
//				ret = char(i+65) + ret;
//				ret += char(i+65);
//			}
//		}
//	}
//	if(mid) ret.insert(ret.begin() + ret.length() / 2, mid); // 지시자를 써야하는듯..?
//	if (cnt == 2) {
//		cout << "I\'m Sorry Hansoo";
//	}
//	else {
//		cout << ret;
//	}
//
//	//do {
//	//	for (int i = 0; i < str.length(); i++) {
//	//		if (i == str.length() / 2) {
//	//			cout << str;
//	//			return 0;
//	//		}
//	//		if (str[i] != str[str.length() - i - 1]) {
//	//			break;
//	//		}
//	//		
//	//	}
//	//	
//	//} while (next_permutation(&str[0], &str[0] + str.length()));
//	//cout << "I\'m Sorry Hansoo";
//
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//int n;
//char arr[65][65];
//string s;
//
//string comp_qouad(int y, int x, int width) {
//	if (width == 1) {
//		return string(1, arr[y][x]); // 길이 1인 문자열 생성
//	}
//	char c = arr[y][x];
//	string str="";
//	for (int i = y; i < y + width; i++) {
//		for (int j = x; j < x + width; j++) {
//			if (arr[i][j] != c) {
//				str = str + '(';
//				str = str + comp_qouad(y, x, width / 2);
//				str = str + comp_qouad(y, x + width / 2,  width / 2);
//				str = str + comp_qouad(y + width / 2, x, width / 2);
//				str = str + comp_qouad(y + width / 2, x + width / 2, width / 2);
//				str = str + ')';
//				return str;
//			}
//		}
//	}
//
//	return string(1, arr[y][x]);
//}
//
//int main() {
//	
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		
//		cin >> s;
//		for (int j = 0; j < s.length(); j++) {
//			arr[i][j] = s[j];
//		}
//	}
//	
//	cout << comp_qouad(0, 0, n);
//
//	return 0;
//}
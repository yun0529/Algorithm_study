//#include <iostream>
//#include <string>
//#include <cmath>
//
//using namespace std;
//
//int main(void) {
//
//	string str;
//	int n, t = 0;
//
//	cin >> str >> n;
//
//	for (int i = 0; i < str.length(); i++) {
//		int c = str[str.length() - (i + 1)];
//		if ('0' <= c && c <= '9') {
//			c = c - '0';
//		}
//		else {
//			c = c + 10 - 'A';
//		}
//		t += c * pow(n, i);
//	}
//	cout << t;
//	return 0;
//}
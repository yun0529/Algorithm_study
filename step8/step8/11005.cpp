//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//int main(void) {
//
//	string str = "";
//	int n, b;
//
//	cin >> n >> b;
//
//	while (n > 0) {
//		int po = n % b;
//		if (po < 10) {
//			str += po + '0';
//		}
//		else {
//			str += 'A' + po - 10;
//		}
//		n /= b;
//	}
//
//	reverse(str.begin(), str.end());
//	cout << str;
//
//	return 0;
//}
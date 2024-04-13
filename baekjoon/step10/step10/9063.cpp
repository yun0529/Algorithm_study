//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int a, b;
//	int n;
//	cin >> n;
//	int x1 = 10000000, y1 = 10000000;
//	int x2 = -10000000, y2 = -10000000;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		if (a < x1) {
//			x1 = a;
//		}
//		if (b < y1) {
//			y1 = b;
//		}
//		if (a > x2) {
//			x2 = a;
//		}
//		if (b > y2) {
//			y2 = b;
//		}
//	}
//
//	cout << abs((x2 - x1)*(y2 - y1));
//
//	return 0;
//}
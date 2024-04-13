//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int c;
//	int arr[10000] = { 0, };
//	cin >> c;
//
//	for (int i = 0; i < c; i++) {
//		cin >> arr[i];
//	}
//	for (int i = 0; i < c; i++) {
//		int q = 0, d = 0, n = 0, p = 0;
//		if (arr[i] >= 25) {
//			q = arr[i] / 25;
//			arr[i] = arr[i] % 25;
//		}
//		if (arr[i] >= 10) {
//			d = arr[i] / 10;
//			arr[i] %= 10;
//		}
//		if (arr[i] >= 5) {
//			n = arr[i] / 5;
//			arr[i] %= 5;
//		}
//		if (arr[i] >= 1) {
//			p = arr[i] / 1;
//			arr[i] %= 1;
//		}
//		cout << q << " " << d << " " << n << " " << p << endl;
//	}
//
//	return 0;
//}
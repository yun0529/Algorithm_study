//#include<iostream>
//using namespace std;
//
//int n;
//float arr[10004], pmul[10004];
//float a, mx;
//int main() {
//
//	cin >> n;
//	fill(pmul, pmul + n, 1.0);
//	for (int i = 1; i <= n; i++) {
//		cin >> a;
//		pmul[i] = pmul[i - 1] * a;
//	}
//
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j <= i; j++) {
//			if (pmul[i] / pmul[j] > mx) mx = pmul[i] / pmul[j];
//		}
//	}
//	cout << mx;
//	return 0;
//}
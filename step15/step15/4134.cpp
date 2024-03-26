//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//bool isPrime(long x) {
//	if (x == 0 || x == 1) {
//		return false;
//	}
//	if (x == 2) {
//		return true;
//	}
//	for (long k = 2; k <= sqrt(x); k++) {
//		if (x % k == 0) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio;
//
//	long n, a;
//	cin >> n;
//
//	vector<long> arr;
//	for (long i = 0; i < n; i++) {
//		cin >> a;
//		arr.push_back(a);
//	}
//
//	for (long i = 0; i < n; i++) {
//		long j = arr[i];
//		while (true) {
//			if (isPrime(j)) {
//				cout << j << "\n";
//				break;
//			}
//			j++;
//		}
//	}
//
//	return 0;
//}
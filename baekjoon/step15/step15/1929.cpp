//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
////bool isPrime(long x) { // 시간복잡도 O(√N) 알고리즘 사용했음.
////	if (x == 0 || x == 1) {
////		return false;
////	}
////	if (x == 2) {
////		return true;
////	}
////	for (long k = 2; k <= sqrt(x); k++) {
////		if (x % k == 0) {
////			return false;
////		}
////	}
////	return true;
////}
//bool *isP;
//void isPrime2(int n) { // 시간복잡도 O(Nlog(logN) 에라토스테네스의 체 알고리즘 사용했음. => 훨씬 빠름.
//
//	isP = new bool[n + 1];
//
//	for (int i = 0; i <= n; i++) {
//		isP[i] = true;
//	}
//	isP[0] = false;
//	isP[1] = false;
//	for (int k = 2; k <= n; k++) {
//		if (isP[k]) {
//			for (int r = k * 2; r <= n; r += k) {
//				isP[r] = false;
//			}
//		}
//	}
//}
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio;
//
//	int m, n;
//
//	cin >> m >> n;
//	isPrime2(n);
//	for (int i = m; i <= n; i++) {
//		/*if (isPrime2(i)) {
//			cout << i << "\n";
//		}*/
//		if (isP[i]) {
//			cout << i << "\n";
//		}
//	}
//
//	return 0;
//}
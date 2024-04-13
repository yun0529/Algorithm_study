//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//bool* isP;
//void isPrime(int n) {
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
//	int t,n, count;
//	cin >> t;
//
//	vector<int> arr;
//	for (int i = 0; i < t; i++) {
//		cin >> n;
//		arr.push_back(n);
//	}
//
//	for (int i = 0; i < t; i++) {
//		count = 0;
//	
//		isPrime(arr[i]);
//		for (int j = 0; j <= arr[i]/2; j++) {
//			if (isP[j] && isP[arr[i] - j]) {
//				count++;
//			}
//		}
//		cout << count << "\n";
//		delete[]isP;
//	}
//
//	return 0;
//}
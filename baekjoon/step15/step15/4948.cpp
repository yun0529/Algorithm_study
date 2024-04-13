//#include <iostream>
//#include <cmath>
//#include <vector>
//using namespace std;
//
//bool *isp;
//
//void isPrime(int n){
//	isp = new bool[n + 1];
//
//	for (int i = 0; i <= n; i++) {
//		isp[i] = true;
//	}
//	isp[0] = false;
//	isp[1] = false;
//	for (int i = 2; i <= n; i++) {
//		if (isp[i]) {
//			for (int j = i * 2; j <= n; j += i) {
//				isp[j] = false;
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
//	int n, count;
//	vector<int> arr;
//
//	while (true) {
//		cin >> n;
//		if (n == 0) {
//			break;
//		}
//		arr.push_back(n);
//	}
//
//	for (int i = 0; i < arr.size(); i++) {
//		count = 0;
//
//		isPrime(arr[i]*2);
//		for (int j = arr[i]+1; j <= arr[i]*2; j++) {
//			if (isp[j]) {
//				count++;
//			}
//		}
//		cout << count << "\n";
//		delete[]isp;
//	}
//	
//
//	return 0;
//}
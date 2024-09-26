//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int n, arr[100004], x, lp, rp, ret;
//
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	cin >> x;
//
//	lp = 0;
//	rp = n - 1;
//	sort(arr, arr + n);
//
//	while (lp != rp) {
//		if (arr[lp] + arr[rp] > x) {
//			rp--;
//		}
//		else if (arr[lp] + arr[rp] < x) {
//			lp++;
//		}
//		else {
//			ret++;
//			lp++;
//		}
//	}
//	cout << ret;
//	return 0;
//}
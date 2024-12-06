//#include <iostream>
//#include<algorithm>
//using namespace std;
//
//int n, m, arr[500004], check[500004];
//
////bool binSearch(int mid) {
////	for (int i = 0; i < n; i++) {
////
////	}
////	return 
////}
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	cin >> m;
//	int x;
//	sort(arr, arr + n);
//	for (int i = 0; i < m; i++) {
//		int l = 0, r = n - 1;
//		cin >> x;
//		while (l <= r) {
//			int mid = (l + r) / 2;
//			if (arr[mid] == x) {
//				check[i] = 1;
//				break;
//			}
//			if (arr[mid] > x) {
//				r = mid - 1;
//			}
//			else {
//				l = mid + 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < m; i ++) {
//		cout << check[i] << ' ';
//	}
//	return 0;
//}
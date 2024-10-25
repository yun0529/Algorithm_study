//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, result= 987654321;
//int arr[300004];
//
//int binarySearch(int num) {
//	int dumy = 0;
//	for (int i = 0; i < m; i++) {
//		dumy += arr[i] / num;
//		if (arr[i] % num) dumy++;
//	}
//	
//	return dumy <= n;
//}
//
//int main(void) {
//
//	cin >> n >> m;
//	int left = 1;
//	int right = 0;
//	for (int i = 0; i < m; i++) {
//		cin >> arr[i];
//		right = max(right, arr[i]);
//	}
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (binarySearch(mid)) {
//			result = min(result, mid);
//			right = mid - 1;
//		}
//		else {
//			left = mid + 1;
//		}
//	}
//	cout << result;
//
//	return 0;
//}
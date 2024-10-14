//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, m, result = 987654321;
//int arr[300000];
//
//int search(int estimate_val) {
//	int ret = 0;
//	for (int i = 0; i < m; i++) {
//		ret += arr[i] / estimate_val; // 특정 덩어리로 분리하는 것.
//		if (arr[i] % estimate_val) ret++; // 나머지가 있다면 ++ 함.
//	}
//	return ret <= n; // 덩어리의 수가 n(명) 이하여야 함. -> 모든 형광팬을 나눠줘야 하기 때문
//
//}
//
//int main() { // 이분 탐색을 이용하면 최적화 문제를 결정 문제로 바꿀 수 있음.
//
//	cin >> n >> m;
//	int left = 1, right = 0, mid;
//
//	for (int i = 0; i < m; i++) {
//		cin >> arr[i];
//		right = max(right, arr[i]);
//	}
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		//cout << mid << " : " << arr[mid] << '\n';
//		if (search(mid)) { // 모두 나눠가질 수 있다면
//			result = min(result, mid);
//			right = mid - 1;
//		}
//		else { // 더 큰 수를 찾아봄
//			left = mid + 1;
//		}
//	}
//
//
//	cout << result;
//
//	return 0;
//}
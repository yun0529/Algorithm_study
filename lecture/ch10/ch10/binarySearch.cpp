//// 이분 탐색
//// 알고있는 것과 별 차이 없음.
//// O(logN)
//// 범위 N -> N/2 -> N/4 ... 1
//// k번째 => N/2^k
//// 1로 수렴하면 최악의 경우임
//// N/2^k = 1 -> N = 2^k -> log2N(logN) = k
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n;
//
//int binarySearch(const vector<int>& arr, int target) {
//	int left = 0;
//	int right = arr.size() - 1;
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		cout << mid << " : " << arr[mid] << '\n';
//		if (arr[mid] == target) {
//			return mid;
//		}
//		else if (arr[mid] < target) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	return -1; // target 값을 찾지 못한 경우
//}
//
//int main() {
//
//	vector<int> arr = { 1, 3, 6, 9, 10, 21, 22, 30 };
//	sort(arr.begin(), arr.end());
//	int target = 6;
//
//	int result = binarySearch(arr, target);
//
//	if (result != -1) {
//		cout << "idx : " << result << '\n';
//	}
//	else {
//		cout << "Not founded" << '\n';
//	}
//
//	return 0;
//}
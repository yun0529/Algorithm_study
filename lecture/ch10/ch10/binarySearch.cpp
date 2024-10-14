//// �̺� Ž��
//// �˰��ִ� �Ͱ� �� ���� ����.
//// O(logN)
//// ���� N -> N/2 -> N/4 ... 1
//// k��° => N/2^k
//// 1�� �����ϸ� �־��� �����
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
//	return -1; // target ���� ã�� ���� ���
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
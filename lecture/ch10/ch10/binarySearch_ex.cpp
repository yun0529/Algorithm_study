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
//		ret += arr[i] / estimate_val; // Ư�� ����� �и��ϴ� ��.
//		if (arr[i] % estimate_val) ret++; // �������� �ִٸ� ++ ��.
//	}
//	return ret <= n; // ����� ���� n(��) ���Ͽ��� ��. -> ��� �������� ������� �ϱ� ����
//
//}
//
//int main() { // �̺� Ž���� �̿��ϸ� ����ȭ ������ ���� ������ �ٲ� �� ����.
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
//		if (search(mid)) { // ��� �������� �� �ִٸ�
//			result = min(result, mid);
//			right = mid - 1;
//		}
//		else { // �� ū ���� ã�ƺ�
//			left = mid + 1;
//		}
//	}
//
//
//	cout << result;
//
//	return 0;
//}
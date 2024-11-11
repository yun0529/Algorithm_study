//#include <iostream>
//using namespace std;
//
//int n, m, arr[100004], ret, sum, mx;
//
//bool bin(int mid) {
//	if (mx > mid) return false;
//	int cnt = 0;
//	int tmp = mid;
//	for (int i = 0; i < n; i++) {
//		if (mid - arr[i] < 0) {
//			mid = tmp;
//			cnt++;
//		}
//		mid -= arr[i];
//	}
//	if (mid != tmp) cnt++; // �������� ����� ���� ++���� �ʾұ� ������ ���� ó������.
//	return cnt <= m; // m�� ���Ͽ��� ��� ���� ��������.
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//		mx = max(mx, arr[i]);
//	}
//
//	int left = 0, right = sum;
//
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (bin(mid)) {
//			right = mid - 1;
//			ret = mid;
//		}
//		else {
//			left = mid + 1;	
//		}
//	}
//	cout << ret;
//
//	return 0;
//}
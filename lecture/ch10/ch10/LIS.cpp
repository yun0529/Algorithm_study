//// �ִ� ���� �κ� ����
//// 10 20 10 30 20 50
//// -> �����ϴ� �κм��� �� �ִ�� �� �κ� ���� (10 20 30 50)
//// 
//// 
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, a[1001], cnt[1001], ret;
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++) {
//		int maxValue = 0;
//		for (int j = 0; j < i; j++) {
//			// ������ ã�ƾ���. 10 20 10 30 ... 
//			// 30�� ������ �� maxValue�� 0 10 20 30 ������ ������
//			if (a[j] < a[i] && maxValue < cnt[j]) { // ���� ���� ������ �۰�
//				// maxValue�� �ش� ������ cnt ���� �۾ƾ� �� -> ���� ������ ���� �� �ִ� ���� �κ� ���� �ڿ� �پ�� ��.
//				maxValue = cnt[j];
//				cout << maxValue << " , ";
//			}
//		}
//		cnt[i] = maxValue + 1; // ���� maxValue���� �ڱ���� �ؼ� ����
//		ret = max(ret, cnt[i]);
//		cout << '\n';
//	}
//	cout << ret;
//}}
//// �ִ� ���� �κ� ����
///*
//6
//10 20 10 30 25 50
//*/
//// -> �����ϴ� �κм��� �� �ִ�� �� �κ� ���� (10 20 30 50)
//// ���������� O(N^2) �̿���. �������ʹ� O(NlogN)
//// but. Trace�� �ȵ�
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n, lis[1001], len, num;
//
//int main() {
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> num;
//		auto lowerPos = lower_bound(lis, lis + len, num); // Ư�� ��(num) �̻��� ó�� ��Ÿ���� ��ġ�� ã��
//
//		if (*lowerPos == 0) len++; // num�� ���ٸ� ���� ������Ŵ -> ���� lower_bound ���� �����
//		// �ڵ����� �迭�� ���� ��ġ�� ����Ű�� ��
//		*lowerPos = num; // num�� ����
//		for (int j = 0; j < n; j++) {
//			cout << lis[j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << len;
//	return 0;
//}

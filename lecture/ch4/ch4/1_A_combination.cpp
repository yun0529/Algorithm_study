//// ���� 2309 ����
//#include <bits/stdc++.h>
//using namespace std;
//
//// 9�� �߿� ���� ������� 7���� �̴´� 9C7 �� ���� 100�̴�.
//// ���� ����ְ� �̾Ƶ� �Ǳ� ������ 9P7�� ������.
//int a[9];
//int sum;
//pair<int, int> ret;
//vector<int> v;
//void solve(); // ���� ����ؼ� �̴¹�
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	for (int i = 0; i < 9; i++) {
//		cin >> a[i];
//	}
//
//
//	// 9C7�� �̴� �� (9C2�� ����) -> 7���� ���� 100�̿�����. �̶� ������ �θ� A, B�� ����. 
//	// ���� ��ü�� -A-B�� �ϰų� 7���� �� = 100 �ΰų� ����
//	solve();
//	for (int i = 0; i < 9; i++) {
//		if (ret.first == i || ret.second == i)continue; // ret�� �ɸ��� �ֵ��� ������ �ɷ���
//		v.push_back(a[i]);
//	}
//	sort(v.begin(), v.end());
//	for (int i : v)cout << i << " ";
//
//	return 0;
//}
//
//void solve() {
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < i; j++) {
//			if (sum - a[i] - a[j] == 100) {
//				ret = {i,j}; // ��¥ 2���� �̾Ƽ� �������
//				return;
//			}
//		}
//	}
//}
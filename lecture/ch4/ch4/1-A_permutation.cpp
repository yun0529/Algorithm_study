//// ���� 2309 ����
//#include <bits/stdc++.h>
//using namespace std;
//
//// 9�� �߿� ���� ������� 7���� �̴´� 9C7 �� ���� 100�̴�.
//// ���� ����ְ� �̾Ƶ� �Ǳ� ������ 9P7�� ������.
//int a[9];
//int sum;
//vector<pair<int,int>> ret;
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
//	sort(a, a + 9);
//
//	do { // next_permutation ����ϴ� �κ� 9�� �߿� 7���� �����̽� �ؼ� ���
//
//		for (int i : a)cout << i << " ";
//		cout << "\n";
//		int sum = 0;
//		for (int i = 0; i < 7; i++)sum += a[i];
//
//		if (sum == 100)break;
//
//	} while (next_permutation(a, a + 9));
//
//	for (int i = 0; i < 7; i++)cout<<a[i]<<"\n";
//
//	// 9C7�� �̴� �� (9C2�� ����) -> 7���� ���� 100�̿�����. �̶� ������ �θ� A, B�� ����. 
//	// ���� ��ü�� -A-B�� �ϰų� 7���� �� = 100 �ΰų� ����
//
//
//
//	return 0;
//}
//
//void solve() {
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < i; j++) {
//			if (sum - a[i] - a[j] == 100) {
//				ret.push_back(make_pair(i,j));
//				return;
//			}
//		}
//	}
//}
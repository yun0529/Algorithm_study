//// ���� 2309 ����
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//// 9�� �߿� ���� ������� 7���� �̴´� 9C7 �� ���� 100�̴�.
//// ���� ����ְ� �̾Ƶ� �Ǳ� ������ 9P7�� ������.
//int a[9];
//int n = 9, r = 7;
//
//void solve() {
//	int sum = 0; // ���ؼ� 100�� ����� ����.
//	for (int i = 0; i < r; i++) { //9�� �� 7���� ���� 100�� �Ǿ�� �ϱ� ������ r ����.
//		sum += a[i];
//	}
//	if (sum == 100) {
//		sort(a, a + 7); // ���� 7���� ������ �ؾ���. 9�� ��� �����ϸ� ���� ���� �� ����.
//		for (int i = 0; i < r; i++) cout << a[i] << '\n';
//		exit(0); // ���� ����� 1������ ����ϸ� �Ǳ� ������ �ٷ� ������.
//	}
//}
//
//void print() {
//	for (int i = 0; i < r; i++) cout << a[i] << " ";
//	cout << '\n';
//}
//
//void makePermutation(int n, int r, int depth) { // 9P7 ����Լ�
//	if (r == depth) {
//		solve();
//		return;
//	}
//	for (int i = depth; i < n; i++) {
//		swap(a[i], a[depth]); // depth�� ������� swap��
//		makePermutation(n, r, depth + 1);
//		swap(a[i], a[depth]); // ������ �� ������ �ٽ� ������� ����
//	}
//	return;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	makePermutation(n, r, 0); // n : 9, r : 7 -> 9�� �߿� 7���� �̾Ƽ� ���� 100�ΰ� ã�´�.
//
//	return 0;
//}
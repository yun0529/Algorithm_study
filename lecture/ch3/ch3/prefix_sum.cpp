//// prefix sum : ������
//// �迭�� [], 1, 10, 11, 100 �̷��� ������
//// 0��° �������� ���� ���� �ʴ´�.
//// psum �̶�� �θ���.
//// 
//// [1] -> 1��°������ ��
//// [2] -> 2��°������ ��
//// [3] -> 3��°������ ��...
//
//#include <bits/stdc++.h>
//using namespace std;
//
//int a[100004], b, c, psum[100004], n, m;
//
//int main() { 
//	// Ư�� ������ �� -> psum[4] - psum[1] �̷������� �� �� ����
//	// �Ʒ��� �ڵ�ó�� �ϸ� 100000 * 100000 �̱� ������ �ȵɰ���
//	// ���� �迭������ ����� �� ����
//	// ���� �迭������ ����Ʈ�� ��� ���� ���
//	
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> b >> c;
//		int sum = 0;
//		for (int j = b; j <= c; j++) sum += a[j];
//		cout << sum << '\n';
//	}
//	
//	
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//		psum[i] = psum[i - 1] + a[i]; // �̷��� ������ ��� psum�� Ȱ���Ѵ�. �׷��� �����̶� psum�� 1���� ����
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> b >> c;
//		cout << psum[c] - psum[b - 1] << "\n";
//	}
//	return 0;
//}
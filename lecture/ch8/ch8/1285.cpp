//#include <bits/stdc++.h>
//using namespace std;
//
//int n, t_cnt = 0, h_cnt = 0, sum = 0;
//char arr[24][24];
//int b[44], ret = 987654321;
//
//void go(int here) {
//	if (here == n) { // ��� ��������
//		sum = 0;
//		for (int i = 1; i < (1 << (n)); i *= 2) {
//			t_cnt = 0;
//			for (int j = 1; j <= n; j++) {
//				if (b[j] & i)t_cnt++; // ������ ��Ҹ� Ȯ���ϰ� t�̸� ++
//			}
//			sum += min(t_cnt, n - t_cnt); // t�� h���� ���Ͽ� ������ ����.
//			// ��¥�� ������ �� ������ ������ ���ϸ� �ȴ�.
//		}
//		ret = min(ret, sum); 
//		return;
//	}
//
//	go(here + 1); // �ȵ����� ����ĭ����
//	b[here] = ~b[here];
//	go(here + 1); // ������ ����ĭ����
//}
//
//int main() {
//	// �ִ� 2^40���� �����ؾ���..
//	// but. �ุ ���� �������� �������� �������� ������ �Ǵܸ� �ϸ� �ȴ�.
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int idx = 1;
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 'T') b[i] |= idx;
//			idx *= 2;
//		}
//	}
//	if (t_cnt == 2) {
//		cout << 2;
//		return 0;
//	}
//	go(1);
//	//for (int i = 0; i < n; i++) {
//	//	cout << b[i] << " ";
//	//}
//	cout << ret;
//
//	return 0;
//}
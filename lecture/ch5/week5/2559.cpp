//#include <bits/stdc++.h>
//using namespace std;
//
//// ���� 2559��
//// ���� �� prefix sum
//// �ִ밪�� ���϶� -> �ּҰ����� >> �ִ밪
//// ret = max(ret, value) or ret = min(ret, value)
//
//int n, k, m = -10000001;
//int a;
//int sum[100001];
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) {
//		cin >> a;
//		sum[i] = sum[i - 1] + a;
//	}
//
//	for (int i = k; i <= n; i++) {
//		m = max(m, sum[i] - sum[i - k]);
//	}
//
//	//for (int i = 0; i < n; i++) {
//	//	cin >> a;
//	//	for (int j = i; j <= i + k; j++) {
//	//		if (j >= n) {
//	//			break;
//	//		}
//	//		sum[j] += a;
//	//	}
//	//	if (sum[i] > m) m = sum[i];
//	//}
//	cout << m<<'\n';
//	return 0;
//}
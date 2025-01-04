#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, dp[10001];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	dp[0] = 1;

	for (int i = 1; i <= 3; i++) { // 1, 2, 3���� �������
		for (int j = 1; j <= 10000; j++) {
			// j��° �� - i�� 0���� Ŀ����. -> ����� ����
			if (j - i >= 0) dp[j] += dp[j - i]; // ���簪 + j-i
			// dp[1] = 1 + 1 = 2 ��� dp[2] = 1 + 1 + 1 = 3 or 1 + 2 ��.
			// 1���� ���� �� �ִ� ���� + ������ i������ ���� �� �ִ� ������ ����.
			// 1 + i �� ���� �� �ִ� ���� j-i���� �̹� ������ �ֱ� ������
			// �̸� �������ν� �ذ� ������. (i��ŭ Ŀ���� ����� ���� 1�� �� �þ)
		}
	}
	while (t--) {
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}
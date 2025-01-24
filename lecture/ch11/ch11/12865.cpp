#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int n, k, vrr[104], wrr[104];
ll dp[104][100004];

void go() {
	for (int i = 1; i <= k; ++i) {
		for (int j = 1; j <= n; ++j) {
			if (wrr[j] > i) { // ���� �ʰ�
				dp[j][i] = dp[j - 1][i];
			}
			else { // ��ų� �ȴ�ų�
				// j�� ��ġ + j�� ���Ը� �� ���������� ��ġ�� dp(�ִ� ��)
				// ���������� �ִ밪
				// ��
				dp[j][i] = max(dp[j - 1][i - wrr[j]] + vrr[j], dp[j - 1][i]);
			}
		}
	}

}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	for (int i = 1; i <= n; ++i) {
		cin >> wrr[i] >> vrr[i];
	}
	for (int i = 0; i <= n; ++i) {
		dp[i][0] = 0;
	}
	for (int i = 0; i <= k; ++i) {
		dp[0][i] = 0;
	}
	go();
	cout << dp[n][k];
	return 0;
}
#endif // 01

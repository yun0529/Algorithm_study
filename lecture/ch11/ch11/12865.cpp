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
			if (wrr[j] > i) { // 무게 초과
				dp[j][i] = dp[j - 1][i];
			}
			else { // 담거나 안담거나
				// j의 가치 + j의 무게를 뺀 나머지에서 가치의 dp(최대 값)
				// 이전까지의 최대값
				// 비교
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

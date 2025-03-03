#if 01
#include <iostream>
using namespace std;

int T, n, money;
int coins[24];
int dp[10004];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> n;
		fill(dp, dp + 10004, 0);
		dp[0] = 1;
		for (int i = 0; i < n; i++) {
			cin >> coins[i]; // 동전 금액
		}
		cin >> money;
		for (int i = 0; i < n; i++) {
			for (int j = coins[i]; j <= money; j++) {
				dp[j] = dp[j] + dp[j - coins[i]];
			}
		}
		cout << dp[money] << '\n';
	}

	return 0;
}
#endif // 01

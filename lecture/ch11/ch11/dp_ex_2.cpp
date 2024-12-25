#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t, n, dp[10001];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	dp[0] = 1;

	for (int i = 1; i <= 3; i++) { // 1, 2, 3으로 만들거임
		for (int j = 1; j <= 10000; j++) {
			// j번째 수 - i가 0보다 커야함. -> 만들기 가능
			if (j - i >= 0) dp[j] += dp[j - i]; // 현재값 + j-i
			// dp[1] = 1 + 1 = 2 라면 dp[2] = 1 + 1 + 1 = 3 or 1 + 2 임.
			// 1으로 만들 수 있는 개수 + 현재의 i값으로 만들 수 있는 개수를 더함.
			// 1 + i 로 만들 수 있는 경우는 j-i에서 이미 더해져 있기 때문에
			// 이를 더함으로써 해결 가능함. (i만큼 커져야 경우의 수가 1개 더 늘어남)
		}
	}
	while (t--) {
		cin >> n;
		cout << dp[n] << '\n';
	}
	return 0;
}
#if 0
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
ll n, arr[504][504], dp[504][504]; 
ll mx = 0;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; ++j) {
			cin >> arr[i][j];
		}
	}

	int cnt = 0;
	dp[0][0] = arr[0][0]; mx = max(mx, dp[0][0]);
	dp[1][0] = dp[0][0] + arr[1][0]; mx = max(mx, dp[1][0]);
	dp[1][1] = dp[0][0] + arr[1][1]; mx = max(mx, dp[1][1]);

	for (int i = 2; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			}
			else if (j == i) {
				dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j]);
			}
			mx = max(mx, dp[i][j]);
		}

	}
	cout << mx;

	return 0;
}
#endif // 01

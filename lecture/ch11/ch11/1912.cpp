#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int n, arr[100004], dp[100004];
int mx = -987654321;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int ret = arr[0];
	dp[0] = arr[0];

	for (int i = 1; i < n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		ret = max(dp[i], ret);
	}
	cout << ret;
	return 0;
}
#endif // 01

#if 0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[104], dp[104];
int t, n;

ll go(int n) {
	if (n <= 3)return 1;
	ll& ret = dp[n];
	if (ret != -1)return ret;
	return ret = go(n - 2) + go(n - 3);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < t; ++i) {
		cin >> n;
		cout << go(n) << '\n';
	}
	
	return 0;
}
#endif
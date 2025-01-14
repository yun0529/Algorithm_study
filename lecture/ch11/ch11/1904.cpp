#if 0
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
ll arr[1000004], dp[1000004];

ll go(int n) {
	if (n <= 2)return n;
	ll& ret = dp[n];
	if (ret != -1) return ret;
	return ret = (go(n - 2) + go(n - 1)) % 15746;

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << go(n);
	return 0;
}
#endif
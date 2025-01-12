#if 0
#include <bits/stdc++.h>
using namespace std;

int n, arr[304], dp[304];

int go(int s, int cnt) { // ¹Ý´ë·Î
	if (s < 0) return -987654321;
	int& ret = dp[n];
	if (ret != -1) return ret;
	if (cnt == 2) return ret = max(ret, go(s - 2, 0) + arr[s]);
	
	return ret = max(ret, max(go(s - 1, ++cnt) + arr[s], go(s - 2, 0) + arr[s]));
}

int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	fill(dp, dp + 304, -1);
	dp[0] = arr[0]; dp[1] = arr[1] + arr[0];
	dp[2] =	 max(arr[0] + arr[2], arr[1]+arr[2]	);
	cout<< go(n-1, 0);
	return 0;
}
#endif // 01
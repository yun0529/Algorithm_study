#if 01
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
/*
1번 집의 색은 2번 집의 색과 같지 않아야 한다.
N번 집의 색은 N-1번 집의 색과 같지 않아야 한다.
i(2 ≤ i ≤ N-1)번 집의 색은 i-1번, i+1번 집의 색과 같지 않아야 한다.
*/
ll n, arr[1004][3], dp[1004][3]; // 0 : r, 1 : b, 2 : g
ll mn = 987654321;
//int go(int n, int c) {
//	if (dp[n - 1] == dp[n] || dp[n + 1] == dp[n]) return 987654321;
//	if ((n == 1 || n == 2) && dp[1] == dp[2]) return 987654321;
//	ll& ret = dp[n][c];
//	
//	return ret = min(ret, go()) ;
//}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 3; ++j) {
			cin >> arr[i][j];
		}
	}

	int cnt = 0;
	dp[0][0] = arr[0][0]; dp[0][1] = arr[0][1]; dp[0][2] = arr[0][2];

	for (int i = 1; i < n; ++i) {
		dp[i][0] = min(dp[i-1][1], dp[i - 1][2]) + arr[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
		
	}
	cout<< min(dp[n - 1][0], min(dp[n - 1][1], dp[n - 1][2]));

	return 0;
}
#endif // 01

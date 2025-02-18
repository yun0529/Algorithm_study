#if 0
#include <iostream>
using namespace std;

int n, m, s, e;
int arr[2004], dp[2004][2004];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		dp[i][i] = 1; // 한자리
		if (arr[i] == arr[i + 1]) dp[i][i + 1] = 1; // 두자리
	}
	
	for (int i = 1; i < n-1; i++) {
		for (int j = 0; (i+j) < n; j++) {
			if (arr[j] == arr[i + j] && dp[j + 1][i + j - 1] == 1)
		}
	}
	cin >> m;
	for (int i = 0; i < n - 1; i++) {
		cin >> s >> e;
		cout << dp[s][e] << '\n';
	}
	return 0;
}

#endif
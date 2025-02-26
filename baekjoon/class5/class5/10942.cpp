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
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		dp[i][i] = 1; // 한자리
		if (arr[i] == arr[i + 1]) dp[i][i + 1] = 1; // 두자리
	}

	for (int i = n-1; i >= 1; i--) { // 세자리 이상
		for (int j = i - 2; j <= n; j++) {
			if (arr[i] == arr[j] && dp[i+1][j-1] == 1) {
				dp[i][j] = 1;
			}
		}
	}
	
	//cout << "\n--------------------\n";
	//for (int i = 0; i <=n; i++) { 
	//	for (int j = 0; j<=n; j++) {
	//		cout << dp[i][j] << ' ';
	//	}
	//	cout << '\n';
	//}
	//cout << "\n--------------------\n";
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> s >> e;
		cout << dp[s][e] << '\n';
	}
	return 0;
}

#endif
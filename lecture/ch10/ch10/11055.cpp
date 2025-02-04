#if 0
#include <iostream>
#include <vector>
using namespace std;

int n, dp[1004], arr[1004], mx;

int main() {

	cin >> n;
	for (int i = 0;i < n;++i) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < n; i++) {
		dp[i] = arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[j] < arr[i] && dp[i] < dp[j] + arr[i]) {
				dp[i] = dp[j] + arr[i];
			}
		}
		mx = max(mx, dp[i]);
	}


	cout << mx;
	return 0;
}
#endif
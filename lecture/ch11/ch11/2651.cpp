#if 01
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll limit, n, dist_sum[104], set_time[104], dp[104], post[104];

int main() {
	cin >> limit >> n;
	int x;
	for (int i = 1; i <= n+1; ++i) {
		cin >> x;
		dp[i] = 4147483647;
		dist_sum[i] = x + dist_sum[i - 1];
	}
	for (int i = 1; i <= n; ++i) {
		cin >> set_time[i];
	}
	dp[0] = 0; // 계산을 위해 초기값 설정
	for (int i = 1; i <= n + 1; ++i) {
		for (int j = i - 1; j >= 0; --j) {
			if (dist_sum[i] - dist_sum[j] > limit) break;
			//cout << j << ' ';
			if (dp[i] > dp[j] + set_time[j]) {
				dp[i] = dp[j] + set_time[j];
				post[i] = j;
			}
		}//cout << '\n';
	}
	cout << dp[n+1]<<'\n';
	vector<int> post_vec;
	int temp = post[n + 1];
	while (temp != 0) {
		post_vec.push_back(temp);
		temp = post[temp];
	}
	sort(post_vec.begin(), post_vec.end());
	cout << post_vec.size() << '\n';
	for (int i = 0; i < post_vec.size(); ++i) {
		cout << post_vec[i] << ' ';
	}
	return 0;
}
#endif
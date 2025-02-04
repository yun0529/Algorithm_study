#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll limit, n, dist[104], sec[104], psum[104], dp[104], prev_list[104];
vector<int> v;

int main() {

	cin >> limit >> n;
	for (int i = 1; i <= n+1;++i) {
		cin >> dist[i];
		psum[i] = psum[i - 1] + dist[i];
	}
	for (int i = 1; i <= n;++i) {
		cin >> sec[i];
	}
	fill(dp, dp + 104, 5000000000);
	fill(prev_list, prev_list + 104, -1);
	dp[0] = 0;
	for (int i = 1;i <= n + 1;++i) {
		for (int j = 0;j < i;++j) {
			if (psum[i] - psum[j] <= limit) {
				if (dp[i] > dp[j] + sec[i]) {
					dp[i] = dp[j] + sec[i];
					prev_list[i] = j;
				}
			}
		}

	}
	cout << dp[n + 1] << '\n';
	int tmp = prev_list[n+1];
	while (tmp != 0) {
		v.push_back(tmp);
		tmp = prev_list[tmp];
	}
	cout << v.size() << '\n';
	for (int k = v.size()-1;k >= 0;k--) {
		cout << v[k] << ' ';
	}
	return 0;
}

#endif 
#if 0
#include<bits/stdc++.h>
using namespace std;

int t, n, x;
int mx = -987654321, mn = 987654321;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		mx = -987654321, mn = 987654321;
		for (int j = 0; j < n; ++j) {
			cin >> x;
			mx = max(x, mx);
			mn = min(x, mn);
		}
		cout << mn << " " << mx << '\n';
	}
	return 0;
}
#endif // 01

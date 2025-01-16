#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
ll n,k,w,v, dp[104][104];
ll mx = 0;
vector<pair<int, int>> vec;
int comp(int a, int b) {
	return a < b;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < n; ++i) {
		cin >> w >> v;
		vec.push_back({ v,w });
	}
	ll wrr[104] = { k };
	sort(vec.rbegin(), vec.rend());
	//sort(vrr, vrr + n, comp);
	//cout << "----\n";
	//for (int i = 0; i < n; ++i) {
	//	cout << vec[i].first <<' '<< vec[i].second<<'\n';
	//}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			
			dp[i][j] += vec[j].first;
			wrr[j] -= vec[j].second;
			if (vec[j].second > weight)continue;
			sum += vec[j].first;
			weight -= vec[j].second;
			//cout << sum << ' ' << weight << '\n';
			if (weight <= 0) break;
		}
		mx = max(mx, sum);
	}
	cout << mx;

	return 0;
}
#endif // 01

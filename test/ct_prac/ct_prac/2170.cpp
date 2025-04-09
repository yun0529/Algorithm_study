#if 01
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, fr, to, sum;
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
vector<pair<int, int>> v;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	int l, r;
	for (int i = 0; i < n; i++) {
		cin >> l >> r;
		//pq.push({ l,r });
		v.push_back({ l,r });
	}
	sort(v.begin(), v.end());
	fr = v[0].first;
	to = v[0].second;
	if (v.size() == 1) {
		cout << to - fr;
		return 0;
	}
	for (int i = 1; i < v.size(); i++) {
		if (v[i].first > to) { // 이어지지 않은 경우
			sum += to - fr;
			fr = v[i].first;
			to = v[i].second;
		}
		else if (v[i].second > to) { // 겹쳐지면서 더 긴 경우
			to = v[i].second;
		}
	}
	sum += to - fr;
	cout << sum;

	return 0;
}
#endif
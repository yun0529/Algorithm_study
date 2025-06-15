#if 0
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int n, mx;
priority_queue<int, vector<int>, greater<int>> pq;
vector<pair<int, int>> line;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> n;
	int a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		line.push_back({ a,b });
	}
	sort(line.begin(), line.end());

	for (int i = 0;i < n;i++) {
		int l = line[i].first;
		int r = line[i].second;

		while (pq.size() && pq.top() <= l)
			pq.pop();

		pq.push(r);
		mx = max(mx, (int)pq.size());
	}
	cout << mx;

	return 0;
}
#endif // 01

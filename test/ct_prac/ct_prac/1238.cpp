#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, x, mx, mx_num;
int dist[1004];
vector<pair<int,int>> v[10004];

void dijkstra(int here) {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({ 0, here });
	dist[here] = 0;
	while (pq.size()) {
		int node = pq.top().second;
		int ti = pq.top().first;
		pq.pop();
		if (dist[node] < ti) continue;

		for (auto there : v[node]) {
			int nTime = there.first + ti;
			if (nTime >= dist[there.second]) continue;
			dist[there.second] = nTime;
			pq.push({ nTime, there.second });
		}
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> x;
	int fr, to, ti;
	for (int i = 0; i < m; i++) {
		cin >> fr >> to >> ti;
		v[fr].push_back({ ti,to });
	}
	for (int i = 1; i <= n; i++) {
		int tmp = 0;
		fill(dist, dist + 1004, INT32_MAX);
		dijkstra(i);
		tmp += dist[x];
		fill(dist, dist + 1004, INT32_MAX);
		dijkstra(x);
		tmp += dist[i];
		if (tmp > mx) {
			mx = tmp;
		}
	}
	cout << mx;

	return 0;
}
#endif
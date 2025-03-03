#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int INF = 1e9;

int n, m, from, to, cost, st,ed;
vector<pair<int, int>> v[1004]; // 가중치, 정점
vector<int> dist(1004, INF);
vector<int> route;
int visited[1004];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>
pq;


void dijkstra(int st) {
	dist[st] = 0;
	pq.push({ 0,st });
	while (pq.size()) {
		int here_cost = pq.top().first;
		int here_node = pq.top().second;
		pq.pop();

		if (dist[here_node] < here_cost) continue;

		for (auto there : v[here_node]) {
			int new_cost = there.first + here_cost;
			if (new_cost < dist[there.second]) {
				dist[there.second] = new_cost;
				//cout << there.second << " : " << new_cost << '\n';
				pq.push({ new_cost, there.second });
				visited[there.second] = here_node;
			}
		}

	}
}

int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0); cout.tie(0);
	cin >> n >> m;

	for (int i = 1; i <= m; i++) {
		cin >> from >> to >> cost;
		v[from].push_back({ cost,to });
	}
	cin >> st >> ed;
	dijkstra(st);
	int sum, node = ed;
	while (true) {
		if (node == 0) break;
		route.push_back(node);
		node = visited[node];
	}
	cout << dist[ed]<<'\n';
	cout << route.size() << '\n';
	for (int i = route.size()-1; i >=0 ; i--) cout << route[i] << ' ';
	return 0;
}
#endif // 01

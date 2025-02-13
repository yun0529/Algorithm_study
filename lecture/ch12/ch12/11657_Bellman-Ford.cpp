/* Bellman-Ford
*  1. 초기화 : 출발 노드에서 출발 도드까지의 거리는 0으로 설정하고, 
* 나머지 노드들은 무한대로 초기화
* 2. 최단 경로 갱신 : 모든 가넌을 V-1번 반복하여 검사하며 현재 경로가
* 기존 경로보다 짧다면 해당 경로로 완화
* 3. 음수 사이클 확인 : 최단 경로가 확정된 후에도, 다시 모든 간선을 검사하여
* 최단경로가 더 짧아지는 경로각 있다면, 이는 음수 사이클이 존재하는 것.
* 
* 음수 가중치가 있는 그래프에서 사용하는 최단거리 알고리즘이다. O(VE)
*/

#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

long long t, n, m, a, b, c, dist[1004], INF = 1e9;
vector<pair<int, int>> adj[1004];
queue<int> q;

int go() {
	// V - 1번 반복 : 모든 간선을 통하는 최소 개수 확인
	// 마지막 반복 + 1회를 통해 음수 사이클 확인
	for (int i = 0; i < n; i++) {
		for (int here = 1; here <= n; here++) {
			for (auto there : adj[here]) {
				int d = there.second;
				int to = there.first;
				// 현재 + 경로 < 목적지까지 거리 -> 완화
				if (dist[here] != INF && dist[here] + d < dist[to]) {
					// 마지막에서 결과가 바뀐다면 q.push로 체크
					// 여러 개의 음수 사이클을 찾아야 할 수 있기 때문.
					if (i == n - 1) q.push(to);
					dist[to] = dist[here] + d;
					//cout << here << " : " << to << '\n';
				}
			}
		}
	}
	return q.size();
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	
	fill(dist, dist + 1004, INF);
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c;
		adj[a].push_back({ b,c });
	}
	dist[1] = 0; 

	int ret = go();
	if (ret)cout << -1 << '\n';
	else {
		for (int i = 2; i <= n; i++) {
			cout << (dist[i] == INF ? -1 : dist[i]) << '\n';
		}
	}
	return 0;
}
#endif
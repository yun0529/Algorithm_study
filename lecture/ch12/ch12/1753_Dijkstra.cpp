/* Dijkstra - 최단거리 알고리즘
* 가중치가 다를 때 bfs 대신 사용
* 1. 음의 가중치가 없는 그래프에서 사용할 수 있으며
* 2. 우선순위큐에 PQ에 있는 정점에서 해당정점까지의 거리가 
* 가장 낮은 정점을 중심으로 거리 배열을 갱신하여 다시 큐에
* 넣는 행위를 반복하여 최종적으로 거리배열을 완성하는 알고리즘. 
* 3. 정점 v까지 거리와 비교하여 더 짧아진 경우에 갱신합니다. 
* 즉, dist[u] + w(u, v) = dist[v]로 갱신한다는 것입니다. 
* 이 때 갱신이 일어났을 때를 완화가 일어났다고 합니다.
* O(ElogE) = O(ElogV) 이다. E : 간선, V : 노드
* E <= (V-1)*V = V^2 - V
* O(ElogV^2) = O(2ElogV) = O(ElogV)
*/

#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 10e9; // 최대값 생성
vector<pair<int, int>> adj[20004]; // 그래프의 인접 리스트 (가중치, 정점)
vector<int> dist(20004, INF); // 최단 거리 배열
int V, E, K;


void dijkstra(int start) {
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	dist[start] = 0; // 자신까지의 거리는 0임
	pq.push({ 0,start }); // 거리, 현재 노드

	while (pq.size()) {
		int here_cost = pq.top().first;
		int u = pq.top().second;
		pq.pop();
		//cout << "PQTOP\n";
		//cout << u << '\n';

		// 느긋한 삭제? -> 불필요한 정점 탐색 X
		// 바로 삭제하지는 않기 때문.
		// dist[u] < here_cost 와 동일함
		if (dist[u] != here_cost) continue;

		for (auto there : adj[u]) { // 현재 노드와 연결된 간선 순회
			int new_cost = here_cost + there.first;
			// 다른 경로가 현재보다 빠르면 완화
			if (new_cost < dist[there.second]) {
				dist[there.second] = new_cost;
				//cout << there.second << " : " << new_cost << '\n';
				pq.push({ new_cost, there.second });
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> V >> E >> K;

	int u, v, w;// u -> v 로 가는 가중치 w
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		// u에서 v로 가는 가중치 w
		adj[u].push_back({ w,v }); 
	}
	dijkstra(K);
	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF) cout << "INF" << '\n';
		else cout << dist[i]<<'\n';
	}
	return 0;
}
#endif // 01

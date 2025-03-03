/* Dijkstra - �ִܰŸ� �˰���
* ����ġ�� �ٸ� �� bfs ��� ���
* 1. ���� ����ġ�� ���� �׷������� ����� �� ������
* 2. �켱����ť�� PQ�� �ִ� �������� �ش����������� �Ÿ��� 
* ���� ���� ������ �߽����� �Ÿ� �迭�� �����Ͽ� �ٽ� ť��
* �ִ� ������ �ݺ��Ͽ� ���������� �Ÿ��迭�� �ϼ��ϴ� �˰���. 
* 3. ���� v���� �Ÿ��� ���Ͽ� �� ª���� ��쿡 �����մϴ�. 
* ��, dist[u] + w(u, v) = dist[v]�� �����Ѵٴ� ���Դϴ�. 
* �� �� ������ �Ͼ�� ���� ��ȭ�� �Ͼ�ٰ� �մϴ�.
* O(ElogE) = O(ElogV) �̴�. E : ����, V : ���
* E <= (V-1)*V = V^2 - V
* O(ElogV^2) = O(2ElogV) = O(ElogV)
*/

#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int INF = 10e9; // �ִ밪 ����
vector<pair<int, int>> adj[20004]; // �׷����� ���� ����Ʈ (����ġ, ����)
vector<int> dist(20004, INF); // �ִ� �Ÿ� �迭
int V, E, K;


void dijkstra(int start) {
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	dist[start] = 0; // �ڽű����� �Ÿ��� 0��
	pq.push({ 0,start }); // �Ÿ�, ���� ���

	while (pq.size()) {
		int here_cost = pq.top().first;
		int u = pq.top().second;
		pq.pop();
		//cout << "PQTOP\n";
		//cout << u << '\n';

		// ������ ����? -> ���ʿ��� ���� Ž�� X
		// �ٷ� ���������� �ʱ� ����.
		// dist[u] < here_cost �� ������
		if (dist[u] != here_cost) continue;

		for (auto there : adj[u]) { // ���� ���� ����� ���� ��ȸ
			int new_cost = here_cost + there.first;
			// �ٸ� ��ΰ� ���纸�� ������ ��ȭ
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

	int u, v, w;// u -> v �� ���� ����ġ w
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		// u���� v�� ���� ����ġ w
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

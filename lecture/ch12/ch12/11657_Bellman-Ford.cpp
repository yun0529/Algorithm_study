/* Bellman-Ford
*  1. �ʱ�ȭ : ��� ��忡�� ��� ��������� �Ÿ��� 0���� �����ϰ�, 
* ������ ������ ���Ѵ�� �ʱ�ȭ
* 2. �ִ� ��� ���� : ��� ������ V-1�� �ݺ��Ͽ� �˻��ϸ� ���� ��ΰ�
* ���� ��κ��� ª�ٸ� �ش� ��η� ��ȭ
* 3. ���� ����Ŭ Ȯ�� : �ִ� ��ΰ� Ȯ���� �Ŀ���, �ٽ� ��� ������ �˻��Ͽ�
* �ִܰ�ΰ� �� ª������ ��ΰ� �ִٸ�, �̴� ���� ����Ŭ�� �����ϴ� ��.
* 
* ���� ����ġ�� �ִ� �׷������� ����ϴ� �ִܰŸ� �˰����̴�. O(VE)
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
	// V - 1�� �ݺ� : ��� ������ ���ϴ� �ּ� ���� Ȯ��
	// ������ �ݺ� + 1ȸ�� ���� ���� ����Ŭ Ȯ��
	for (int i = 0; i < n; i++) {
		for (int here = 1; here <= n; here++) {
			for (auto there : adj[here]) {
				int d = there.second;
				int to = there.first;
				// ���� + ��� < ���������� �Ÿ� -> ��ȭ
				if (dist[here] != INF && dist[here] + d < dist[to]) {
					// ���������� ����� �ٲ�ٸ� q.push�� üũ
					// ���� ���� ���� ����Ŭ�� ã�ƾ� �� �� �ֱ� ����.
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
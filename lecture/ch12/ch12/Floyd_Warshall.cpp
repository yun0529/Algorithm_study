/* Floyd_Warshall
* 모든 쌍 최단거리 알고리즘
* u에서 v로 가는데 경유점을 거치는게 더 빠르다면 완화를 시켜 
* 거리배열을 갱신시켜 나가는 것.이 플로이드 워셜은 모든 쌍 최단거리
* 경로를 구하기도 하고 i, j가 간접적, 직간접적으로 연결되어있는지도 확인할 수 있음.
* 또한 그래프의 지름을 구할 수도 있음. 하지만 시간복잡도가 상당함.
* V의 3제곱. 따라서 이 알고리즘은 문제에서 N 의 크기가 어느정도 작을 때 쓸 수 있음.
* 그래프의 지름이라는 것은 그 해당 그래프내의 최단거리 중에서 최대거리를 뜻함.
* 음의 가중치가 있어도 되지만 음의 가중치가 있는 사이클은 안됨.
* 노드가 1000개 10000개 씩 주어지면 시간 복잡도상 사용하기 어려움.
* 400개 이하만 사용 가능.
*/

#if 0
#include <iostream>
using namespace std;

const int INF = 1e9;
int n, m, a, b, c, dist[104][104];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j) dist[i][j] = 0;
			else dist[i][j] = INF;
		}
	}
	
	for (int i = 0; i < m; i++) {
		cin >> a >> b >> c; // 버스 시작, 도착, 비용
		// dist[a][b] = c;
		dist[a][b] = min(dist[a][b], c);
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				// j로 가는 경로가 있다면 
				if (dist[i][k] != INF && dist[k][j] != INF) {
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
				}
			}
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (dist[i][j] == INF) cout << "0 ";
			else cout << dist[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}

#endif









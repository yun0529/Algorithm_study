/* Floyd_Warshall
* ��� �� �ִܰŸ� �˰���
* u���� v�� ���µ� �������� ��ġ�°� �� �����ٸ� ��ȭ�� ���� 
* �Ÿ��迭�� ���Ž��� ������ ��.�� �÷��̵� ������ ��� �� �ִܰŸ�
* ��θ� ���ϱ⵵ �ϰ� i, j�� ������, ������������ ����Ǿ��ִ����� Ȯ���� �� ����.
* ���� �׷����� ������ ���� ���� ����. ������ �ð����⵵�� �����.
* V�� 3����. ���� �� �˰����� �������� N �� ũ�Ⱑ ������� ���� �� �� �� ����.
* �׷����� �����̶�� ���� �� �ش� �׷������� �ִܰŸ� �߿��� �ִ�Ÿ��� ����.
* ���� ����ġ�� �־ ������ ���� ����ġ�� �ִ� ����Ŭ�� �ȵ�.
* ��尡 1000�� 10000�� �� �־����� �ð� ���⵵�� ����ϱ� �����.
* 400�� ���ϸ� ��� ����.
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
		cin >> a >> b >> c; // ���� ����, ����, ���
		// dist[a][b] = c;
		dist[a][b] = min(dist[a][b], c);
	}

	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				// j�� ���� ��ΰ� �ִٸ� 
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









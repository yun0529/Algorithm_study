#if 0
#include <bits/stdc++.h>
using namespace std;

int n, m, arr[1001][1001], visited[1001][1001];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
queue<pair<int, int>> q;

void bfs() {
	int x, y;
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; ++i) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if (arr[ny][nx] == 0 || visited[ny][nx] != 0) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny,nx });
		}
	}
}

int main() {

	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) {
				q.push({ i,j });
				visited[i][j] = 1;
			}
		}
	}
	bfs();
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (visited[i][j] != 0) visited[i][j] -= 1;
			else if (visited[i][j] == 0 && arr[i][j] == 1) visited[i][j] = -1;
			cout << visited[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
#endif
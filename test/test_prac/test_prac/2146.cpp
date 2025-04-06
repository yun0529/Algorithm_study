#if 0
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n;
int arr[104][104], map[104][104], visited[104][104];

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void dfs(int y, int x, int num);
int bfs(int y, int x, int num) {
	queue<pair<int, int>> q;
	q.push({ y,x });
	visited[y][x] = 1;
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		if (map[y][x] != 0 && map[y][x] != num) {
			return visited[y][x];
		}
		for (int i = 0;i < 4;i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
			if (map[ny][nx] != 0 || map[ny][nx] == num) continue;
			visited[ny][nx] = visited[y][x] + 1;
		}
	}
	return -1;
}


int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> arr[i][j];
		}
	}
	int num = 1;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (map[i][j] != 0) continue; // ¼¶ ¹øÈ£ ÇÒ´ç
			dfs(i, j, num++);
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (arr[i][j] == 0) continue;
			bfs(i, j, map[i][j]);
		}
	}

	return 0;
}

void dfs(int y, int x, int num) {
	map[y][x] = num;
	for (int i = 0;i < 4;i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if (map[ny][nx] != 0 && arr[ny][nx] == 0) continue;
		dfs(ny, nx, num);
	}
}

#endif
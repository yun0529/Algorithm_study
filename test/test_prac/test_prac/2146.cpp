#if 01
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, mn = INT32_MAX;
int arr[104][104], map[104][104], visited[104][104];

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void dfs(int y, int x, int num);
int bfs(int y, int x, int num);
void showInfo();
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
			if (arr[i][j] == 0 || (arr[i][j] != 0 && map[i][j] != 0)) continue; // 섬 번호 할당
			dfs(i, j, num++);
		}
	}
	//showInfo();

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			if (map[i][j] == 0) continue;
			fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
			int birdge = bfs(i, j, map[i][j]);
			mn = min(mn, birdge);
			//cout << i<<" : "<<j << " = "<< birdge << '\n';
		}
	}
	cout << mn;
	return 0;
}

void dfs(int y, int x, int num) {
	map[y][x] = num;
	for (int i = 0;i < 4;i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if (map[ny][nx] != 0 || arr[ny][nx] == 0) continue;
		dfs(ny, nx, num);
	}
}
int bfs(int y, int x, int num) {
	queue<pair<int, int>> q;
	q.push({ y,x });
	visited[y][x] = 1;
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		if (map[y][x] != 0 && map[y][x] != num) { // 다른 번호 섬이면 종료
			return visited[y][x] - 2;
		}
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
			if (map[ny][nx] == num || visited[ny][nx] != 0) continue; // 같은 섬이면
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny,nx });
		}
	}
	return INT32_MAX;
}
void showInfo() {
	cout << "------------------------------\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << map[i][j] << ' ';
		}cout << '\n';
	}
}

#endif
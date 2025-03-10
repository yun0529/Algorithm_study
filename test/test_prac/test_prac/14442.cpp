#if 01
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m,k, arr[1004][1004], visited[14][1004][1004], ret = 2e9;

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void printVisited() {
	for (int k = 0; k < 2; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << visited[k][i][j] << ' ';
			}cout << '\n';
		}
		cout << "-------------------\n";
	}

}
void bfs(int x, int y) {
	visited[k][y][x] = 1;
	queue<pair<pair<int, int>,int>> q;
	q.push({ { x,y }, k });

	while (q.size()) {
		tie(y, x) = q.front().first; // 좌표
		int cnt = q.front().second; // 벽 부수기 남은 횟수
		q.pop();
		if (y == n - 1 && x == m - 1) {
			//printVisited();
			ret = min(ret, visited[cnt][y][x]);
			break;
		}
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (visited[cnt][ny][nx] != 0) continue;
			if (arr[ny][nx] == 1 && cnt == 0) continue; // 벽 있는데 횟수 모두 사용한 경우
			else if (arr[ny][nx] == 1 && cnt > 0) { // 벽 부술 수 있는 경우
				visited[cnt-1][ny][nx] = visited[cnt][y][x] + 1; // 이전 visited + 1벽 깬 경우로 가져옴
				q.push({ { ny, nx },cnt - 1 });
			}
			else { // 벽 아닌 경우
				visited[cnt][ny][nx] = visited[cnt][y][x] + 1; 
				q.push({ { ny, nx },cnt });
			}
				
		}
		//printVisited();
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m>>k;
	char a;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a;
			arr[i][j] = a - '0';
		}
	}
	visited[1][0][0] = 1; visited[0][0][0] = 1;
	bfs(0, 0); // y, x, cnt(벽 부수기 남은 횟수)
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		cout << visited[i][j] << ' ';
	//	}cout << '\n';
	//}
	if (ret == 2e9)cout << -1;
	else cout << ret;
	return 0;
}
#endif // queue node에 좌표, 벽 부수기 남은 횟수 설정 -> 해결
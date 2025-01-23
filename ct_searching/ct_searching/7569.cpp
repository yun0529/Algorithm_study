#if 0
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int m, n, h, mx, cnt;
int arr[104][104][104], visited[104][104][104];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
int dz[] = { 0,1,-1 };

queue<tuple<int,int,int>> q;

void bfs() {
	while (q.size()) {
		auto ft = q.front();
		int z = get<0>(ft);
		int y = get<1>(ft);
		int x = get<2>(ft);
		q.pop();
		//cout << z << ", " << y << ", " << x << '\n';
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 4; ++j) {
				if (i == 0) {
					int nz = z + dz[i];
					int ny = y + dy[j];
					int nx = x + dx[j];
					if (ny < 0 || nx < 0 || nz < 0 || ny >= n || nx >= m || nz >= h) continue;
					if (visited[nz][ny][nx] != 0 || arr[nz][ny][nx] != 0) continue; // 방문 or 안익은 토마토 아니면
					visited[nz][ny][nx] = visited[z][y][x] + 1;
					mx = max(mx, visited[nz][ny][nx] - 1);
					q.push({ nz, ny, nx });
					cnt--;
				}
				else {
					int nz = z + dz[i];
					int ny = y;
					int nx = x;
					if (ny < 0 || nx < 0 || nz < 0 || ny >= n || nx >= m || nz >= h) continue;
					if (visited[nz][ny][nx] != 0 || arr[nz][ny][nx] != 0) continue; // 방문 or 안익은 토마토 아니면
					visited[nz][ny][nx] = visited[z][y][x] + 1;
					mx = max(mx, visited[nz][ny][nx] - 1);
					q.push({ nz, ny, nx });
					cnt--;
				}
				
			}
		}

	}
	
}

int main() {

	cin >> m >> n >> h;
	for (int i = 0; i < h; ++i) {
		for (int j = 0; j < n; ++j) {
			for (int k = 0; k < m; ++k) {
				cin >> arr[i][j][k];
				if (arr[i][j][k] == 1) {
					q.push({ i,j,k });
					visited[i][j][k] = 1;
				}
				else if (arr[i][j][k] == 0) cnt++;
			}
		}
	}
	//cout <<cnt<< '\n';
	bfs();
	//cout << cnt << '\n';
	//for (int i = 0; i < h; ++i) {
	//	for (int j = 0; j < n; ++j) {
	//		for (int k = 0; k < m; ++k) {
	//			cout << visited[i][j][k] << ' ';
	//		}
	//		cout << '\n';
	//	}
	//}
	if (cnt != 0) cout << -1;
	else cout << mx;

	return 0;
}
#endif

//#include <bits/stdc++.h>
//using namespace std;
//
//int nodeList[] = { 10,12,14,16,18,20,22,24 };
//int dy[4] = { -1,0,1,0 };
//int dx[4] = { 0,1,0,-1 };
//int n, m, arr[104][104], visited[104][104], x, y, nx, ny, sx, sy, ex, ey;
//
//int main() {
//
//	cin >> n >> m;
//	cin >> sy >> sx >> ey >> ex;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	queue<pair<int,int>> q;
//	visited[sy][sx] = 1; // visited = 1은 꼭 하기 -> 양방향 간선인 경우 방어 처리가 안돼있으면 부가적인 로직 처리를 추가로 해줘야함.
//	q.push({ sy,sx });
//	while (q.size()) {
//		tie(y,x) = q.front();
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			ny = y + dy[i];
//			nx = x + dx[i];
//			if (ny < 0 || ny >= n || nx < 0 || nx >= m || arr[ny][nx] == 0)continue;
//			if (visited[ny][nx]) continue;
//			visited[ny][nx] = visited[y][x] + 1;
//			q.push({ ny,nx });
//		}
//	}
//	cout << visited[ey][ex] << '\n';
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout << visited[i][j] << ' ';
//		}
//		cout << "\n";
//	}
//	return 0;
//}
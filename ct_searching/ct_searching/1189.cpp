//#include <iostream>
//using namespace std;
//
//int r, c, k, visited[6][6], ret;
//char arr[6][6];
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//
//void dfs(int y, int x, int cnt) {
//	cnt++;
//	if (cnt == k) {
//		if (y == 0 && x == c - 1) {
//			ret++;
//		}
//		//for (int i = 0; i < r; i++) {
//		//	for (int j = 0; j < c; j++) {
//		//		cout<< visited[i][j] <<' ';
//		//	}
//		//	cout << '\n';
//		//}
//		//cout << "===\n";
//		return;
//	}
//	visited[y][x] = 1;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//
//		if (ny < 0 || nx < 0 || ny >= r || nx >= c)continue;
//		if (visited[ny][nx] || arr[ny][nx] == 'T')continue;
//		dfs(ny, nx, cnt);
//		visited[ny][nx] = 0;
//	}
//}
//
//int main() {
//
//	cin >> r >> c >> k;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	dfs(r - 1, 0, 0);
//	cout << ret;
//
//	return 0;
//}
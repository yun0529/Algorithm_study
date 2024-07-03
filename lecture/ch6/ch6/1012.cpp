//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, k, ret, y, x, a, ny, nx;
//int arr[51][51];
//bool visited[51][51];
//
//
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//
//void dfs(int y, int x) {
//	visited[y][x] = 1;
//	for (int i = 0;i < 4;i++) {
//		ny = y + dy[i];
//		nx = x + dx[i];
//
//		if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
//		if (arr[ny][nx] == 1 && !visited[ny][nx]) {
//			dfs(ny, nx);
//		}
//	}
//	return;
//}
//
//int main() {
//
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> a;
//	while (a--) {
//		fill(&arr[0][0], &arr[0][0] + 51 * 51, 0);
//		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
//	
//		ret = 0;
//		cin >> m >> n >> k;
//		for (int i = 0; i < k;i++) {
//			cin >> x >> y;
//			arr[y][x] = 1;
//		}
//		for (int i = 0;i < n;i++) {
//			for (int j = 0;j < m;j++) {
//				if (arr[i][j] == 1 && !visited[i][j]) {
//					dfs(i, j);
//					ret++;
//				}
//			}
//		}
//		cout << ret<<'\n';
//	}
//	
//
//	return 0;
//}
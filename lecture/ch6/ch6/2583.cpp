//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, k, arr[101][101], visited[101][101], ret = 0, width[10004] = { 0, };
//int dy[] = { -1,0,1,0 };
//int dx[] = { 0,1,0,-1 };
//
//void dfs(int y, int x, int cnt) {
//	visited[y][x] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//
//		if (ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
//		if (arr[ny][nx] == 1 && !visited[ny][nx]) {
//			//cout << ny << " : " << nx << " 넓이 추가\n";
//			dfs(ny, nx, cnt);
//			width[cnt]++;
//		}
//	}
//
//	return;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> m >> n >> k;
//	fill(&arr[0][0], &arr[0][0] + 101 * 101, 1);
//	for (int i = 0; i < k; i++) {
//		int x1, x2, y1, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//		for (int r = y1; r < y2; r++) {
//			for (int t = x1; t < x2; t++) {
//				arr[r][t] = 0;
//			}
//		}
//	}
//	//cout << '\n';
//	////for (int i = m-1; i >= 0; i--) {
//	//for (int i = 0; i < m; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		/*if (arr[i][j] == 1 && !visited[i][j]) {
//	//			dfs(i, j);
//	//		}*/
//	//		cout << arr[i][j] << " ";
//	//	}
//	//	cout << '\n';
//	//}
//	//cout << '\n';
//	for (int i = 0; i < m; i++) {
//		for (int j = 0; j < n; j++) {
//			if (arr[i][j] == 1 && !visited[i][j]) {
//				//cout << i << " : " << j << " 시작\n";
//				width[ret]++;
//				dfs(i, j,ret);
//				ret++;
//				//cout << '\n';
//			}
//			//cout << arr[i][j] << " ";
//			
//		}
//	}
//	cout << ret << '\n';
//	sort(&width[0], &width[0] + ret);
//	for (int i = 0; i < ret; i++) {
//		cout << width[i] << " ";
//	}
//
//
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[101][101], visited[101][101], n, ret = 0, cnt = 0;;
//
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//
//void dfs(int y, int x, int k) {
//	visited[y][x] = 1;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//
//		if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
//		if (arr[ny][nx] > k && !visited[ny][nx]) {
//			dfs(ny, nx, k);
//			//if (arr[ny][nx] <= n) {
//			//	//cout << ny << " : " << nx << " " << arr[ny][nx] << " °¡ ¹°¿¡ Àá±è" << "\n";
//			//	arr[ny][nx] = 0;
//			//}
//		}
//		
//	}
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	for (int k = 0; k < 101; k++) {
//		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
//		cnt = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (arr[i][j] > k && !visited[i][j]) {
//					cnt++;
//					dfs(i, j, k);
//				}
//			}
//		}
//		ret = max(ret, cnt);
//	}
//	
//	//fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
//	//for (int i = 0; i < n; i++) {
//	//	for (int j = 0; j < n; j++) {
//	//		if (arr[i][j] != 0 && !visited[i][j]) {
//	//			ret++;
//	//			dfs(i, j);
//	//		}
//	//		
//	//	}
//	//}
//	cout << ret;
//	return 0;
//}
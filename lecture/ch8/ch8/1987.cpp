//#include <bits/stdc++.h>
//using namespace std;
//
//int r, c, visited[24][24], cnt = 0, alp[27], ret = 0;
//int dx[] = { 0,1,0,-1 };
//int dy[] = { -1,0,1,0 };
//
//char arr[24][24];
////bool flag = false;
//string str = "";
//
//void dfs(int y, int x, int value) {
//	//visited[y][x] = 1;
//	bool flag = false;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny >= r || nx >= c || ny < 0 || nx < 0) continue;
//		//char nextA = arr[ny][nx];
//		if (alp[arr[ny][nx] - 'A']) continue;
//
//		flag = true;
//		alp[arr[ny][nx] - 'A'] = 1;
//		dfs(ny, nx, value + 1);
//		alp[arr[ny][nx] - 'A'] = 0;
//	}
//	if (!flag) {
//		ret = max(ret, value);
//		//for (int i = 0; i < 26; i++) {
//		//	cout << alp[i] << ' ';
//		//}cout << '\n';
//		return;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> r >> c;
//
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	alp[arr[0][0] - 'A'] = 1;
//	dfs(0, 0, 1);
//
//	cout << ret;
//	return 0;
//}
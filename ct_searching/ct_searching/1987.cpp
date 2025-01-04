//#include <iostream>
//using namespace std;
//
//int r, c, visited[27], mx;
//char arr[21][21];
//
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//
//void go(int y, int x, int cnt) {
//	int flag = false;
//	visited[arr[y][x] - 'A'] = 1;
//	cnt++;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//
//		if (ny < 0 || nx < 0 || ny >= r || nx >= c)continue;
//		if (visited[arr[ny][nx] - 'A'])continue;
//		flag = true;
//		go(ny, nx, cnt);
//		visited[arr[ny][nx] - 'A'] = 0;
//	}
//	if (!flag) {
//		int ret = 0;
//		//for (int i = 0; i < 26; i++) {
//		//	//if (visited[i])ret++;
//		//	cout<< visited[i]<<' ';
//		//}
//		//cout << '\n';
//		mx = max(mx, cnt);
//	}
//}
//
//int main() {
//
//	cin >> r >> c;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	go(0, 0, 0);
//	cout << mx;
//	return 0;
//}
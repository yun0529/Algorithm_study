//#include<iostream>
//using namespace std;
//
//int n, m, arr[1004][1004], x, y, retx, rety, idx;
//int dy[] = { 1, 0, -1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//
//int main() {
//
//	cin >> n >> m;
//	int cnt = 1, wall = 1;
//	for (int i = n*n; i >= 1; i--) {
//		arr[y][x] = i;
//		if (i == m) {
//			rety = y;
//			retx = x;
//		}
//		if (y + dy[idx] < 0 || y + dy[idx] >= n || x + dx[idx] < 0 || x + dx[idx] >= n) {
//			idx = (idx + 1) % 4;
//		}
//		if(arr[y+dy[idx]][x + dx[idx]]) idx = (idx + 1) % 4;
//		y = y + dy[idx];
//		x = x + dx[idx];
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//	cout << rety + 1<< ' ' << retx + 1;
//	return 0;
//}
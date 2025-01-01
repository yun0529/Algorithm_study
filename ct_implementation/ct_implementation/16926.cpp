//#include <iostream>
//using namespace std;
//
//int n, m, arr[304][304], r;
//int radi[304];
//
//int dy[] = { 0, 1, 0, -1 };
//int dx[] = { 1, 0, -1, 0 };
//
//int main() {
//
//	cin >> n >> m >> r;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	int w = m, h = n;
//	for (int i = 0; i < n / 2; i++) {
//		if (h <= 1 || w <= 1) {
//			radi[i] = 0;
//			break;
//		}
//		radi[i] = 2 * h + 2 * w - 4;
//		h -= 2; w -= 2;
//	}
//
//	for (int i = 0; i < n / 2; i++) {
//		int roll = r % radi[i]; // 결과적으로 몇번 회전할지
//		int cnt = 0;
//		while (cnt <= roll) {
//			int x = i, y = i, dir = 0; // 회전은 왼쪽 상단부터
//			int tmp = arr[y][x];
//			for (int j = 0; j < radi[i]; j++) {
//
//				int nx = x + dx[dir];
//				int ny = y + dy[dir];
//
//				if (nx >= m - i || ny >= n - i || nx < 0 || ny < 0) {
//					dir = (dir + 1) % 4;
//				}
//				arr[y][x] = arr[ny][nx];
//				y = ny;
//				x = nx;
//			}
//			arr[i + 1][i] = tmp;
//			for (int i = 0; i < n; i++) {
//				for (int j = 0; j < m; j++) {
//					cout << arr[i][j] << ' ';
//				}
//				cout << '\n';
//			}
//			cnt++;
//		}
//		
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cout<< arr[i][j]<<' ';
//		}
//		cout << '\n';
//	}
//
//	return 0;
//}
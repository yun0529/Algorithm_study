//#include <iostream>
//#include <vector>
//using namespace std;
//
//int arr[20][20];
//
//// (À§, ¾Æ·¡), (ÁÂ, ¿ì), (ÁÂ ´ë)
//vector<int> dy[] = { {1, -1}, {0, 0}, {1, -1}, {1, -1} };
//vector<int> dx[] = { {0, 0}, {1, -1}, {-1, 1}, {1, -1} };
//
//int go(int y, int x,int di1, int di2, int ans) {
//	if (ans > 5) {
//		return 987654321;
//	}
//	int ny = y + dy[di1][di2];
//	int nx = x + dx[di1][di2];
//
//	if (ny < 0 || nx < 0 || ny >= 19 || nx >= 19) return ans;
//	if (arr[y][x] == arr[ny][nx]) ans = go(ny, nx, di1,di2,ans + 1);
//
//	return ans;
//}
//
//int search_col(int y, int x) {
//	int cnt = 0;
//
//	for (int i = 0; i < 4; i++) {
//		int ret = 1;
//		for (int j = 0; j < 2; j++) {
//			int ny = y + dy[i][j];
//			int nx = x + dx[i][j];
//
//			if (ny < 0 || nx < 0 || ny >= 19 || nx >= 19) continue;
//			if(arr[y][x] == arr[ny][nx]) ret += go(ny, nx, i, j, 1);
//		}
//		if (ret == 5) {
//			cnt = arr[y][x];
//			break;
//		}
//	}
//	return cnt;
//}
//
//int retx = 987654321, rety = 987654321, col;
//
//int main() {
//
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < 19; i++) {
//		for (int j = 0; j < 19; j++) {
//			if (arr[i][j] == 0) continue;
//			int a = search_col(i, j);
//			//cout <<"------------------\n" << a << ' ';
//
//			if (a != 0) {
//				if (retx > j) {
//					retx = j;
//					rety = i;
//					col = arr[i][j];
//				}
//			}
//		}
//	}
//	//cout << '\n';
//	if (col != 0) cout << col << '\n' << rety + 1 << ' ' << retx + 1;
//	else cout << 0;
//	return 0;
//}
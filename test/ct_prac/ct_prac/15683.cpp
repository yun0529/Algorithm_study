#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, visited[10][10], mn = INT32_MAX;
char arr[10][10];
vector<pair<int, int>> cctv;
// 각 cctv 번호가 볼 수 있는 방향 설정
// combi로 가능한 방향 반환?
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0, -1 };


//int cctv1[] = { 0,1,2,3 };
//int cctv2[][2] = {{0,2},{1,3}};
//int cctv3[][2] = { {0,1},{1,2},{1,3} };
//int cctv4[][3] = { {0,1,2},{0,1,3},{0,2,3},{1,2,3} };
//int cctv5[][4] = { {0,1,2,3} };

void search(int y, int x, int d) {
	d = d % 4;
	int ny = y, nx = x;
	while (true) {
		ny += dy[d];
		nx += dx[d];

		if (nx < 0 || ny < 0 || ny >= n || nx >= m) break;
		if (arr[ny][nx] == '6') break;
		if (arr[ny][nx] == '0') arr[ny][nx] = '#';
	}
	return;
}
//void search_clear(int y, int x, int d) {
//	d = d % 4;
//	while (true) {
//		int ny = y + dy[d];
//		int nx = x + dx[d];
//
//		if (nx < 0 || ny < 0 || ny >= n || nx >= m) break;
//		if (arr[ny][nx] == '6') break;
//		if (arr[ny][nx] == '#') arr[ny][nx] = '0';
//	}
//	return;
//}

void go(int cnt) {
	// visited[y][x] = 1;
	if (cnt == cctv.size()) {
		int ret = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (arr[i][j] == '0') ret++;
			}
		}
		if (mn > ret) mn = ret;
		return;
	}
	char tmp[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tmp[i][j] = arr[i][j];
		}
	}
	for (int k = cnt; k < cctv.size();k++) {
		for (int i = 0; i < 4; i++) {
			int y = cctv[k].first;
			int x = cctv[k].second;

			if (arr[y][x] == '1') {
				search(y, x, i);
			}
			else if (arr[y][x] == '2') {
				search(y, x, i);
				search(y, x, i + 2);
			}
			else if (arr[y][x] == '3') {
				search(y, x, i);
				search(y, x, i + 1);
			}
			else if (arr[y][x] == '4') {
				search(y, x, i);
				search(y, x, i + 1);
				search(y, x, i + 2);
			}
			else if (arr[y][x] == '5') {
				search(y, x, i);
				search(y, x, i + 1);
				search(y, x, i + 2);
				search(y, x, i + 3);
			}
			go(k+1);
			for (int j = 0; j < n; j++) {
				for (int r = 0; r < m; r++) {
					arr[j][r] = tmp[j][r];
				}
			}
		}
	}
	
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] != '0' && arr[i][j] != '6') cctv.push_back({ i,j });
		}
	}
	go(0);
	cout << mn;
	return 0;
}
#endif
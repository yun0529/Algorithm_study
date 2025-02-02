#if 0
#include <iostream>
using namespace std;

int n, t, mx;
int arr[2][100004], visited[2][100004];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void go(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || nx >= n || ny >= 2) continue;
		if (visitd[ny][nx]) continue;

	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		for (int j = 0; j < 2; ++j) {
			for (int k = 0; k < n; k++) {
				cin >> arr[j][k];
			}
		}
		for (int j = 0; j < 2; ++j) {
			for (int k = 0; k < n; k++) {
				cin >> arr[j][k];
			}
		}
	}

	return 0;
}
#endif // 01

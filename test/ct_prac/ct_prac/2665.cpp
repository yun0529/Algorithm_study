#if 0
#include <iostream>
#include <queue>
using namespace std;

int n, arr[54][54], mn = INT32_MAX;
int dist[54][54];
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q; // ÁÂÇ¥, ¹Ù²Û Ä­ ¼ö

int dy[] = { -1, 0, 1, 0 };
int dx[] = { 0, 1, 0, -1 };

void bfs() {
	q.push({ 0, { 0,0 } });
	dist[0][0] = 0;
	while (q.size()) {
		int y = q.top().second.first;
		int x = q.top().second.second;
		int cnt = q.top().first;
		q.pop();
		if (y == n - 1 && x == n - 1) {
			mn = min(mn, cnt);
			break;
		}
		if (dist[y][x] < cnt) continue;
		for (int i = 0;i < 4;i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
			int ncnt = cnt;
			if (arr[ny][nx] == 0) ncnt = cnt + 1;			
			if (ncnt < dist[ny][nx]) {
				dist[ny][nx] = ncnt;
				q.push({ ncnt, {ny,nx} });
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> n;
	char c;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cin >> c;
			arr[i][j] = c - '0';
		}
	}
	//for (int i = 0;i < n;i++) {
	//	for (int j = 0;j < n;j++) {
	//		cout << arr[i][j]<<	" ";
	//	}
	//	cout << '\n';
	//}
	fill(&dist[0][0], &dist[0][0] + 54 * 54, INT32_MAX);
	bfs();
	if (mn == INT32_MAX) cout << 0;
	else cout << mn;

	return 0;
}
#endif // 01

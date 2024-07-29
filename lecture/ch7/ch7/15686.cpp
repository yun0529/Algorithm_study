#include <bits/stdc++.h>
using namespace std;

int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};

int arr[54][54], visited[54][54], n, m;
vector<int> v;
queue <pair< int, int >> q;



int go(int y, int x, int f) { // bfs
	visited[y][x] = 1;
	q.push({ y,x });

	while (q.size()) {
		//cout << "t";
		tie(y, x) = q.front(); q.pop();

		for (int i = 0; i < 4; i++) {

			int ny = y + dy[i];
			int nx = x + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
			if (visited[ny][nx]) continue;
			//for(auto i : )
			visited[ny][nx] = visited[y][x] + 1;
			if (arr[ny][nx] == f) return visited[ny][nx];
			//go(ny, nx);
			q.push({ ny, nx });
		}
	}
}
int dist = 10000000;

int main() { // 최대 범위 : 50 * 50 = 2500, 2500C13 이 최대다.
	// 제한 조건을 따지면 13 C ? * 100 이다. 이러면 대충 1716 * 100 정도가 나오기 때문에 무식하게 풀 수 있다.

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	// 치킨 거리는 집(1)을 기준으로 치킨집(2)까지의 거리
	// 
	/*go(0, 1);
	cout << visited[4][3] - visited[0][1] <<'\n';*/

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
			if (arr[i][j] == 1) {
				dist = min(dist,go(i, j, 2));
			}
			else if (arr[i][j] == 2) {
				dist = min(dist, go(i, j, 1));
			}
			//cout << visited[i][j] << ' ';
		}
		//cout << "\n";
	}
	cout << dist;
	return 0;
}
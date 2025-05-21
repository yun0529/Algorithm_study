#if 0
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> v;
vector<int> select_seat;
vector<vector<pair<int,int>>> dp;
char arr[26][26];
bool visited[26][26];
bool check[26][26];
int ret;
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

/*
* void dfs(int y, int x, int scnt, int ycnt) {
	visited[y][x] = true;
	if (ycnt >= 4) return;
	if (scnt + ycnt == 7) {
		ret++;
		for (int i = 0;i < 5;i++) {
			for (int j = 0;j < 5;j++) {
				cout << visited[i][j];
			}
			cout << '\n';
		}
		return;
	}
	for (int i = 0;i < 4;i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
		if (visited[ny][nx]) continue;
		if (arr[ny][nx] == 'Y') {
			dfs(ny, nx, scnt, ycnt + 1);
		}
		else {
			dfs(ny, nx, scnt + 1, ycnt);
		}
		visited[ny][nx] = false;
	}
}

*/
int cnt;
void dfs(int y, int x) {
	visited[y][x] = true;
	cnt++;
	for (int i = 0;i < 4;i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		
		if (ny < 0 || nx < 0 || ny >= 5 || nx >= 5) continue;
		if (visited[ny][nx] || !check[ny][nx]) continue;
		dfs(ny, nx);
	}
}

vector<pair<int, int>> yx;

void combi(int start, vector<int> b) {
	if (b.size() == 7) {
		int scnt = 0, ycnt = 0;
		/*fill(&check[0][0], &check[0][0] + 26 * 26, false);*/
		for (int itet : b) {
			if (arr[yx[itet].first][yx[itet].second] == 'S') scnt++;
			else ycnt++;
		}
		if (scnt >= 4) {
			cnt = 0;
			fill(&visited[0][0], &visited[0][0] + 26 * 26, false);
			dfs(yx[b[0]].first, yx[b[0]].second);
			if (cnt == 7) {
				ret++;

			}

		}
		return;
	}
	for (int i = start + 1;i < 25;i++) {
		b.push_back(i);
		check[yx[i].first][yx[i].second] = true;
		combi(i, b);
		b.pop_back();
		check[yx[i].first][yx[i].second] = false;
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	for (int i = 0;i < 5;i++) {
		for (int j = 0;j < 5;j++) {
			cin >> arr[i][j];
			yx.push_back({ i,j });
		}
	}

	//for (int i = 0;i < 5;i++) {
	//	for (int j = 0;j < 5;j++) {
	//		fill(&visited[0][0], &visited[0][0] + 26 * 26, false);
	//		if (arr[i][j] == 'Y') {
	//			dfs(i, j,0,1);
	//		}
	//		else {
	//			dfs(i, j, 1, 0);
	//		}
	//	}
	//}
	vector<int> b;
	combi(-1, b);
	cout << ret;

	return 0;	
}
#endif
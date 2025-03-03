#if 0
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m, arr[1004][1004], visited[1004][1004], ret = 2e9;
int tmp_visited[1004][1004];

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void init_visted() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tmp_visited[i][j] = visited[i][j];
		}
	}
}
void printVisited(int temp_visited[][1004]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << temp_visited[i][j] << ' ';
		}cout << '\n';
	}
}
void bfs(int x, int y, int cnt, int temp_visited[][1004]) {
	//visited[y][x] = 1;
	queue<pair<int,int>> q;
	q.push({ x,y });

	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		if (y == n - 1 && x == m - 1) {
			ret = min(ret, temp_visited[y][x]);
			//cout << "--------ret-----------\n";
			//printVisited(temp_visited);
			//cout << "--------ret-----------\n";
			break;
		}
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (temp_visited[ny][nx] != 0) continue;
			if (arr[ny][nx] == 1 && cnt == 1) {
				init_visted(); // ��͸� ���� �ӽ� �迭 �ʱ�ȭ
				tmp_visited[ny][nx] = temp_visited[y][x] + 1;
				bfs(ny, nx, cnt - 1, tmp_visited);
			}
			if(arr[ny][nx] == 1) continue;
			temp_visited[ny][nx] = temp_visited[y][x] + 1;
			

			q.push({ ny, nx });
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	char a;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a;
			arr[i][j] = a - '0';
		}
	}
	visited[0][0] = 1;
	bfs(0, 0, 1, visited); // y, x, cnt(�� �μ��� ���� Ƚ��)
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		cout << visited[i][j] << ' ';
	//	}cout << '\n';
	//}
	if (ret == 2e9)cout << -1;
	else cout << ret;
	return 0;
}
#endif // ��� + bfs -> �ð��ʰ�...

#if 0
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int n, m, arr[1004][1004], visited[2][1004][1004], ret = 2e9;

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void printVisited() {
	for (int k = 0; k < 2; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cout << visited[k][i][j] << ' ';
			}cout << '\n';
		}
		cout << "-------------------\n";
	}

}
void bfs(int x, int y) {
	//visited[y][x] = 1;
	queue<pair<pair<int, int>,int>> q;
	q.push({ { x,y }, 1 });

	while (q.size()) {
		tie(y, x) = q.front().first; // ��ǥ
		int cnt = q.front().second; // �� �μ��� ���� Ƚ��
		q.pop();
		if (y == n - 1 && x == m - 1) {
			//printVisited();
			ret = min(ret, visited[cnt][y][x]);
			break;
		}
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (visited[cnt][ny][nx] != 0) continue;
			if (arr[ny][nx] == 1 && cnt == 0) continue; // �� �ִµ� Ƚ�� ��� ����� ���
			else if (arr[ny][nx] == 1 && cnt == 1) { // �� �μ� �� �ִ� ���
				visited[cnt-1][ny][nx] = visited[cnt][y][x] + 1; // ���� visited + 1�� �� ���� ������
				q.push({ { ny, nx },cnt - 1 });
			}
			else { // �� �ƴ� ���
				visited[cnt][ny][nx] = visited[cnt][y][x] + 1; 
				q.push({ { ny, nx },cnt });
			}
				
		}
		//printVisited();
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	char a;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a;
			arr[i][j] = a - '0';
		}
	}
	visited[1][0][0] = 1; visited[0][0][0] = 1;
	bfs(0, 0); // y, x, cnt(�� �μ��� ���� Ƚ��)
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < m; j++) {
	//		cout << visited[i][j] << ' ';
	//	}cout << '\n';
	//}
	if (ret == 2e9)cout << -1;
	else cout << ret;
	return 0;
}
#endif // queue node�� ��ǥ, �� �μ��� ���� Ƚ�� ���� -> �ذ�
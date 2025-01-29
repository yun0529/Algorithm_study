#if 01
#include <bits/stdc++.h>
using namespace std;

int n, m, arr[24][24], visited[24][24], sec;
int dy[] = { -1,0,1,0 };
int dx[] = { 0,-1,0,1 };

vector<pair<int, int>> fish;
pair<int, int> shark;
pair<int, int> dest;

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y,x });
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		for (int i = 0; i < 4; ++i) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
			if (arr[ny][nx] > arr[shark.first][shark.second] || visited[ny][nx] != 0) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny,nx });
		}
	}
}
bool setDest() { // ����� ����� ã��
	dest = { 10000,10000 };
	int len, i = 0;
	for (auto iter : fish) {
		if (arr[iter.first][iter.second] > arr[shark.first][shark.second]) continue;
		len = abs(shark.first - iter.first) + abs(shark.second - iter.second);
		if (len < dest.first + dest.second) { // �ּ� �Ÿ�
			dest = { iter.first,iter.second };
		}
		else if (len == dest.first + dest.second) { // ���� �Ÿ�
			dest.first = iter.first < dest.first ? iter.first : dest.first;
			dest.second = iter.second < dest.second ? iter.second : dest.second;
		}
		i++;
	}
	if (dest.first == 10000 && dest.second == 10000) return false;
	else {
		fish.erase(fish.begin() + i);
		return true;
	}
}

void printArr() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j]<< ' ';
		}
		cout << '\n';
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> arr[i][j];
			if (arr[i][j] == 9) {
				shark = { i,j };
			}
			else if (arr[i][j] != 0) {
				fish.push_back({ i,j });
			}
		}
	}
	bool flag = false;
	// ����� ��ġ�� �������� bfs�� Ȯ���ϰ� �� ��ġ�� 9�� ����
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			fill(&visited[0][0], &visited[0][0] + n * n, 0);
			if (!setDest()) {
				flag = true; // �� �� �ִ� ��ġ ����.
				break;
			}
			bfs(shark.first, shark.second);
			if (visited[dest.first][dest.second] == 0) // �������� ���ϴ� ��ġ ó��
				arr[dest.first][dest.second] = -1;
			else {
				// ��¥ �����°��� �ٸ��� ������ �� �� �ִ��� ó�� �ʿ�
			}
			sec += visited[dest.first][dest.second];

		}
		if (flag) break;
	}
	cout << sec;
	return 0;
}
#endif
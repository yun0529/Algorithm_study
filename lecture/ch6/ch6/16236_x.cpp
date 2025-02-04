#if 0
#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

int n, m, arr[24][24], visited[24][24], sec, shark_size = 2, shark_eat = 0;
int dy[] = { -1,0,1,0 };
int dx[] = { 0,-1,0,1 };

vector<pair<int, int>> fish;
vector<pair<int, int>> fish_after;
pair<int, int> shark;
pair<int, int> dest;

int bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y,x });
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		if (y == dest.first && x == dest.second) {
			arr[dest.first][dest.second] = 0;
			shark = dest;
			sec += visited[dest.first][dest.second];
			return visited[dest.first][dest.second];
		}
		for (int i = 0; i < 4; ++i) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
			if (arr[ny][nx] > shark_size || visited[ny][nx] != 0) continue;
			visited[ny][nx] = visited[y][x] + 1;
			q.push({ ny,nx });
		}
	}
}
bool setDest() { // ����� ����� ã��
	dest = { 10000,10000 };
	int len, i = 0;
	cout << "shark" << " : " << shark.first << ", " << shark.second << '\n';
	for (auto iter : fish) {
		if (arr[iter.first][iter.second] >= shark_size) continue;
		len = abs(shark.first - iter.first) + abs(shark.second - iter.second);
		if (len < abs(shark.first - dest.first) + abs(shark.second - dest.second)) { // �ּ� �Ÿ�
			dest = { iter.first,iter.second };
		}
		else if (len == abs(shark.first - dest.first) + abs(shark.second - dest.second)) { // ���� �Ÿ�
			
			if (iter.first < dest.first) { // �� ���� ������ ���� -> �¿찡 ª����.
				dest.first = iter.first;
				dest.second = iter.second;
			}
			else if (iter.first == dest.first && iter.second < dest.second) {
				dest.first = iter.first;
				dest.second = iter.second;
			}
		}
		i++;
		//cout << "iter"<<i<<" : " << iter.first << ", " << iter.second << '\n';
	}
	auto f = find(fish.begin(), fish.end(), dest);
	if (f == fish.end()) return false;
	else {
		fish.erase(f);
		return true;
	}
}
bool setAfterDest() { // ����� ����� ã��
	dest = { 10000,10000 };
	int len, i = 0;
	cout << "shark" << " : " << shark.first << ", " << shark.second << '\n';
	for (auto iter : fish_after) {
		if (arr[iter.first][iter.second] >= shark_size) continue;
		len = abs(shark.first - iter.first) + abs(shark.second - iter.second);
		if (len < abs(shark.first - dest.first) + abs(shark.second - dest.second)) { // �ּ� �Ÿ�
			dest = { iter.first,iter.second };
		}
		else if (len == abs(shark.first - dest.first) + abs(shark.second - dest.second)) { // ���� �Ÿ�

			if (iter.first < dest.first) { // �� ���� ������ ���� -> �¿찡 ª����.
				dest.first = iter.first;
				dest.second = iter.second;
			}
			else if (iter.first == dest.first && iter.second < dest.second) {
				dest.first = iter.first;
				dest.second = iter.second;
			}
		}
		i++;
		//cout << "iter"<<i<<" : " << iter.first << ", " << iter.second << '\n';
	}
	auto f = find(fish.begin(), fish.end(), dest);
	if (f == fish.end()) return false;
	else {
		fish.erase(f);
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
				arr[i][j] = 0;
			}
			else if (arr[i][j] != 0) {
				fish.push_back({ i,j });
			}
		}
	}
	bool flag = false;
	// ����� ��ġ�� �������� bfs�� Ȯ���ϰ� �� ��ġ�� 9�� ����
	while (setDest()) {
		cout << "Dest : " << dest.first << ", " << dest.second << '\n';
		fill(&visited[0][0], &visited[0][0] + 24 * 24, 0);
		int s = bfs(shark.first, shark.second);
		if (s == 0) {
			fish_after.push_back(dest);
			continue;
		}
		printArr();
		cout << "sec : " << s << "total_sec : "<<sec<< '\n';
		shark_eat++;
		if (shark_eat == shark_size) { // ��� ũ�� ����
			shark_size++;
			shark_eat = 0;
		}
	}
	if (fish_after.size()) {
		while (setAfterDest()) {
			cout << "Dest : " << dest.first << ", " << dest.second << '\n';
			fill(&visited[0][0], &visited[0][0] + 24 * 24, 0);
			int s = bfs(shark.first, shark.second);
			printArr();
			cout << "sec : " << s << '\n';
			shark_eat++;
			if (shark_eat == shark_size) { // ��� ũ�� ����
				shark_size++;
				shark_eat = 0;
			}
		}
	}

	cout << sec;
	return 0;
}
#endif
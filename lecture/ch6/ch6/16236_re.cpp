#if 0
#include <iostream>
#include <queue>
#include <vector>
#include <tuple>
using namespace std;

int n, m, arr[24][24], visited[24][24], sec, shark_size = 2, shark_eat = 0;
int dy[] = { -1,0,1,0 };
int dx[] = { 0,-1,0,1 };

//vector<pair<int, int>> fish;
//vector<pair<int, int>> fish_after;
pair<int, int> shark;
pair<int, int> dest;

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	q.push({ y,x });
	visited[y][x] = 1;
	while (q.size()) {
		tie(y, x) = q.front();
		q.pop();
		//if (y == dest.first && x == dest.second) {
		//	arr[dest.first][dest.second] = 0;
		//	shark = dest;
		//	sec += visited[dest.first][dest.second];
		//	return visited[dest.first][dest.second];
		//}
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
	bool flag = true;
	//cout << "shark" << " : " << shark.first << ", " << shark.second << ", size : " << shark_size << '\n';
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			// �湮 ����, ��� ũ�⺸�� ŭ, �� ����
			if (visited[i][j] == 0 || arr[i][j] >= shark_size || arr[i][j] == 0) continue; 
			if (flag) { // ù �ʱ�ȭ
				len = visited[i][j] - 1;
				flag = false;
				dest = { i,j };
				continue;
			}
			//len = abs(shark.first - i) + abs(shark.second - j);
			if (len > visited[i][j] - 1) { // �ּ� �Ÿ� ã��
				dest = { i,j };
				len = visited[i][j] - 1;
			}
			else if (len == visited[i][j] - 1) { // ���� �Ÿ�

				if (i < dest.first) { // �� ���� ������ ���� -> �¿찡 ª����.
					dest.first = i;
					dest.second = j;
				}
				else if (i == dest.first && j < dest.second) {
					dest.first = i;
					dest.second = j;
				}
			}
			//i++;
			//cout << "iter"<<i<<" : " << i << ", " << j << '\n';
		}
	}
	if (dest.first == 10000 && dest.second == 10000) return false;
	else return true;
}

void printArr() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << '\n';
	}
}
void printVisit() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << visited[i][j] << ' ';
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
			//else if (arr[i][j] != 0) {
			//	fish.push_back({ i,j });
			//}
		}
	}
	bool flag = false;
	// ����� ��ġ�� �������� bfs�� Ȯ���ϰ� �� ��ġ�� 9�� ����
	while (true) {
		
		fill(&visited[0][0], &visited[0][0] + 24 * 24, 0);
		bfs(shark.first, shark.second);
		if (!setDest()) break;
		//cout << "Dest : " << dest.first << ", " << dest.second << '\n';
		// ��� ��ġ ����, �� ++
		sec += visited[dest.first][dest.second] -1;
		shark = dest;
		arr[dest.first][dest.second] = 0;
		//printArr();
		//cout << "----------\n";
		//printVisit();
		//cout << "sec : " << visited[dest.first][dest.second] << "total_sec : " << sec << '\n';
		shark_eat++;
		if (shark_eat == shark_size) { // ��� ũ�� ����
			shark_size++;
			shark_eat = 0;
		}
	}

	cout << sec;
	return 0;
}
#endif
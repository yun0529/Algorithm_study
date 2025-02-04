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
bool setDest() { // 가까운 물고기 찾기
	dest = { 10000,10000 };
	int len, i = 0;
	bool flag = true;
	//cout << "shark" << " : " << shark.first << ", " << shark.second << ", size : " << shark_size << '\n';
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			// 방문 안함, 상어 크기보다 큼, 빈 공간
			if (visited[i][j] == 0 || arr[i][j] >= shark_size || arr[i][j] == 0) continue; 
			if (flag) { // 첫 초기화
				len = visited[i][j] - 1;
				flag = false;
				dest = { i,j };
				continue;
			}
			//len = abs(shark.first - i) + abs(shark.second - j);
			if (len > visited[i][j] - 1) { // 최소 거리 찾기
				dest = { i,j };
				len = visited[i][j] - 1;
			}
			else if (len == visited[i][j] - 1) { // 같은 거리

				if (i < dest.first) { // 더 위에 있으면 변경 -> 좌우가 짧은것.
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
	// 물고기 위치로 갈때마다 bfs로 확인하고 그 위치를 9로 설정
	while (true) {
		
		fill(&visited[0][0], &visited[0][0] + 24 * 24, 0);
		bfs(shark.first, shark.second);
		if (!setDest()) break;
		//cout << "Dest : " << dest.first << ", " << dest.second << '\n';
		// 상어 위치 설정, 초 ++
		sec += visited[dest.first][dest.second] -1;
		shark = dest;
		arr[dest.first][dest.second] = 0;
		//printArr();
		//cout << "----------\n";
		//printVisit();
		//cout << "sec : " << visited[dest.first][dest.second] << "total_sec : " << sec << '\n';
		shark_eat++;
		if (shark_eat == shark_size) { // 상어 크기 증가
			shark_size++;
			shark_eat = 0;
		}
	}

	cout << sec;
	return 0;
}
#endif
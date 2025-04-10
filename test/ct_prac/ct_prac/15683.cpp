#if 01
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, arr[10][10], visited[10][10];
// 각 cctv 번호가 볼 수 있는 방향 설정
// combi로 가능한 방향 반환?
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0, -1 };

int cctv1[] = { 0,1,2,3 };
int cctv2[][2] = {{0,2},{1,3}};
int cctv3[][2] = { {0,1},{1,2},{1,3} };
int cctv4[][3] = { {0,1,2},{0,1,3},{0,2,3},{1,2,3} };
int cctv5[][4] = { {0,1,2,3} };

void go(int y, int x) {
	visited[y][x] = 1;
	for (int i = 0;i < 4;i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];

		
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	return 0;
}
#endif
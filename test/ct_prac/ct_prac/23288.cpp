#if 0
#include <iostream>
using namespace std;

int n, m, k, ret, cnt, start_y, start_x;
int arr[24][24], dice[6] = { 1,6,3,4,5,2 }; // 위, 아래, 동, 서, 남, 북
int visited[24][24];
int dy[] = { 0,1,0,-1 }; // 동, 남, 서, 북
int dx[] = { 1,0,-1,0 };

void go_east();
void go_west();
void go_north();
void go_south();
void (*roll[4])() = {go_east,go_south,go_west,go_north };

void cnt_go(int y, int x, int b) { // c 갯수 확인
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++) {
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (visited[ny][nx] || arr[ny][nx] != b) continue;
		cnt++;
		cnt_go(ny, nx, b);
	}
	return;
}

int go(int y,int x, int ngo) {
	int next_go = ngo; // 이동 방향
	int c = 0; // 이동 가능한 방향 수
	cnt = 1;
	int ny = y + dy[ngo];
	int nx = x + dx[ngo];
	// 방향 설정 -> 못가면 반대방향으로 가기
	if (ny < 0 || nx < 0 || ny >= n || nx >= m) next_go = (ngo + 2) % 4;
	roll[next_go](); // 주사위 굴리기
	ny = y + dy[next_go];
	nx = x + dx[next_go];
	//cout <<"roll : " << next_go << '\n';
	fill(&visited[0][0], &visited[0][0] + 24 * 24, 0);
	cnt_go(ny, nx, arr[ny][nx]); // c 확인

	c = cnt;
	ret += c * arr[ny][nx];

	if (dice[1] > arr[ny][nx]) next_go = (next_go + 1) % 4;
	else if (dice[1] < arr[ny][nx]) next_go = (next_go + 3) % 4;
	else next_go = next_go;
	//cout << ny << " : " << nx << '\n';
	//cout<<"bottom: "<< dice[1]<<", b: "<<arr[ny][nx] <<", next_roll: " << next_go << '\n';

	// 다음 시작 위치
	start_y = ny;
	start_x = nx;
	return next_go;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	int next_go = 0;
	for (int i = 0; i < k; i++) {
		//cout << "----\n";
		next_go = go(start_y, start_x, next_go); // 0,0 -> 동쪽
		//cout << ret << '\n';
		//cout << "----\n";
	}//cout << '\n';
	cout << ret;

	return 0;
}
void go_east() {
	int tmp = dice[2];
	int rtmp = dice[3];
	dice[2] = dice[0];
	dice[3] = dice[1];
	dice[0] = rtmp;
	dice[1] = tmp;
}
void go_west() {
	int tmp = dice[3];
	int rtmp = dice[2];
	dice[3] = dice[0];
	dice[2] = dice[1];
	dice[0] = rtmp;
	dice[1] = tmp;
}
void go_north() {
	int tmp = dice[5];
	int rtmp = dice[4];
	dice[5] = dice[0];
	dice[4] = dice[1];
	dice[0] = rtmp;
	dice[1] = tmp;
}
void go_south() {
	int tmp = dice[4];
	int rtmp = dice[5];
	dice[4] = dice[0];
	dice[5] = dice[1];
	dice[0] = rtmp;
	dice[1] = tmp;
}
#endif // 01

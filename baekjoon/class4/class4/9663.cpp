#if 0
#include <iostream>
using namespace std;

int arr[20];
int n, ret;

//int dy[] = { -1,0,1,0, -1,1,1,-1 };
//int dx[] = { 0,1,0,-1, 1,1,-1,-1 };

bool checkAble(int y) {
	//if (arr[y][x] == 1) return false;
	for (int i = 0; i < y; i++) {
		// 같은 열 or 대각선 
		if (arr[y] == arr[i] || abs(arr[y] - arr[i]) == abs(y - i)) return false;

		//for (int j = 0; j < 8; j++) {
		//	int ny = y + dy[j]*i;
		//	int nx = x + dx[j]*i;

		//	if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		//	if (arr[ny][nx] == 1) {
		//		//cout <<"check = "<< ny << ":" << nx<<'\n';
		//		return false;
		//	}
		//}
	}
	return true;
}

void go(int y) {

	if (y == n) {
		ret++;
		return;
	}
	
	for (int j = 0; j < n; j++) {
		arr[y] = j;
		if (checkAble(y)) {
			//cout << '.';
			go(y+1);
			//arr[y] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	go(0);

	cout << ret;
	return 0;
}
#endif 
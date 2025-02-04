#if 0
#include <iostream>
using namespace std;

int n, cnt0,cnt1;
int arr[130][130], visited[130][130];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void go(int y, int x, int size) {
	visited[y][x] = 1;
	bool flag = false;
	int col = arr[y][x];
	for (int i = y; i < y+size; i++) {
		for (int j = x; j < x + size; j++) {
			if (col != arr[i][j]) {
				flag = true;
				break;
			}
			if (flag) break;
		}
	}
	if (flag) {
		go(y, x, size / 2);
		go(y, x + size / 2, size / 2);
		go(y + size / 2, x, size / 2);
		go(y + size / 2, x + size / 2, size / 2);
	}
	else {
		if (col == 1)cnt1++;
		else cnt0++;
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	go(0, 0, n);
	cout << cnt0 << '\n' << cnt1;
	return 0;
}

#endif
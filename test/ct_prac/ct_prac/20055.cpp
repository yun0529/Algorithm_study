#if 0
#include <iostream>
#include <vector>
using namespace std;

int n, k, arr[2][104];
bool romap[2][104];
vector<pair<int, int>> robots;

void beltmove() {
	int tmp = arr[1][n - 1];
	arr[1][n-1] = arr[0][n - 1];
	for (int j = n-1;j > 0;j--) {
		arr[0][j] = arr[0][j - 1];
	}
	arr[0][0] = arr[1][0];
	for (int j = 0;j < n - 2;j++) {
		arr[1][j] = arr[1][j + 1];
	}
	arr[1][n - 2] = tmp;
}
void robotmove() {
	for (int i = 0;i < robots.size();i++) {
		if (robots[i].first == 1 && robots[i].second == 0) { // 올림
			if (arr[0][0] >= 1 && !romap[0][0]) {
				romap[0][0] = true; romap[robots[i].first][robots[i].second] = false;
				robots[i].first = 0; robots[i].second = 0;
				arr[0][0]--;
				if (arr[0][0] == 0) k--;
			}
		}
		else if (robots[i].first == 0 && robots[i].second == n-1){// 내림
			if (arr[1][n-1] >= 1 && !romap[1][n-1]) {
				romap[1][0] = true; romap[robots[i].first][robots[i].second] = false;
				robots[i].first = 1; robots[i].second = n-1;
				arr[1][n-1]--;
				if (arr[1][n - 1] == 0) k--;
			}
		}
		else if (robots[i].first == 0) { // ++
			if (arr[robots[i].first][robots[i].second + 1] >= 1 && !romap[robots[i].first][robots[i].second + 1]) {
				romap[robots[i].first][robots[i].second + 1] = true; romap[robots[i].first][robots[i].second] = false;
				robots[i].second++;
				arr[robots[i].first][robots[i].second + 1]--;
				if (arr[robots[i].first][robots[i].second + 1] == 0) k--;
			}
		}
		else { // --
			if (arr[robots[i].first][robots[i].second - 1] >= 1 && !romap[robots[i].first][robots[i].second - 1]) {
				romap[robots[i].first][robots[i].second - 1] = true; romap[robots[i].first][robots[i].second] = false;
				robots[i].second--;
				arr[robots[i].first][robots[i].second - 1]--;
				if (arr[robots[i].first][robots[i].second - 1] == 0) k--;
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> n >> k;

	for (int i = 0;i < 2;i++) {
		for (int j = 0;j < n;j++) {
			cin >> arr[i][j];
		}
	}
	int now = 1;
	while (true) {
		beltmove();
		robotmove();
		if (arr[0][0] >= 1) {
			robots.push_back({ 0,0 }); romap[0][0] = true;
			arr[0][0]--;
			if (arr[0][0] == 0) k--;
		}
		if (k == 0) {
			cout << now;
			break;
		}
		now++;
	}
	return 0;
}
#endif // 01

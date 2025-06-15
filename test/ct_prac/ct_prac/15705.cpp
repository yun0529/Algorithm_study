#if 0
#include <iostream>
using namespace std;

int n, m;
char crr[104][104];
string str;

int dy[] = { -1,0,1,0,-1,1,1,-1 };
int dx[] = { 0,1,0,-1, 1,1,-1,-1 };

bool search(int y, int x) {
	for (int i = 0;i < 8;i++) {
		bool flag = true;
		int ny = y;
		int nx = x;
		//cout << y << ", " << x << '\n';
		for (int j = 1;j < str.length();j++) {
			ny = ny + dy[i];
			nx = nx + dx[i];
			if (ny < 0 || nx < 0 || ny >= n || nx >= m) {
				flag = false;
				break;
			}
			//cout << str[j] << " : " << crr[ny][nx] << "- "<<i << '\n';
			if (str[j] != crr[ny][nx]) {
				flag = false;
				break;
			}
		}
		if (flag) return flag;
	}
	return false;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> str;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> crr[i][j];
		}
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (str[0] == crr[i][j]) {
				if (search(i, j)) {
					cout << 1;
					return 0;
				}
			}
		}
	}
	cout << 0;
	return 0;
}
#endif // 01


#if 0
#include <iostream>
using namespace std;

int n, m;
string crr[104];
string str;

int dy[] = { -1,0,1,0,-1,1,1,-1 };
int dx[] = { 0,1,0,-1, 1,1,-1,-1 };

bool dfs(int y, int x, int cnt, int dir) {
	if (cnt == str.length()) return true;
	int nx = x + dx[dir];
	int ny = y + dy[dir];
	if (nx < 0 || ny < 0 || nx >= m || ny >= n) return false;
	bool flag = false;
	if (crr[ny][nx] == str[cnt]) {
		flag = dfs(ny, nx, cnt + 1, dir);
	}
	return flag;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> str;
	cin >> n >> m;
	for (int i = 0;i < n;i++) {
		string tmp;
		cin >> tmp;
		crr[i] = tmp;
	}

	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			if (str[0] == crr[i][j]) {
				for (int k = 0;k < 8;k++) {
					if (dfs(i, j, 1, k)) {
						cout << 1;
						return 0;
					}
				}
			}
		}
	}
	cout << 0;
	return 0;
}
#endif // 01
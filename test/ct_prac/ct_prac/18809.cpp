#if 01
#include <iostream>
#include <vector>
using namespace std;

int n, m, g, r;
int arr[50][50], visited[50][50];
vector<pair<int, int>> gry, rry, v;

void go(int cnt) {

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m >> g >> r;
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < m;j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 2) {
				v.push_back({ i,j }); // ¹è¾ç¾× »Ñ¸± ¼ö ÀÖ´Â Ä­
			}
		}
	}

	return 0;
}
#endif
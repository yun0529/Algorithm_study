#include <bits/stdc++.h>
using namespace std;

int arr[101][101], visited[101][101], n, m, cnt, ret; // cnt : 녹기전 개수, ret : 녹기까지 걸리는 시간

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			
		}
	}
	return 0;
}
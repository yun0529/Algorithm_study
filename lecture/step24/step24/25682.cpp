#include <bits/stdc++.h>
using namespace std;

int n, m, x;
int arr[1028][1028];
int psum[1028][1028];
int main() { // ´©ÀûÇÕ

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> arr[i][j];
			psum[i][j] = psum[i][j - 1] + arr[i][j];
		}
	}
	int x1, x2, y1, y2;
	for (int i = 0; i < m; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		int sum = 0;
		for (int j = x1; j <= x2; j++) {
			sum += psum[j][y2] - psum[j][y1-1];
		}
		cout << sum << '\n';
	}

	return 0;
}
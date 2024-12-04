//#include<iostream>
//#include<algorithm>
//#include<bits/stdc++.h>
//using namespace std;
//
//int n, arr[11][11], visited[11][11], mn = 987654321, sum;
//
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//
//bool go(int y, int x) {
//	int flag = true;
//	if (visited[y][x]) {
//		flag = false;
//	}
//	visited[y][x] = 1;
//	sum += arr[y][x];
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || nx < 0 || ny >= n || nx >= n) {
//			flag = false;
//			continue;
//		}
//		if (visited[ny][nx]) {
//			flag = false;
//			continue;
//		}
//		visited[ny][nx] = 1;
//		sum += arr[ny][nx];
//	}
//	return flag;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	//fill(&visited[0][0], &visited[0][0] + n * n, 0);
//	for (int i = 0; i < n * n; i++) {
//		for (int j = i; j < n * n; j++) {
//			for (int k = j; k < n * n; k++) {
//				if (i == j || j == k || k == i) continue;
//				if (i / n == 0 || i % n == 0 || i / n == n-1 || i % n == n-1) continue;
//				//cout << i << ' ' << j << ' ' << k<<'\n';
//				//fill(visited, visited + n * n, 0);
//				memset(visited, 0, sizeof(visited)); // 2차원 배열에서는 그냥 memset 을 쓰는게 확실한듯..
//				//fill(&visited[0][0], &visited[0][0] + n * n, 0);
//				bool flag = true;
//				sum = 0;
//				flag = go(i / n, i % n);
//				if (!flag)continue;
//				//for (int r = 0; r < n; r++) {
//				//	for (int t = i; t < n; t++) {
//				//		cout << visited[r][t] << ' ';
//				//	}
//				//	cout << '\n';
//				//}
//				//cout << "---\n";
//				flag = go(j / n, j % n);
//				if (!flag)continue;
//				//for (int r = 0; r < n; r++) {
//				//	for (int t = i; t < n; t++) {
//				//		cout << visited[r][t] << ' ';
//				//	}
//				//	cout << '\n';
//				//}
//				//cout << "---\n";
//				flag = go(k / n, k % n);
//				//go(i / n, i % n) && go(j / n, j % n) && go(k / n, k % n)
//				if (flag) {
//					//cout << i / n << " , " << i % n << " , " << i << '\n';
//					//cout << j / n << " , " << j % n << " , " << j << '\n';
//					//cout << k / n << " , " << k % n << " , " << k << '\n';
//					//cout << sum << '\n';
//					//cout << "============\n";
//					mn = min(mn, sum);
//				}
//			}
//		}
//	}
//	cout << mn;
//	return 0;
//}
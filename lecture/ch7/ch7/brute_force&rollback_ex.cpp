//#include <bits/stdc++.h>
//using namespace std;
//
//const int n = 3;
//int a[3][3] = {
//{10, 20, 21},
//{70, 90, 12},
//{80, 110, 120}
//};
//int visited[3][3];
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//vector<int> v;
//
//void print() {
//	for (int i : v) cout << i << " ";
//	cout << '\n';
//}
//
//void go(int y, int x) {
//	if (y == n - 1 && x == n - 1) { // 2,2 까지 도착한 경우 리턴
//		print();
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
//		if (visited[ny][nx]) continue;
//		visited[ny][nx] = 1;
//		v.push_back(a[ny][nx]); // 방문한 정점 push
//
//		go(ny, nx); // 다음 탐색
//
//		visited[ny][nx] = 0;
//		v.pop_back(); // 원상복구
//
//	}
//}
//
//int main(void) { // 상태값이 그 다음 경우에서에 반영되지 않도록 원상복구 하는것.
//
//	visited[0][0] = 1;
//	v.push_back(a[0][0]);
//	go(0, 0);
//
//	return 0;
//}
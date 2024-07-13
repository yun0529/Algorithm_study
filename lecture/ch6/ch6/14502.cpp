//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[10][10], n,m, visited[10][10], ret;
//vector<pair<int, int>> virusList, wallList;
//
//int dy[] = {-1,0,1,0};
//int dx[] = {0,1,0,-1};
//
//void dfs(int y, int x) {
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//	
//		if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx] || arr[ny][nx]) continue;
//		visited[ny][nx] = 1;
//		dfs(ny, nx); // 바이러스가 퍼저나가는 것 구현한 것임.
//	}
//	return;
//}
//
//int solve() {
//	fill(&visited[0][0], &visited[0][0] + 10 * 10, 0); // visited 초기화
//	for (pair<int, int> b : virusList) {
//		visited[b.first][b.second] = 1;
//		dfs(b.first, b.second);
//	}
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (arr[i][j] == 0 && !visited[i][j]) cnt++; // 0인 구역 카운트
//		}
//	}
//	return cnt;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 2) virusList.push_back({ i,j }); // 바이러스 위치
//			if (arr[i][j] == 0) wallList.push_back({ i,j }); // 벽을 세울 수 있는곳
//		}
//	}
//
//	for (int i = 0; i < wallList.size(); i++) { // 조합 (최대 64C3)
//		for (int j = 0; j < i; j++) {
//			for (int k = 0; k < j; k++) {
//				arr[wallList[i].first][wallList[i].second] = 1;
//				arr[wallList[j].first][wallList[j].second] = 1;
//				arr[wallList[k].first][wallList[k].second] = 1;
//				ret = max(ret, solve()); // 안전구역이 많은 경우 저장
//				arr[wallList[i].first][wallList[i].second] = 0; // 원상복구`
//				arr[wallList[j].first][wallList[j].second] = 0;
//				arr[wallList[k].first][wallList[k].second] = 0;
//			}
//		}
//	}
//
//	cout << ret;
//	return 0;
//}
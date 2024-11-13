//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int n, arr[13][13], visited[13][13];
//
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//priority_queue<int, vector<int>, greater<int>> pq;
////int bfs(int y, int x) {
////	queue<pair<int, int>> q;
////	q.push({ y,x });
////	visited[y][x] = 1;
////	while (q.size()) {
////		tie(y, x) = q.front();
////		q.pop();
////		if (y <= 0 || x <= 0 || y == n - 1 || x == n - 1) return visited[y][x];
////		for (int i = 0; i < 4; i++) {
////			int ny = y + dy[i];
////			int nx = x + dx[i];
////			if (ny < 0 || nx < 0 || ny >= n || nx >= n) {
////				continue;
////			}
////			if (visited[ny][nx] || arr[ny][nx])continue;
////			visited[ny][nx] = visited[y][x] + 1;
////			
////			q.push({ ny, nx });
////		}
////	}
////	return 0;
////}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> n;
//		int sum = 0;
//		vector<pair<int,int>> v;
//		
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> arr[i][j];
//				bool flag = true;
//				int cnt = 0;
//				if (i < n / 2 || j < n / 2) { // 위
//					for (int k = i; k >= 0; k--) {
//						if (arr[k][j]) { // 위로 못가는 경우
//							flag = false;
//							break;
//						}
//					}
//					if (flag) {
//						for (int k = i; k >= 0; k--) {
//							arr[k][j] = 1;
//							cnt++;
//						}
//					}
//				} else if (i < n / 2 || j < n / 2) { // 오른쪽
//					for (int k = i; k >= 0; k--) {
//						if (arr[k][j]) { // 위로 못가는 경우
//							flag = false;
//							break;
//						}
//					}
//					if (flag) {
//						for (int k = i; k >= 0; k--) {
//							arr[k][j] = 1;
//							cnt++;
//						}
//					}
//				}
//
//			}
//		}
//		//for (auto i : v) {
//		//	if (i.first == 0 || i.second == 0 || i.first == n - 1 || i.second == n - 1) continue;
//		//	fill(&visited[0][0], &visited[0][0] + 13 * 13, 0);
//		//	
//		//	sum += bfs(i.first, i.second) - 1;
//
//		//	for (int i = 0; i < n; i++) {
//		//		for (int j = 0; j < n; j++) {
//		//			cout << visited[i][j] <<' ';
//		//		}
//		//		cout << '\n';
//		//	}
//
//		//	cout << "-------- "<<sum<<" -------\n";
//		//}
//		cout << '#' << test_case << ' ' << sum << '\n';
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
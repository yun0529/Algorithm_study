//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, dist = 0;
//char p[54][54];
//int visited[54][54];
//queue<pair<int, int>> q;
////vector<pair<int, int>> v, pList;// 보물이 있을 수 있는 경우의수
//
//int dy[] = { -1,0,1,0 };
//int dx[] = { 0,1,0,-1 };
//
//void bfs(int y, int x) {
//	visited[y][x] = 1;
//	q.push({ y,x });
//	while (q.size()) {
//
//		tie(y, x) = q.front();
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//
//			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
//			if (visited[ny][nx]) continue;
//
//			if (p[ny][nx] == 'L') {
//				visited[ny][nx] = visited[y][x] + 1;
//				q.push({ ny,nx });
//			}
//			dist = max(dist, visited[ny][nx]);
//		}
//	}
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//scanf_s(" %c", &p[i][j]);
//			cin >> p[i][j];
//			//if (p[i][j] == 'L') v.push_back({ i,j });
//		}
//	}
//
//	//for (int i = 0; i < v.size(); i++) {
//	//	for (int j = i + 1; j < v.size(); j++) {
//	//		pList.push_back({ i,j });
//	//	}
//	//}
//
//	//for (auto combi : pList) {
//	//	fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
//	//	bfs(v[combi.first].first, v[combi.first].second);
//	//	dist = max(dist, visited[v[combi.second].first][v[combi.second].second]);
//	//}
//	//cout << dist - 1;
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (p[i][j] == 'L') {
//				fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
//				bfs(i, j);
//			}
//		}
//	}
//	cout << dist -1;
//	return 0;
//}
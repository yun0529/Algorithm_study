// 깊이 우선 탐색
// 
// 하나의 분기에 가장 멀리 있는 노드까지 탐색함
// 방문한 정점은 다시 방문하지 않음
// 
//

//#include <bits/stdc++.h>
//using namespace std;

//DFS(u, adj) {
//	u, visited = 1;
//	for v in adj[u] // 인접 노드를 탐색
//		if(u,visited==0)
//			DFS(u,adj) // 방문한 노드를 재귀적으로 호출
//}

//int n, m, k, y, x, ret, ny, nx, t;
//int a[104][104];
//const int v = 6;
//vector<int> adj[n];
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//int visited[104][104];

//void dfs1(int here) {
//	visited[here] = 1;
//	for (int v : adj[here]) {
//		if (visited[v]) continue;
//		dfs(v);
//	}
//}

//void dfs2(int here) {
//	if (visited[here]) return;
//	visited[here] = 1;
//	for (int v : adj[here]) {
//		dfs(v);
//	}
//}
//
//void dfs(int y, int x) {
//	visited[y][x] = 1;
//	for (int i = 0;i < 4;i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//
//		if (ny < 0 || ny > n || nx < 0 || nx >= n)continue;
//		if (a[ny][nx] == 1 && !visited[ny][nx]) {
//			dfs(ny, nx);
//		}
//	}
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n >> m;
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < m;j++) {
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		for (int j = 0;j < m;j++) {
//			if (a[i][j] == 1 && !visited[i][j]) {
//				ret++;
//				dfs(i, j);
//			}
//		}
//	}
//	cout << ret << "\n";
//	//adj[1].push_back(2);
//	//adj[1].push_back(3);
//	//adj[2].push_back(4);
//	//adj[4].push_back(2);
//	//adj[2].push_back(5);
//	//dfs(1); // root 부터 시작
//
//	return 0;
//}
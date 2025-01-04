//#include<iostream>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int n, m, v, visited[1004];
//vector<int> vec[1004];
//
//void dfs(int here) {
//	cout << here << ' ';
//	visited[here] = 1;
//	for (auto i : vec[here]) {
//		if (visited[i])continue;
//		dfs(i);
//	}
//}
//
//void bfs(int here) {
//	queue<int> q;
//	q.push(here);
//	visited[here] = 1;
//	while (q.size()) {
//		here = q.front();
//		q.pop();
//		cout << here << ' ';
//		for (auto i : vec[here]) {
//			if (visited[i])continue;
//			q.push(i);
//			visited[i] = visited[here] + 1;
//		}
//	}
//	
//}
//
//int main() {
//
//	cin >> n >> m >> v;
//	int a, b;
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b;
//		vec[a].push_back(b);
//		vec[b].push_back(a);
//	}
//	for (int i = 0; i <= n; i++) { // 노드는 0부터 시작안함..
//		sort(vec[i].begin(), vec[i].end());
//	}
//	dfs(v); cout << '\n';
//	memset(visited, 0, sizeof(visited));
//	bfs(v);
//
//	return 0;
//}
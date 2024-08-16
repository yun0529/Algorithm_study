//// BFS
//// BFS는 그래프를 탐색하는 알고리즘이며, 어떤 정점에서 시작해 다음 깊이의 정점으로 이동하기전 현재 깊이의 모든 정점을 탐색하며
//// 방문한 정점은 다시 방문하지 않는 알고리즘이다. 같은 가중치를 가진 그래프에서 최단거리 알고리즘으로 쓰인다.
// 
//// 방문한 정점을 다시 방문하지 않는다.
//// 레밸별로 탐색한다.
//// qeueu를 사용
//// queue에 push하고 front와 연결된 것들을 push하고 가장 앞의 노드를 pop함.
//// 최단거리를 담는 것으로 사용할 수 있음.
//
// BFS(G, u)
//	u.visited = true
//	q.push(u);
//	while (q.size())
//		u = q.front()
//		q.pop()
//		for each v ∈ G.Adj[u]
//			if v.visited == false
//				v.visited = true
//				q.push(v)
// 
//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> adj[100];
//int visited[100];
//int nodeList[] = { 10,12,14,16,18,20,22,24 };
//void bfs(int here) {
//	queue<int> q;
//	//for (int i = 0; i <= 3; i++) { // 여러개에서 시작하는 경우 
//	//	visited[i] = 1;
//	//	q.push(i);
//	//}
//	visited[here] = 1;
//	q.push(here);
//	while (q.size()) {
//		int here = q.front();
//		q.pop();
//		for (int there : adj[here]) { // 인접 리스트, 배열의 노드를 뽑아냄
//			if (visited[there]) continue;
//			visited[there] = visited[here] + 1; // 최단거리를 담는 배열 but. 같은 가중치에서만 사용 가능
//			q.push(there);
//		}
//	}
//}
//int n, m;
//int arr[10][10];
//int main() {
//	//adj[10].push_back(12);
//	//adj[10].push_back(14);
//	//adj[10].push_back(16);
//
//	//adj[12].push_back(18);
//	//adj[12].push_back(20);
//	//
//	//adj[20].push_back(22);
//	//adj[20].push_back(24);
//	//bfs(10);
//
//	//for (int i : nodeList) {
//	//	cout << i << " : " << visited[i] << '\n';
//	//}
//
//	//cout << "10번으로부터 24번까지 최단거리는 : " << visited[24] - 1;
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	queue<int> q;
//	for()
//	return 0;
//}
//// BFS
//// BFS�� �׷����� Ž���ϴ� �˰����̸�, � �������� ������ ���� ������ �������� �̵��ϱ��� ���� ������ ��� ������ Ž���ϸ�
//// �湮�� ������ �ٽ� �湮���� �ʴ� �˰����̴�. ���� ����ġ�� ���� �׷������� �ִܰŸ� �˰������� ���δ�.
// 
//// �湮�� ������ �ٽ� �湮���� �ʴ´�.
//// ���뺰�� Ž���Ѵ�.
//// qeueu�� ���
//// queue�� push�ϰ� front�� ����� �͵��� push�ϰ� ���� ���� ��带 pop��.
//// �ִܰŸ��� ��� ������ ����� �� ����.
//
// BFS(G, u)
//	u.visited = true
//	q.push(u);
//	while (q.size())
//		u = q.front()
//		q.pop()
//		for each v �� G.Adj[u]
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
//	//for (int i = 0; i <= 3; i++) { // ���������� �����ϴ� ��� 
//	//	visited[i] = 1;
//	//	q.push(i);
//	//}
//	visited[here] = 1;
//	q.push(here);
//	while (q.size()) {
//		int here = q.front();
//		q.pop();
//		for (int there : adj[here]) { // ���� ����Ʈ, �迭�� ��带 �̾Ƴ�
//			if (visited[there]) continue;
//			visited[there] = visited[here] + 1; // �ִܰŸ��� ��� �迭 but. ���� ����ġ������ ��� ����
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
//	//cout << "10�����κ��� 24������ �ִܰŸ��� : " << visited[24] - 1;
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
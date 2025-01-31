#if 01
#include <iostream> 
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int V, E, K;
int u, v, w;

vector<pair<int,int>> vec[20004];
priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
queue<int> q;
bool visited[20004];
int len[20004]; // ��� ���� ����

void bfs() {
	int node, value; // ���, ����ġ
	while (pq.size()) {
		node = pq.top().second;
		value = pq.top().first;
		pq.pop();
		//if (node == dest) {
		//	len[node] = min(len[node],value);
		//}
		for (auto iter : vec[node]) {
			if (len[iter.second] > (value + iter.first)) {
				pq.push({ value + iter.first, iter.second });
				len[iter.second] = (value + iter.first);
			}
		}
	}
}

//bool comp(pair<int, int> a, pair<int, int> b) {
//	if (a.first == b.first) return a.second < b.second;
//	else return a.first < b.first;
//}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> V >> E >> K;
	for (int i = 0;i < E;++i) {
		cin >> u >> v >> w;
		vec[u].push_back({ w,v }); // ����ġ, ������
	}
	fill(len, len + V+1, 987654321);
	pq.push({ 0,K });
	bfs();
	for (int i = 1;i <= V;++i) {
		//fill(visited, visited + V, false);
		//pq.push({ 0,K });
		//bfs(i);
		if (i == K) {
			cout << 0 << '\n';
			continue;
		}
		if (len[i] == 987654321) cout << "INF" << '\n';
		else cout << len[i] << '\n';
	}

	//for (int i = 1;i <= V;++i) {
	//	cout << i << "\n";
	//	for (auto iter : vec[i]) {
	//		cout << iter.first << ", " << iter.second << '\n';
	//	}
	//	cout << '\n';
	//}

	return 0;
}
#endif // 01

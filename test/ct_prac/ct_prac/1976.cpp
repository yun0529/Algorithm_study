#if 0
#include <iostream>
using namespace std;

int n, m, cnt;
int parent[204], check[1004];

int Find(int now) {
	if (parent[now] == now) return now;
	return parent[now] = Find(parent[now]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) parent[b] = a;
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}
	int node;
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> node; // 1이면 연결된 노드
			if(node == 1) Union(i, j);
		}
	}
	bool flag = false;
	int st; // 이전 노드
	cin >> st;
	for (int i = 1; i < m; i++) {
		cin >> node;
		// 이전 노드와 루트가 같으면 ++;
		if (Find(st) == Find(node)) {
			cnt++;
		}
		else break;
		st = node;
	}
	// cnt가 경로 수와 같으면
	if (cnt == m - 1) cout << "YES";
	else cout << "NO";

	return 0;
}

#endif // 01

#if 0
#include <iostream>
using namespace std;

int n, m;
int parent[204], check[1004];

int Find(int now) {
	if (parent[now] == now) return now;
	return parent[now] = Find(parent[now]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) parent[b] = a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
	}
	int node;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> node; // 1이면 연결된 노드
			if (node == 1) Union(i, j);
		}
	}
	bool flag = false;
	for (int i = 1; i <= m; i++) {
		cin >> node;
		check[i] = Find(node); // 대표 노드 확인
		if (i != 1) {
			// 대표 노드가 다른 것이 있다면 연결되어있지 않은 곳임.
			if (check[i - 1] != check[i]) {
				flag = true;
				break;
			}
		}
	}
	//for (int i = 1; i <= m; i++) {
	//	cout << check[i] << ' ';
	//}cout << '\n';

	if (flag) cout << "NO";
	else cout << "YES";
	return 0;
}

#endif // 01

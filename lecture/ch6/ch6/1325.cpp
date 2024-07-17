#include <bits/stdc++.h>
using namespace std;

int n, m, a, b;

set<int> s[10004];
int cnt = 0;

//int dfs(int parent,int node) {
//	if (visited[node] == 0) {
//		visited[node] = 1;
//		for (int i : s[node]) {
//			s[parent].insert(dfs(parent, i));
//			//cout << parent << " : " << i<<'\n';
//		}
//		return node;
//	}
//}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		s[b].insert(a);
		if (i > n) continue;
		for (int j = 0; j <= i; j++) {
			if (s[j].find(b) != s[j].end() && j != a) s[j].insert(a);
			if (s[j].size() > cnt) cnt = s[j].size();
		}
	}

	//for (int i = 0; i <= n; i++) { // 실행전
	//	cout << i << "(" << s[i].size() << ")" << " : ";
	//	for (int j : s[i]) {
	//		cout << j << ' ';
	//	}
	//	cout << '\n';
	//}

	//for (int i = 0; i < n; i++) { // dfs 실행
	//	fill(&visited[0], &visited[0] + n, 0);
	//	for (int j : s[i]) {
	//		cout << i << " : " << j << '\n';
	//		dfs(i, j);
	//	}
	//	ret[i] = s[i].size();
	//	if (s[i].size() > MAX) MAX = s[i].size();
	//}

	//cout << '\n';
	//for (int i = 0; i <= n; i++) { // 실행 후
	//	cout << i << "(" << s[i].size() << ")" << " : ";
	//	for (int j : s[i]) {
	//		cout << j << ' ';
	//	}
	//	cout << '\n';
	//}
	//cout << cnt;

	for (int i = 0; i <= n; i++) { // 실행 후
		if (s[i].size() == cnt) cout << i << ' ';
	}

	return 0;
}
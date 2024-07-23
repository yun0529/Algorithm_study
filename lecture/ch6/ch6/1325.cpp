//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v[10001];
//int dp[10001], mx, visited[10001], n, m, a, b;
//
//int dfs(int here) {
//	visited[here] = 1;
//	int ret = 1;
//	for (int there : v[here]) {
//		if (visited[there]) continue;
//		ret += dfs(there);
//	}
//	return ret;
//}
//
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0);
//	cin >> n >> m;
//	while (m--) {
//		cin >> a >> b;
//		v[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++) {
//		memset(visited, 0, sizeof(visited));
//		dp[i] = dfs(i);
//		mx = max(dp[i], mx);
//	}
//	for (int i = 1; i <= n; i++) if (mx == dp[i]) cout << i << " ";
//	return 0;
//}

//int n, m, a, b, visited[10004], ret[10004], cnt = 0, cur;
//vector<int> v[10004];
//
//void dfs(int parent, int node) {
//	//if (visited[parent] == 0) {
//	//	cout << parent << " : " << node << '\n';
//	//	for (int r : v[node]) {
//	//		cout << parent << " - " << r << '\n';
//	//		if (r == parent) {
//	//			cout << parent << " : " << r << "(continue)" << '\n';
//	//			continue;
//	//		}
//	//		ret[cur]++;
//	//		cout << parent << " ++ \n";
//	//		visited[node] = 1;
//	//		dfs(node, r);
//	//		//cout << parent << " : " << node << '\n';
//	//	}
//	//}
//
//	if (visited[node] == 0) {
//		cout << parent << " : " << node << '\n';
//		for (int r : v[node]) {
//			cout << parent << " - " << r << '\n';
//			if (r == parent) {
//				cout << parent << " : " << r << "(continue)" << '\n';
//				continue;
//			}
//			ret[cur]++;
//			cout << parent << " ++ \n";
//			visited[node] = 1;
//			dfs(parent, r);
//			//cout << parent << " : " << node << '\n';
//		}
//	}
//	return;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b;
//		v[b].push_back(a);
//	}
//
//	//cout << '\n';
//	//for (int i = 1; i <= n; i++) { // 실행 후
//	//	cout << i << "(" << v[i].size() << ")" << " : ";
//	//	for (int j : v[i]) {
//	//		cout << j << ' ';
//	//	}
//	//	cout << '\n';
//	//}
//	//cout << cnt << '\n';
//
//	for (int i = 1; i <= n; i++) {
//		fill(&visited[0], &visited[0] + 10004, 0);
//		cur = i;
//		cout << "--------------\n";
//		for (int j : v[i]) {
//			dfs(i, j);
//			cout << "----\n";
//		}
//		cout << "count : " << ret[i] << "\n";
//		if (ret[i] > cnt) cnt = ret[i];
//	}
//
//	for (int i = 0; i <= n; i++) { // 실행 후
//		if (ret[i] == cnt) cout << i << ' ';
//	}
//
//	return 0;
//}

//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, a, b;
//
//set<int> s[10004];
//long cnt = 0;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < m; i++) {
//		cin >> a >> b;
//		s[b].insert(a);
//		if (i > n) continue;
//		for (int j = 1; j <= n; j++) {
//			if (s[j].find(b) != s[j].end() && j != a) {
//				s[j].insert(a);
//				cout << j << " insert " << a << '\n';
//			}
//			if (s[j].size() > cnt) cnt = s[j].size();
//		}
//	}
//
//	cout << '\n';
//	for (int i = 0; i <= n; i++) { // 실행 후
//		cout << i << "(" << s[i].size() << ")" << " : ";
//		for (int j : s[i]) {
//			cout << j << ' ';
//		}
//		cout << '\n';
//	}
//	cout << cnt << '\n';
//
//	for (int i = 0; i <= n; i++) { // 실행 후
//		if (s[i].size() == cnt) cout << i << ' ';
//	}
//
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//int INF = 987654321;
//int n, ret = INF, m;
//int comp[14], visited[14], a[14];
//
//vector<int> arr[14];
//
//pair<int,int> dfs(int here, int value) {
//	visited[here] = 1;
//	pair<int, int> ret = { 1,a[here] };
//	for (int there : arr[here]) {
//		if (comp[there] != value) continue; // 다음게 같은 색이 아닌 경우
//		if (visited[there])continue;
//		pair<int, int> tmp = dfs(there, value);
//		ret.first += tmp.first;
//		ret.second += tmp.second;
//	}
//	return ret;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> a[i];
//	}
//
//	for (int i = 1; i <= n; i++) {
//		int x;
//		cin >> x;
//		for (int j = 0; j < x; j++) {
//			int y;
//			cin >> y;
//			arr[i].push_back(y);
//			arr[y].push_back(i);
//		}
//	}
//
//	for (int i = 1; i < (1 << n) - 1; i++) {
//		fill(comp, comp + 11, 0);
//		fill(visited, visited + 11, 0);
//		int idx1 = -1, idx2 = -1;
//		for (int j = 0; j < n; j++) {
//			if (i & (1 << j)) {
//				comp[j + 1] = 1; // 처음 고른걸 색칠
//				idx1 = j + 1;
//			}
//			else {
//				idx2 = j + 1;
//			}
//		}
//		pair<int, int> comp1 = dfs(idx1, 1);
//		pair<int, int> comp2 = dfs(idx2, 0);
//		if (comp1.first + comp2.first == n) {
//			ret = min(ret, abs(comp1.second - comp2.second));
//		}
//	}
//	cout << (ret == INF ? -1 : ret);
//	return 0;
//}
////#include <bits/stdc++.h>	
////using namespace std;
////
////vector<int> v[54];
////int ret, n, r, visited[54], root;
////
////void dfs(int here) {
////	if (v[here].empty()) {
////		ret++;
////		//cout << here << '\n';
////		return;
////	}
////	visited[here] = 1;
////	for (int there : v[here]) {
////		
////		if (there == r && v[here].size() == 1) { // 현재 노드의 자식이 삭제되어 리프가 된 경우
////			ret++;
////			//cout << here << '\n';
////			continue;
////		}
////		if (visited[there] || there == r) continue; // 재방문 및 삭제 노드 방문 배제
////		dfs(there);
////	}
////}
////
////int main() {
////
////	cin >> n;
////	int x;
////	for (int i = 0; i < n; i++) {
////		cin >> x;
////		if (x == -1) {
////			root = i;
////			continue;
////		}
////		v[x].push_back(i);
////	}
////	cin >> r;
////	/*for (int i = 0; i < 5; i++) {
////		cout << i << " : ";
////		for (int a : v[i]) {
////			cout << a << ' ';
////		}
////		cout << '\n';
////	}*/
////	
////	if (r == root) {
////		cout << '0';
////		return 0;
////	}
////	v[r].clear();
////
////	dfs(root);
////	cout << ret;
////	return 0;
////}
//
//#include <bits/stdc++.h>
//using namespace std;
//
//vector<int> v[54];
//int n, a, c, cnt = 0, num = 0;
//int visited[54];
//
//void postOrder(int node) {
//	if (!visited[node]) {
//		for (int i : v[node]) {
//			postOrder(i);
//		}
//		if (node != 0 && v[node].size() == 0 && node != c) {
//			cnt++;
//		}
//		else if (node != 0 && v[node].size() == 1 && v[node][0] == c) {
//			cnt++;
//		}
//
//		visited[node] = 1;
//	}
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		v[a + 1].push_back(i + 1);
//	}
//	cin >> c;
//	c++;
//
//	v[c].clear();
//
//	postOrder(num);
//	cout << cnt;
//
//	return 0;
//}
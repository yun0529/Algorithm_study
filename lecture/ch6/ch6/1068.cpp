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
//			cout << node << ' ';
//		}
//		else if (node != 0 && v[node].size() == 1 && v[node][0] == c) {
//			cnt++;
//			cout << node << ' ';
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
//		//num = a;
//		v[a+1].push_back(i+1);
//	}
//	cin >> c;
//	c++;
//
//	for (int i = 0; i <= n; i++) {
//		cout << i << "(" << v[i].size() << ")" << " : ";
//		for (int j : v[i]) {
//			cout << j << ' ';
//		}
//		cout << '\n';
//	}
//
//	
//	v[c].clear();
//
//	for (int i = 0; i <= n; i++) {
//		cout << i << "(" << v[i].size() << ")" << " : ";
//		for (int j : v[i]) {
//			cout << j << ' ';
//		}
//		cout << '\n';
//	}
//	
//	postOrder(num);
//	cout << cnt;
//
//	return 0;
//}
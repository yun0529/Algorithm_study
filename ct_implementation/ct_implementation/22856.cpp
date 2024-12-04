//#include <iostream>
//#include <vector>
//using namespace std;
//
//int a, b, c, n, visited[100004], cnt, end_node;
//vector<int> v[100004];
//bool flag = true;
//
//void go(int here) {
//	int l = v[here][0];
//	int r = v[here][1];
//	if (l != -1) {
//		cnt++;
//		go(l);
//		if (flag)cnt++;
//	}
//	if (r != -1) {
//		cnt++;
//		go(r);
//		if (flag) cnt++;
//	}
//	if (end_node == here) {
//		flag = false;
//		return;
//	}
//}
//
//void inOrder(int here) {
//	if (visited[here] == 0) {
//		for (int i = 0; i < v[here].size() / 2; i++) {
//			if (v[here][i] == -1)continue;
//			inOrder(v[here][i]);
//		}
//		visited[here] = 1;
//		end_node = here;
//		//cout << here << ' ';
//		for (int i = v[here].size() / 2; i < v[here].size(); i++) {
//			if (v[here][i] == -1)continue;
//			inOrder(v[here][i]);
//		}
//	}
//}
//
//int main() {
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b >> c;
//		v[a].push_back(b);
//		v[a].push_back(c);
//	}
//	if (v[1][0] == -1 && v[1][1] == -1) {
//		cout << 0;
//		return 0;
//	}
//	inOrder(1);
//	//cout << 'e' << end_node<<'\n';
//	go(1);
//	cout << cnt;
//	return 0;
//}
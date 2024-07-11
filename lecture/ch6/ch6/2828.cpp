//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, j, t,b, f, cnt, visited[11];
////queue<int> q;
////vector<int> v[11];
////
////void bfs(int here) {
////	visited[here] = 1;
////	q.push(here);
////	while (q.size()) {
////		here = q.front();
////		q.pop();
////		for (int there : v[here]) {
////			visited[there] = visited[here] + 1;
////		}
////	}
////}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m >> j;
//	f = 1;
//	for (int i = 0; i < j; i++) {
//		b = f + m - 1;
//		cin >> t;
//		if (t >= f && t <= b) continue; // 이미 바구니 안에 있는 경우
//		else {
//			if (t < f) {
//				cnt += (f - t); // 떨어지는 위치 - 바구니 왼쪽 위치
//				f = t; // 왼쪽 위치를 t로 옮김
//			}
//			else {
//				cnt += (t - b);
//				f += (t - b);
//			}
//		}
//	}
//	cout << cnt;
//
//	return 0;
//}
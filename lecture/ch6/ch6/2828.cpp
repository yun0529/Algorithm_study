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
//		if (t >= f && t <= b) continue; // �̹� �ٱ��� �ȿ� �ִ� ���
//		else {
//			if (t < f) {
//				cnt += (f - t); // �������� ��ġ - �ٱ��� ���� ��ġ
//				f = t; // ���� ��ġ�� t�� �ű�
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
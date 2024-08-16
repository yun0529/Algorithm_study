//#include <bits/stdc++.h> 
//using namespace std;
//
//int n, k, min_num = 987654321, ret = 0;
//
//int visited[100004] = {0, };
//int dx[] = { -1, 1 };
//
////bool check[100004];
//
//queue <pair< int, int >> q;
//
//void bfs(int here) {
//	//visited[here] = 1;
//	q.push({here, 0});
//	//cout << here;
//	while (q.size()) {
//
//		int x = q.front().first;
//		int cur = q.front().second;
//		q.pop();
//
//		if (x == k && !visited[x]) {
//			//cout << "tt\n";
//			min_num = cur;
//			ret++;
//		}
//		else if (x == k && min_num == cur) ret++;
//		visited[x] = 1;
//
//		for (int i = 0; i < 2; i++) {
//			int nx = x + dx[i];
//			if (nx > 100000 || nx < 0) continue;
//			if (visited[nx]) continue;
//			
//			//visited[nx] = visited[x] + 1;
//			q.push({ nx, cur+1 });
//		}
//		if (2 * x <= 100000 && !visited[2 * x]) {
//			q.push({ 2 * x, cur + 1 });
//			//visited[2 * x] = visited[x] + 1;
//
//		}
//		//if (x < 30) {
//		//	cout << 2 * x << '\n';
//		//}
//		
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0); cout.tie(0);
//
//	cin >> n >> k;
//
//	bfs(n);
//
//	cout << min_num << '\n' << ret;
//
//	return 0;
//}
//
//
////#include <bits/stdc++.h>
////using namespace std;
////const int MAX = 200000;
////int visited[MAX + 4];
////long long cnt[MAX + 4];
////int main() {
////	int n, m;
////	cin >> n >> m;
////	if (n == m) {
////		puts("0"); puts("1");
////		return 0;
////	}
////	visited[n] = 1;
////	cnt[n] = 1;
////	queue<int> q;
////	q.push(n);
////	while (!q.empty()) {
////		int now = q.front();
////		q.pop();
////		for (int next : {now - 1, now + 1, now * 2}) {
////			if (0 <= next && next <= MAX) {
////				if (!visited[next]) {
////					q.push(next);
////					visited[next] = visited[now] + 1;
////					cnt[next] += cnt[now];
////				}
////				else if (visited[next] == visited[now] + 1) {
////					cnt[next] += cnt[now];
////				}
////			}
////		}
////	}
////	cout << visited[m] - 1 << '\n';
////	cout << cnt[m] << '\n';
////	return 0;
////}
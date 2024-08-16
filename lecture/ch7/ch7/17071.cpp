////#include <bits/stdc++.h>
////using namespace std;
////
////int n, k, ret, min_num = INT_MAX;
////
////int visited[500004] = { 0, };
////int arr[500004];
////int dx[] = { -1, 1 };
////
////vector<int> loc;
////
////queue<pair<int, int>> q;
////void bfs(int here, int cnt) {
////	q.push({ here, cnt });
////	//visited[here] = 1;
////	while (q.size()) {
////		int x = q.front().first;
////		int cur = q.front().second;
////		q.pop();
////
////		int k_cur = k;
////		for (int i = 1; i <= cur; i++) {
////			if (k_cur + i > 500000) {
////				break;
////			}
////			k_cur += i;
////		}
////		//if(k_cur < 30) 
////		//cout << "k_cur : " << k_cur << ", " <<"n : " << x << '\n';
////		if (x == k_cur) {
////			min_num = cur;
////			//cout << cur << '\n';
////			return;
////		}
////		//visited[x] = 1; // -> 이렇게 하면 nx가 visited에 걸려서 다른 경우로 시도 못하는듯
////
////		for (int i = 0; i < 2; i++) {
////			int nx = x + dx[i];
////			//cout << nx<< " , " << k_cur + cur + 1 << '\n';
////			if (nx == (k_cur + cur + 1)) {
////				//cout << "t1t";
////				min_num = cur + 1;
////				return;
////			}
////			if (nx > 500000 || nx < 0 || visited[nx] != 0) continue;
////			//cout << "tt33";
////			q.push({ nx,cur + 1 });
////
////			visited[nx] = 1;
////		}
////		if (2 * x == (k_cur + cur + 1)) {
////			//cout << "t2t";
////			min_num = cur + 1;
////			return;
////
////		}
////		if (2 * x <= 500000 && visited[2*x] != 0) {
////			q.push({ 2 * x,cur + 1 });
////			visited[2 * x] = 1;
////		}
////	}
////}
////
////int main() {
////	ios_base::sync_with_stdio(false);
////	cin.tie(0); cout.tie(0);
////
////	cin >> n >> k;
////
////	bfs(n, 0);
////	if (min_num == INT_MAX) cout << -1;
////	else cout << min_num;
////	//for (int i = k; i != n; i = arr[i]) {
////	//	//cout << i << ' ';
////	//}
////	return 0;
////}
//
//#include <bits/stdc++.h>
//using namespace std;
//const int max_n = 500000;
//// 홀,짝을 구분하기 위해 [2] 설정
////[50만][50만]은 너무 크기 때문에 설정할 수 없음.
//int visited[2][max_n + 4], a, b, ok, turn = 1;
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> a >> b;
//    if (a == b) { cout << 0 << "\n"; return 0; }
//
//    queue<int> q;
//    visited[0][a] = 1;
//    q.push(a);
//    while (q.size()) {
//        b += turn; // +1 +2 +3 ... +n 
//        if (b > max_n)break;
//        if (visited[turn % 2][b]) { // 홀, 짝일 때 수빈이가 미리 방문 했다면 만날 수 있음.
//            // 원래의 bfs처럼 1차원 배열로 해버리면 다시 오는 것을 확인할 수 없음
//            // 그러니 %2 홀, 짝으로 다시 오는 것을 커버하는 것.
//            ok = true;
//            break;
//        }
//        int qSize = q.size(); // fluid fill?, 한 턴씩 진행 가능
//        for (int i = 0; i < qSize; i++) {
//            int x = q.front(); q.pop();
//            for (int nx : {x + 1, x - 1, x * 2}) {
//                if (nx < 0 || nx > max_n || visited[turn % 2][nx]) continue;
//                visited[turn % 2][nx] = visited[(turn + 1) % 2][x] + 1;
//                if (nx == b) { // 해당 지역을 방문할 때 동생이 와있으면
//                    ok = 1; break;
//                }
//                q.push(nx);
//            }
//            if (ok)break;
//        }
//        if (ok)break;
//        turn++;
//    }
//    if (ok) cout << turn << "\n";
//    else cout << -1 << "\n";
//    return 0;
//}
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
////		//visited[x] = 1; // -> �̷��� �ϸ� nx�� visited�� �ɷ��� �ٸ� ���� �õ� ���ϴµ�
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
//// Ȧ,¦�� �����ϱ� ���� [2] ����
////[50��][50��]�� �ʹ� ũ�� ������ ������ �� ����.
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
//        if (visited[turn % 2][b]) { // Ȧ, ¦�� �� �����̰� �̸� �湮 �ߴٸ� ���� �� ����.
//            // ������ bfsó�� 1���� �迭�� �ع����� �ٽ� ���� ���� Ȯ���� �� ����
//            // �׷��� %2 Ȧ, ¦���� �ٽ� ���� ���� Ŀ���ϴ� ��.
//            ok = true;
//            break;
//        }
//        int qSize = q.size(); // fluid fill?, �� �Ͼ� ���� ����
//        for (int i = 0; i < qSize; i++) {
//            int x = q.front(); q.pop();
//            for (int nx : {x + 1, x - 1, x * 2}) {
//                if (nx < 0 || nx > max_n || visited[turn % 2][nx]) continue;
//                visited[turn % 2][nx] = visited[(turn + 1) % 2][x] + 1;
//                if (nx == b) { // �ش� ������ �湮�� �� ������ ��������
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
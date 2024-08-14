#include <bits/stdc++.h>
using namespace std;

int n, k, ret, min_num = INT_MAX;

int visited[500004] = { 0, };
int arr[500004];
int dx[] = { -1, 1 };

vector<int> loc;

queue<pair<int, int>> q;
void bfs(int here, int cnt) {
	q.push({ here, cnt });
	//visited[here] = 1;
	while (q.size()) {
		int x = q.front().first;
		int cur = q.front().second;
		q.pop();

		int k_cur = k;
		for (int i = 1; i <= cur; i++) {
			if (k_cur + i > 500000) {
				break;
			}
			k_cur += i;
		}
		//if(k_cur < 30) 
		//cout << "k_cur : " << k_cur << ", " <<"n : " << x << '\n';
		if (x == k_cur) {
			min_num = cur;
			//cout << cur << '\n';
			return;
		}
		//visited[x] = 1; // -> 이렇게 하면 nx가 visited에 걸려서 다른 경우로 시도 못하는듯

		for (int i = 0; i < 2; i++) {
			int nx = x + dx[i];
			//cout << nx<< " , " << k_cur + cur + 1 << '\n';
			if (nx == (k_cur + cur + 1)) {
				//cout << "t1t";
				min_num = cur + 1;
				return;
			}
			if (nx > 500000 || nx < 0 || visited[nx] != 0) continue;
			//cout << "tt33";
			q.push({ nx,cur + 1 });

			visited[nx] = 1;
		}
		if (2 * x == (k_cur + cur + 1)) {
			//cout << "t2t";
			min_num = cur + 1;
			return;

		}
		if (2 * x <= 500000 && visited[2*x] != 0) {
			q.push({ 2 * x,cur + 1 });
			visited[2 * x] = 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> k;

	bfs(n, 0);
	if (min_num == INT_MAX) cout << -1;
	else cout << min_num;
	//for (int i = k; i != n; i = arr[i]) {
	//	//cout << i << ' ';
	//}
	return 0;
}
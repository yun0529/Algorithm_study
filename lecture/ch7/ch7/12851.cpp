#include <bits/stdc++.h> 
using namespace std;

int n, k, min_num = 987654321, ret = 0;

int arr[100004], visited[100004];
int dx[] = { -1, 1 };

queue<int> q;

void bfs(int here) {
	visited[here] = 1;
	q.push(here);
	while (q.size()) {
		int x = q.front();
		q.pop();

		if (x == k) {
			min_num = min(min_num, visited[x]);
			ret++;
		}
		else if (x == k && visited[x] == min_num) ret++;

		for (int i = 0; i < 2; i++) {
			int nx = x + dx[i];
			if (nx > 100000 || nx < 0) continue;
			if (visited[nx]) continue;
			
			visited[nx] = visited[x] + 1;

			q.push(nx);
		}
		if (2 * x <= 100000 && !visited[2 * x]) {
			q.push(2 * x);
			visited[2 * x] = visited[x] + 1;
		}
		//cout << x << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> k;

	bfs(n);

	cout << min_num - 1 << '\n' << ret;

	return 0;
}
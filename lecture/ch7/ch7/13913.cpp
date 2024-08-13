#include <bits/stdc++.h>
using namespace std;

int n, k, ret, min_num = 987654321;

int visited[100004];
int arr[100004];
int dx[] = { -1, 1 };

vector<int> loc;

//queue<tuple<int, int, vector<int>>> q; // tuple로 요소 3개를 사용하는 것도 시간 영향이 큰듯..? pair로 다시 가니까 바로 시간초과 해결됨.
queue<pair<int, int>> q;
void bfs(int here, int cnt) {
	q.push({ here, cnt });
	visited[here] = 1;
	while (q.size()) {
		//int x = get<0>(q.front());
		//int cur = get<1>(q.front());
		//vector<int> b = get<2>(q.front());
		int x = q.front().first;
		int cur = q.front().second;
		q.pop();

		if (x == k) {
			//min_num = cur;
			cout << cur << '\n';

			break;
		}

		//visited[x] = 1; // -> 이렇게 하면 nx가 visited에 걸려서 다른 경우로 시도 못하는듯

		for (int i = 0; i < 2; i++) {
			int nx = x + dx[i];

			if (nx > 100000 || nx < 0 || visited[nx]) continue;
			//if (arr[cur + 1] == 0) arr[cur + 1] = nx;
			//else if(arr[cur + 1] != 0 && arr[cur + 1] > nx)
			//b.push_back(nx);
			q.push({ nx,cur + 1 });
			arr[nx] = x;
			visited[nx] = 1;
		}
		if (2 * x <= 100000 && !visited[2 * x]) {
			//if (arr[cur + 1] == 0) arr[cur + 1] = 2*x;
			//b.push_back(2 * x);
			q.push({ 2 * x,cur + 1 });
			//loc.push_back(x);
			arr[2*x] = x;
			visited[2*x] = 1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n >> k;

	bfs(n, 0);
	//cout << min_num <<'\n' << ret;
	for (int i = k; i != n; i = arr[i]) {
		//cout << i << ' ';
		loc.push_back(i);
	}
	loc.push_back(n);
	//cout << '\n';
	reverse(loc.begin(), loc.end());
	for (int i : loc) {
		cout << i << ' ';
	}

	return 0;
}
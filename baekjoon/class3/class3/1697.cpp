#if 0
#include <iostream>
#include <queue>

using namespace std;
int su, bro, ret = 987654321;
int visited[100004];
int bfs(int n) {
	queue<int> q;
	q.push(n);
	while (q.size()) {
		n = q.front();
		q.pop();
		if (n == bro) break;

		int pl = n + 1;
		int mi = n - 1;
		int mul = n * 2;

		if (pl < 100004 && visited[pl] == 0) {
			q.push(pl);
			visited[pl] = visited[n] + 1;
		}
		if (mi >= 0 && visited[mi] == 0) {
			q.push(mi);
			visited[mi] = visited[n] + 1;
		}
		if (mul < 100004 && visited[mul] == 0) {
			q.push(mul);
			visited[mul] = visited[n] + 1;
		}
	}
	return visited[bro];
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	cin >> su >> bro;
	cout << bfs(su);

	return 0;
}

#endif
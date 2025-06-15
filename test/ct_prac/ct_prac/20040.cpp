#if 0
#include <bits/stdc++.h>
using namespace std;

int parent[500004], n, m;

int Find(int now) {
	if (now != parent[now]) return parent[now] = Find(parent[now]);
	return now;
}
void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b)
		parent[b] = a;
}

int main() {

	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		parent[i] = i;
	}
	int a, b;
	for (int i = 1; i <= m; i++) {
		cin >> a >> b;
		if (Find(a) == Find(b)) {
			cout << i;
			return 0;
		}
		Union(a, b);
	}
	cout << 0;
	return 0;
}
#endif // 01

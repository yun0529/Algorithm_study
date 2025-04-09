#if 0

#include <iostream>
using namespace std;

int n, m;
int arr[1000004];

int Find(int now) {
	if (arr[now] == now) return now;
	else return arr[now] = Find(arr[now]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) arr[b] = a;
	return;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i <= n; i++) {
		arr[i] = i;
	}
	int a, b, u;
	for (int i = 0; i < m; i++) {
		cin >> u >> a >> b;
		if (u == 0) Union(a, b);
		else {
			if (Find(arr[a]) == Find(arr[b])) cout << "YES" << '\n';
			else cout << "NO" << '\n';
		}
	}

	return 0;
}

#endif
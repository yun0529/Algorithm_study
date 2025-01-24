#if 0
#include <iostream>
#include <queue>
using namespace std;

int n, x;
priority_queue<int> q;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) {
			if (q.empty()) {
				cout << 0 << '\n';
				continue;
			}
			cout << q.top() << '\n';
			q.pop();
			continue;
		}
		q.push(x);
	}

	return 0;
}
#endif
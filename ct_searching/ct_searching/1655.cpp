#if 0
#include <iostream>
#include <queue>
using namespace std;

int n, x;
priority_queue<int> max_q;
priority_queue<int, vector<int>, greater<int>> min_q;
int ret[100004];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (max_q.size() <= min_q.size()) {
			max_q.push(x);
		}else min_q.push(x);

		if (!min_q.empty() && (max_q.top() > min_q.top())) {
			int mx = max_q.top();
			int mn = min_q.top();
			min_q.pop();
			max_q.pop();
			max_q.push(mn);
			min_q.push(mx);
		}
		ret[i] = max_q.top();
	}
	for (int i = 0; i < n; i++) {
		cout << ret[i] << ' ';
	}
	return 0;
}
#endif
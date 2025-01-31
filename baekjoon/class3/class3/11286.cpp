#if 0
#include <iostream>
#include <queue>
#include <map>
using namespace std;

int arr[100004], n, x;
map<int, int> mp;
priority_queue<int, vector<int>, greater<int>> pq;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);  cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		if (x == 0) {
			if (pq.empty()) cout << 0 << '\n';
			else {
				if (mp[0 - pq.top()] > 0) {
					cout << 0 - pq.top() << '\n';
					mp[0 - pq.top()]--;
					pq.pop();
				}
				else {
					cout << pq.top() << '\n';
					mp[pq.top()]--;
					pq.pop();
				}
			}
		}
		else {
			pq.push(abs(x));
			mp[x]++;
		}
		
	}

	return 0;
}

#endif
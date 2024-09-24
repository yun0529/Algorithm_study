#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;

int n, arr[100004], ret;
unordered_set<int> s;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	ret += n;
	if (n == 1) {
		cout << ret;
		return 0;
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= n-i; j++) {
			s.clear();
			for (int k = j; k < j+i; k++) {
				s.insert(arr[k]);
			}
			if (s.size() == i) {
				ret++;
			}
		}
	}
	cout << ret;

	return 0;
}
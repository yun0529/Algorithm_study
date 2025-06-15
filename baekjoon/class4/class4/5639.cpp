#if 0
#include <iostream>
#include <queue>
#include <tuple>
using namespace std;

int arr[10004];
int n;

void go(int start, int end) {

	if (start >= end) return;
	int root = start;
	int idx = start + 1;
	while (idx < end) {
		if (arr[root] < arr[idx]) break;
		idx++;
	}

	go(root + 1, idx);
	go(idx, end);
	cout << arr[root] << '\n';
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int idx = 0;
	while (cin >> n) {
		arr[idx++] = n;
	}
	go(0, idx);

	return 0;
}
#endif 
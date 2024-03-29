#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, x;
	cin >> n;
	queue<int> qu;

	for (int i = 1; i <= n; i++) {
		qu.push(i);
	}
	for (int i = 1; i <= n; i++) {
		if (qu.size() == 1) {
			cout << qu.front();
			break;
		}
		qu.pop();
		x = qu.front();
		qu.pop();
		qu.push(x);
	}

	return 0;
}
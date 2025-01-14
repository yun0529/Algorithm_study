#if 0

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int n, d, k, c;
int arr[30004];
int visited[30004];
int mx = 0;

int main() {
	cin >> n >> d >> k >> c;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		int dup = 0; // ม฿บน
		int c_cnt = 1;
		for (int j = i; j < i + k; j++) {
			if (!visited[arr[j % n]]) visited[arr[j % n]] = 1;
			else dup++;
		}
		if (visited[c]) c_cnt = 0;
		mx = max(mx, k - dup + c_cnt);
		fill(visited, visited + 30004, 0);
	}
	cout << mx;
	return 0;
}
#endif // 1
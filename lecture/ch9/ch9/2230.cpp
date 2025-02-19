#if 0
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int n, m, ret = 2e9, arr[100004];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	int st = 1;
	int ed = 1;
	sort(arr, arr + n);
	while (st <= n && ed <= n) {
		//cout << abs(arr[st] - arr[ed]) << '\n';
		if (arr[ed] - arr[st] >= m) {
			ret = min(ret, arr[ed] - arr[st]);
			st++;
		}
		else ed++;
	}
	
	cout << ret;

	return 0;
}
#endif 
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, arr[100004], mn = 2e9;
int ret[2];

void solution() {
	int l = 0;
	int r = n - 1;
	while(l < r) {
		int tmp = arr[l] + arr[r];
		//cout << tmp << ' ';
		if (abs(tmp) < mn) {
			ret[0] = arr[l];
			ret[1] = arr[r];
			mn = abs(tmp);
		}

		if (tmp > 0) r--;
		else l++;
	}
	cout << ret[0] << " " << ret[1];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	solution();

	return 0;
}
#endif // 01

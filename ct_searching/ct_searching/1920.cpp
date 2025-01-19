#if 0
#include <iostream>
#include<algorithm>
using namespace std;

int arr[100004], brr[100004], n, m;

int bin_search(int mid, int n) {
	return n > mid ? 0 : 1;
}

int main() {

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> brr[i];
	}
	int l = 0, r = 0, flag = 1;
	for (int i = 0; i < m; ++i) {
		l = 0; r = n - 1; flag = 1;
		while (l <= r) {
			int mid = (l + r) / 2;
			if (arr[mid] == brr[i]) {
				cout << 1 <<'\n';
				flag = 0;
				break;
			}
			else if(bin_search(arr[mid], brr[i])) {
				r = mid - 1;
			}
			else {
				l = mid + 1;
			}
		}
		if (flag) cout << 0 << '\n';
	}
	return 0;
}
#endif // 01

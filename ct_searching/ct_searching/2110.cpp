#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int n, c, mx = 0,mn = 2100000000, ret;
int arr[200004];

bool binary_search(int mid) {
	int cnt = 0;
	int h = 0; // 다음 시작할 집
	for (int i = 1; i < n; i++) {
		
		for (int j = h; j < i; j++) {
			if (arr[i] - arr[j] >= mid) {
				cnt++;
				h = i;
				break; // 한 집에는 하나만 설치 가능
			}
			else break; // 가장 먼 것이 안되면 다 안되는것.
		}
		//cout << i;
	}
	//cout<<"mid: "<<mid<<", cnt: "<<cnt << '\n';
	return cnt >= c - 1;
}

int main() {

	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		mn = min(mn, arr[i]);
		mx = max(mx, arr[i]);
	}
	sort(arr, arr + n);
	//for (int i = 0; i < n; i++) {
	//	cout << arr[i] << ' ';
	//}cout << '\n';
	int l = 0, r = mx;
	while (l <= r) {
		int mid = (r + l) / 2;
		if (mid == 0) mid = 1;
		if (binary_search(mid)) { // true -> 거리 길게 가능
			//cout << "mid: " << mid << '\n';
			l = mid + 1;
			ret = mid;
			//cout << "ret: " << ret << '\n';
		}
		else {
			r = mid - 1;
		}
	}
	cout << ret;
	return 0;
}

#endif
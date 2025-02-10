#if 0
#include <iostream>
#include <algorithm>
using namespace std;

int n, c, mx = 0,mn = 2100000000, ret;
int arr[200004];

bool binary_search(int mid) {
	int cnt = 0;
	int h = 0; // ���� ������ ��
	for (int i = 1; i < n; i++) {
		
		for (int j = h; j < i; j++) {
			if (arr[i] - arr[j] >= mid) {
				cnt++;
				h = i;
				break; // �� ������ �ϳ��� ��ġ ����
			}
			else break; // ���� �� ���� �ȵǸ� �� �ȵǴ°�.
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
		if (binary_search(mid)) { // true -> �Ÿ� ��� ����
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
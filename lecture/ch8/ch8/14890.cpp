#include <bits/stdc++.h>
using namespace std;

int n, l, arr[104][104], arr2[104][104], ret = 0;

void go(int tmp[104][104]) {
	for (int i = 0; i < n; i++) {
		int cnt = 1;
		//bool flag = true;
		int j = 0;
		for (j = 0; j < n - 1; j++) {

			if (tmp[i][j] == tmp[i][j + 1]) {
				cnt++;
			}
			else if (cnt >= l && tmp[i][j] + 1 == tmp[i][j + 1]) {
				cnt = 1;
			}
			else if (cnt >= 0 && tmp[i][j] == tmp[i][j + 1] + 1) {
				cnt = -l + 1;
			}
			else break;
		}
		if (cnt >= 0 && j == n - 1) {
			//cout << i << ' ';
			ret++;
		}
	}
	return;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> l;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			arr2[j][i] = arr[i][j];
		}
	}
	go(arr);
	go(arr2);
	//for (int j = 0; j < n; j++) {
	//	int cnt = 0;
	//	//bool flag = true;
	//	int i = 0;
	//	for (i = 0; i < n - 1; i++) {

	//		if (arr[i][j] == arr[i + 1][j]) {
	//			cnt++;
	//		}
	//		else if (cnt >= l && arr[i][j] + 1 == arr[i + 1][j]) {
	//			cnt = 1;
	//		}
	//		else if (cnt >= 0 && arr[i][j] == arr[i + 1][j] + 1) {
	//			cnt = -l + 1;
	//		}
	//		else break;
	//	}
	//	if (cnt >= 0 && i == n - 1) {
	//		cout << j << ' ';
	//		ret++;
	//	}
	//}

	cout << ret;

	return 0;
}
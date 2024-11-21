#include <bits/stdc++.h>
using namespace std;

int n, arr[1004], idx, ret = 1, prev_list[1004], cnt[1004]; // ret = 1 해줘야 기본값이 안들어가서 그런듯.
vector<int> v;
void go(int idx) {
	if (idx == -1)return;
	v.push_back(arr[idx]);
	go(prev_list[idx]);
	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	fill(prev_list, prev_list + n, -1);
	fill(cnt, cnt + n, 1);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j] && cnt[i] < cnt[j] + 1) {
				cnt[i] = cnt[j] + 1;
				prev_list[i] = j;
				if (ret < cnt[i]) {
					ret = cnt[i];
					idx = i;
				}
			}
		}
	}
	go(idx);
	cout << ret << '\n';
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << ' ';
	}
	return 0;
}
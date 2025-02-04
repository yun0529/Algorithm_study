#if 0
#include <iostream>
#include <vector>
using namespace std;

int n, arr[1004], cnt[1004], cnt2[1004], idx, ret, ret2, idx2;
int asc_prev[1004], desc_prev[1004];
vector<int> v;

void go(int idx) {
	if (idx == -1) return;
	v.push_back(arr[idx]);
	go(asc_prev[idx]);
	return;
}
void go2(int idx) {
	if (idx == -1) return;
	v.push_back(arr[idx]);
	go(desc_prev[idx]);
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int num;
	cin >> n;
	for (int i = 0;i < n;++i) {
		cin >> arr[i];
	}
	fill(cnt, cnt + 1004, 1);
	fill(asc_prev, asc_prev + 1004, -1);
	for (int i = 0;i < n;++i) {
		for (int j = 0;j < i;++j) {
			if (arr[i] > arr[j] && cnt[i] < cnt[j] + 1) {
				cnt[i] = cnt[j] + 1;
				asc_prev[i] = j;
				if (ret < cnt[i]) {
					ret = cnt[i];
					idx = i;
				}
			}
		}
	}
	fill(cnt2, cnt2 + 1004, 1);
	fill(desc_prev, desc_prev + 1004, -1);
	for (int i = n-1;i >= 0;--i) {
		for (int j = n-1;j > i;--j) {
			if (arr[i] > arr[j] && cnt2[i] < cnt2[j] + 1) {
				cnt2[i] = cnt2[j] + 1;
				desc_prev[i] = j;
				if (ret2 < cnt2[i]) {
					ret2 = cnt2[i];
					idx2 = i;
				}
			}
		}
	}
	int mx = 0;
	for (int i = 0;i < n;i++) {
		mx = max(mx, cnt[i] + cnt2[i]);
	}
	cout << mx - 1;
	//go(idx);
	//for (int i = v.size()-1;i >= 0;i--) {
	//	cout << v[i] << ' ';
	//}
	return 0;
}
#endif
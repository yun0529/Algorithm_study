// 최대 증가 부분 수열
// 10 20 10 30 20 50
// -> 증가하는 부분수열 중 최대로 긴 부분 수열 (10 20 30 50)
// 
// 
#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, a[1001], cnt[1001], ret = 1, idx;
int prev_list[1001];
vector<int> v;

void go(int idx) { // 이전 배열 추적 가능
	if (idx == -1) return;
	v.push_back(a[idx]);
	go(prev_list[idx]); // 리스트에 있는 이전 값들 탐색
	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	fill(prev_list, prev_list + 1001, -1);
	fill(cnt, cnt + 1001, 1);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (a[j] < a[i] && cnt[i] < cnt[j] + 1) { // 이전 값이 나보다 작고
				// cnt[i]가 해당 숫자(cnt[j]) 보다 작으면 -> 이전 값들중 가장 긴 최대 증가 부분 수열 뒤에 붙임.
				cnt[i] = cnt[j] + 1;
				prev_list[i] = j; // i 이전은 j 이다
				if (ret < cnt[i]) {
					ret = cnt[i];
					idx = i; // 가장 마지막 숫자를 갱신해줌
				}
			}
		}
	}
	cout << ret<<'\n';
	go(idx); // vector에 리스트 넣어줌
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}
}
#endif
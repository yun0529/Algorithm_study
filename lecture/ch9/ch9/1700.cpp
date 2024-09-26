#include <iostream>
#include <algorithm>
using namespace std;

int n, k, arr[104], cnt[104], x, lp, rp, ret;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		cnt[arr[i]]++;
	}

	for (int i = 0; i < n; i++) {
		// 플러그 꽂을 때 비어있다면 그냥 꽂음
		// 공간 없으면 cnt 배열 확인하고 여러 가지 중 남은 개수 적은걸 뺌
	}

	return 0;
}
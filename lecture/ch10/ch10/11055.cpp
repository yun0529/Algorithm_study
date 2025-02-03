#include <iostream>
#include <vector>
using namespace std;

int n, arr[1004], cnt[1004], dp[1004];
int idx, ret = 1;
vector<int> list;

void go(int idx) {
	if (idx == -1) return;
	list.push_back(arr[idx]); // �� ���� -> ����� �ݴ�� �ϸ� �Ǳ� ������ �״�� ������ ��.
	go(dp[idx]);
	return;
}

int main() {

	cin >> n;
	for (int i = 0;i < n;++i) {
		cin >> arr[i];
	}
	fill(dp, dp + 1004, -1);
	fill(cnt, cnt + 1004, 1);
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < i;j++) {
			if (arr[j] < arr[i] && cnt[i] < cnt[j] + 1) {
				cnt[i] = cnt[j] + 1;
				dp[i] = j;
				if (ret < cnt[i]) {
					ret = cnt[i]; // ���� ū �� ���� ( ���� Ȯ��)
					idx = i; // ���� ū ���� ��� ó���� ������.
				}
			}
		}
	}
	go(idx);
	int sum = 0;
	for (int i = list.size() - 1; i >= 0; i--) {
		cout << list[i] << " ";
	}
	for (int i = list.size() - 1;i >= 0;i--) {
		sum += list[i];
	}
	cout << sum;
	return 0;
}
// �ִ� ���� �κ� ����
// 10 20 10 30 20 50
// -> �����ϴ� �κм��� �� �ִ�� �� �κ� ���� (10 20 30 50)
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

void go(int idx) { // ���� �迭 ���� ����
	if (idx == -1) return;
	v.push_back(a[idx]);
	go(prev_list[idx]); // ����Ʈ�� �ִ� ���� ���� Ž��
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
			if (a[j] < a[i] && cnt[i] < cnt[j] + 1) { // ���� ���� ������ �۰�
				// cnt[i]�� �ش� ����(cnt[j]) ���� ������ -> ���� ������ ���� �� �ִ� ���� �κ� ���� �ڿ� ����.
				cnt[i] = cnt[j] + 1;
				prev_list[i] = j; // i ������ j �̴�
				if (ret < cnt[i]) {
					ret = cnt[i];
					idx = i; // ���� ������ ���ڸ� ��������
				}
			}
		}
	}
	cout << ret<<'\n';
	go(idx); // vector�� ����Ʈ �־���
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << " ";
	}
}
#endif
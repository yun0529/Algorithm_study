#include<bits/stdc++.h>
using namespace std;


//// ���� 11053
//int n, arr[1001], cnt[1001], ret;
//
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < n; i++) {
//		int mx = 0;
//		for (int j = 0; j < i; j++) {
//			if (arr[j] < arr[i] && mx < cnt[j]) mx = cnt[j];
//		}
//		cnt[i] = mx + 1;
//		ret = max(ret, cnt[i]);
//	}
//	cout << ret << endl;
//
//	return 0;
//}

//// ���� 14002
//int n, arr[1001], cnt[1001], ret = 1, idx, prev_list[1001];
//vector<int> v;
//void go(int idx) {
//	if (idx == -1)return;
//	v.push_back(arr[idx]);
//	go(prev_list[idx]);
//	return;
//}
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	fill(prev_list, prev_list + 1001, -1);
//	fill(cnt, cnt + 1001, 1);
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < i; j++) {
//			if (arr[j] < arr[i] && cnt[i] < cnt[j]+1) {
//				cnt[i] = cnt[j] + 1;
//				prev_list[i] = j;
//				if (ret < cnt[i]) {
//					ret = cnt[i];
//					idx = i;
//				}
//			}
//		}
//	}
//	cout << ret << '\n';
//	//go(idx);
//	//for (int i = v.size() - 1; i >=0; i--) {
//	//	cout << v[i] << ' ';
//	//}
//	int i = idx;
//	for (; prev_list[i] != -1; i = prev_list[i]) { // idx : 0���� ���� prev_list[i]�� -1�̱� ������ ������
//		v.push_back(arr[i]);
//	}
//	v.push_back(arr[i]); // �׷��� ���⼭ �������� �������.
//	for (int i = v.size() - 1; i >=0; i--) {
//		cout << v[i] << ' ';
//	}
//	return 0;
//}

// �ð����⵵ O(logn)���� ���ΰ�
//���� 2565
int n, arr[100001], len, num;
int a, b;
pair<int, int> p[100001];
int main() {

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		p[i] = { a,b };
	}
	sort(p, p + n);

	for (int i = 0; i < n; i++) {
		//cin >> num;
		auto lowerPos = lower_bound(arr, arr + len, p[i].second); // num���� ũ�ų� ���� ��ġ ã��
		if (*lowerPos == 0) len++;
		*lowerPos = p[i].second;
		//for (int j = 0; j < n; j++) {
		//	printf("%d ", arr[j]);
		//}
		//printf("\n");
	}
	cout << n - len;
	return 0;
}
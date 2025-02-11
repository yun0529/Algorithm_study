#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll N, M, K, x;
vector<ll> tree;
vector<ll> init_arr;

void update_tree(ll idx, ll value) {
	while (idx < tree.size()) {
		tree[idx] += value;
		idx += idx & -idx;
	}
	return;
}
ll tree_sum(ll idx) {
	ll ret = 0;
	while (idx > 0) {
		ret += tree[idx];
		idx -= idx & -idx;
	}
	return ret;
}

ll range_sum(ll left, ll right) {
	return tree_sum(right) - tree_sum(left - 1);
}

int main() {

	cin >> N >> M >> K;
	tree.resize(N + 1, 0);
	init_arr.resize(N + 1, 0);
	for (int i = 1; i <= N; i++) {
		cin >> x;
		init_arr[i] = x;// 초기 배열
		update_tree(i, x); // idx = 1부터 시작
	}
	ll a, b, c;
	//for (int j = 1; j <= N; j++) {
	//	cout << tree[j] << ' ';
	//}cout << '\n';

	for (int i = 0; i < M + K; i++) {
		cin >> a >> b >> c;
		if (a == 1) {
			update_tree(b, c - init_arr[b]);
			init_arr[b] = c;
		}
		else cout << range_sum(b, c) << '\n';

		//for (int j = 1; j <= N; j++) {
		//	cout << tree[j] << ' ';
		//}cout << '\n';
	}
	return 0;
}
#endif // 01

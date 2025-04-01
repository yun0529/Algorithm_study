#if 01
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int in[100004], post[100004];

void pre(int root, int st, int ed) {
	if (st<0 || ed >= n || st > ed) return;
	int r = root;
	int root_idx = find(in + st, in + ed, r) - in;

	int l_len = root_idx;
	int r_len = n - 1 - root_idx;

	cout << in[root_idx] << ", " << root_idx << '\n';
	//cout << in[root_idx] << ' ';
	pre(post[st + l_len], st, root_idx - 1);
	pre(post[l_len + r_len], root_idx + 1, ed);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> in[i];
	}
	for (int i = 0;i < n;i++) {
		cin >> post[i];
	}
	int root = post[n - 1];

	pre(root, 0, n-1);

	return 0;
}
#endif // 01

/*
6
4 1 5 2 3 7
4 5 1 7 3 2
*/
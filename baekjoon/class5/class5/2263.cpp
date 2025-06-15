#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
int in[100004], in_idx[100004], post[100004];

void pre(int in_st,int in_ed, int po_st, int po_ed) {
	if (in_st > in_ed || po_st > po_ed) return;

	int root = post[po_ed];
	//int in_root_idx = find(in + in_st, in + in_ed, root) - in;
	int in_root_idx = in_idx[post[po_ed]]; // 탐색하지 않고 바로 값을 가져올 수 있음.

	int l_len = in_root_idx - in_st - 1;
	int r_len = in_ed - in_root_idx;

	//cout << in[root_idx] << ", " << root_idx << '\n';
	cout << in[in_root_idx] << ' ';
	pre(in_st, in_root_idx - 1, po_st, po_st + l_len);
	pre(in_root_idx+1, in_ed, po_st + l_len + 1, po_ed - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> n;
	for (int i = 0;i < n;i++) {
		cin >> in[i];
		in_idx[in[i]] = i; // inorder의 값에 해당하는 index 저장 => 시간 감소..!
	}
	for (int i = 0;i < n;i++) {
		cin >> post[i];
	}

	pre(0, n - 1, 0, n - 1);

	return 0;
}
#endif // 01

/*
6
4 1 5 2 3 7
4 5 1 7 3 2
*/
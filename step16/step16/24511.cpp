#include <iostream>
#include <deque>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	deque<pair<int, int>> dq;
	int n, a, b, m, c;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a;
		dq.push_back(make_pair(a, 0));
	}
	std::deque<pair<int, int>>::iterator iter;
	iter = dq.begin();
	for (int i = 0;i < n;i++)
	{
		iter.
		std::cout << *iter << " ";
	}
	for (int i = 0; i < n; i++) {
		cin >> b;
		dq.push_back(make_pair(a, 0));
	}
	return 0;
}
#if 01
#include <iostream> 
using namespace std;

int n, arr[1000004], dp[1000004], num, len;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	fill(arr, arr + 1000004, -2100000000);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		auto lowerPos = lower_bound(arr, arr + len, num);
		if (*lowerPos == -2100000000) ++len;
		//dp[i] = lowerPos - arr;
		*lowerPos = num;
	}
	cout << len << '\n';
	for (int i = 0; i < len; ++i)
		cout << arr[i] << ' ';
	cout << '\n';
	for (int j = len - 1; j >= 0; j--)
		cout << arr[dp[j]] << ' ';

	return 0;
}
#endif
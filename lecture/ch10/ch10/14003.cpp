#if 0
#include <iostream> 
using namespace std;

int n, arr[1000004], num, len;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	fill(arr, arr + 1000004, -2100000000);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		auto lowerPos = lower_bound(arr, arr + len, num);
		if (*lowerPos == -2100000000) ++len;
		*lowerPos = num;
	}
	cout << len << '\n';
	for (int j = 0; j < len; j++)
		cout << arr[j] << ' ';

	return 0;
}
#endif // lower_bound 실패

#if 01
#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

int n, arr[1000004], dp[1000004], num, len;
vector<int> v;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		v.push_back(num);
	}
	arr[0] = v[0];
	dp[0] = 0;
	len = 1;
	for (int i = 0; i < n; ++i) {
		//if (arr[len - 1] < v[i]) {
		//	arr[len] = v[i];
		//	dp[i] = len;
		//	len++;
		//}
		//else {
			auto lowerPos = lower_bound(arr, arr + len, v[i]);
			if (*lowerPos == 0) ++len;
			dp[i] = lowerPos - arr;
			*lowerPos = v[i]; // 없는 경우든 있는 경우든 len 위치나 이상이 되는 부분에 입력됨.
		//}
	}
	
	int max_len = *max_element(dp, dp + n) + 1; // len 과 동일
	cout << max_len << '\n';
	vector<int> ret;
	for (int i = n - 1; i >= 0 && max_len > 0; i--) {
		//cout << dp[i] << ' ';
		if (dp[i] == max_len - 1) {
			ret.push_back(v[i]);
			max_len--;
			
		}
	}
	//cout << '\n';
	for (int j = ret.size()-1; j >= 0; j--)
		cout << ret[j] << ' ';

	return 0;
}
#endif
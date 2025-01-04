//#include <iostream>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//ll n, m, arr[300004], lo, hi, ret = 1e18;
//
//bool bincheck(int a) {
//	long long num = 0;
//	for (int i = 0; i < m; i++) {
//		num += arr[i] / a;
//		if (arr[i] % a) num++;
//	}
//	return num <= n;
//}
//int main() {
//	cin >> n >> m;
//	lo = 0;
//	for (int i = 0; i < m; i++) {
//		cin >> arr[i];
//		hi = max(hi, arr[i]);
//	}
//	while (lo <= hi) {
//		ll mid = (lo + hi) / 2;
//		if (bincheck(mid)) {
//			ret = min(ret, mid);
//			hi = mid - 1;
//		}
//		else {
//			lo = mid + 1;
//		}
//	}
//	cout << ret;
//}
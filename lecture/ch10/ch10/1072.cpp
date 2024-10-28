//#include <iostream>
//using namespace std;
//
//int x, y, z, ret = 0;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> x >> y;
//	z = y * 100 / x;
//
//	int lo = y, hi = x;
//	while (lo <= hi) {
//		int mid = (lo + hi) / 2;
//		if (mid * 100 / x > z) {
//			hi = mid - 1;
//			ret = mid;
//		}
//		else {
//			lo = mid + 1;
//
//		}
//	}
//
//	if (ret) cout << ret - y;
//	else cout << -1;
//
//	return 0;
//}
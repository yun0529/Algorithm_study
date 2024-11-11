//#include <iostream>
//using namespace std;
//
//typedef long long ll;
//
//ll x, y, z, ret = 0;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> x >> y;
//	z = y * 100 / x;
//
//	ll lo = 0, hi = 1000000000;
//	while (lo <= hi) {
//		ll mid = (lo + hi) / 2;
//		if ((mid + y) * 100 / (mid + x) > z) {
//			hi = mid - 1;
//			ret = mid;
//		}
//		else {
//			lo = mid + 1;
//		}
//	}
//
//	if (ret) cout << ret;
//	else cout << -1;
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//
//ll n, q, ret[50004], x;
//vector<ll> v;
//
//ll binarySearch(ll target) {
//	ll lo = 0, hi = n - 1, ret = 0;
//	while (lo <= hi) {
//		ll mid = (lo + hi) / 2;
//		if (v[mid] == target) return mid;
//		else if (v[mid] > target) {
//			hi = mid - 1;
//		}
//		else lo = mid + 1;
//	}
//	return ret;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL); cin.tie(NULL);
//
//	cin >> n >> q;
//
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		v.push_back(x);
//	}
//	sort(v.begin(), v.end());
//	for (int i = 0; i < q; i++) {
//		ll m = 0;
//		cin >> m;
//
//		if (v[0] == m || v[n-1] == m) {
//			cout << 0 << '\n';
//			continue;
//		}
//
//		ll pos = binarySearch(m);
//		cout << pos * (n - (pos + 1)) << '\n';
//	}
//	//for (int i = 0; i < q; i++) { // q¹ø ¹Ýº¹
//	//	ll m = 0;
//	//	cin >> m;
//
//	//	auto idx = find(v.begin(), v.end(), m);
//	//	//cout << idx << ' ';
//	//	if (idx == v.begin() || idx == v.end()) {
//	//		cout << 0 << '\n';
//	//		continue;
//	//	}
//
//	//	ll pos = idx - v.begin();
//	//	//ret[i] = ;
//
//	//	cout << pos * (n - (pos + 1)) << '\n';
//	//	//cout << "idx : " << idx - v.begin() << ", " << "n : " << n << ", " << "ret : " << ret[i] << '\n';
//	//}
//	return 0;
//}
//#include<iostream>
//#include<vector>
//using namespace std;
//int n, ret = 0;
//vector<pair<int, int>> v;
//
//void go(int here, int sum) {
//	if (here == n) {
//		ret = max(ret, sum);
//		return;
//	}
//	for (int i = here; i < n; i++) {
//		if (i + v[i].first <= n) {
//			sum += v[i].second;
//			go(i + v[i].first, sum);
//			sum -= v[i].second;
//		}
//	}
//	ret = max(ret, sum);
//	return;
//}
//
//int main() {
//
//	cin >> n;
//	int a, b;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		v.push_back({ a,b });
//	}
//
//	//for (int i = 0; i < n; i++) {
//	//	cin >> a >> b;
//	//	v.push_back({ a,b });
//	//}
//	go(0, 0);
//	cout << ret;
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, mt = -10000004;
//int a, psum[100005];
//int main() { // ´©ÀûÇÕ
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int k = 1; k <= n; k++) {
//		cin >> a;
//		psum[k] += psum[k - 1] + a;
//	}
//	for (int k = m; k <= n; k++) {
//		mt = max(mt, psum[k] - psum[k - m]);
//	}
//	cout << mt;
//
//	return 0;
//}
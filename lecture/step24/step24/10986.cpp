//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, x;
//long long cnt = 0;
//long long psum[1004];
//long long sum;
//int main() { // ´©ÀûÇÕ
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		cin >> x;
//		sum = x + sum;
//		psum[sum % m]++;
//	}
//	//if (psum[n] < m) {
//	//	cout << cnt;
//	//	return 0;
//	//}
//	//int a = 2;
//	for (int i = 0; i <= 1004; i++) {
//		cnt += psum[i] * (psum[i]-1) / 2;
//		/*for (int j = 0; j <= i - 2; j++) {
//			if ((psum[i] - psum[j]) % m == 0) {
//				cnt++;
//			}
//		}*/
//	}
//	cout << psum[0] + cnt;
//
//	return 0;
//}
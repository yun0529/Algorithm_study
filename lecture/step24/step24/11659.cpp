//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m,i,j;
//int arr[100004], psum[100005];
//int main() { // ´©ÀûÇÕ
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//	
//	for (int k = 1; k <= n; k++) {
//		cin >> arr[k];
//		psum[k] += psum[k-1] + arr[k];
//	}
//	for (int k = 1; k <= m; k++) {
//		cin >> i >> j;
//		cout << psum[j] - psum[i-1] << '\n';
//	}
//
//	return 0;
//}
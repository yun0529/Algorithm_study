//#include <iostream>
//#include <bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//int n;
//ll dp[94]; // 값이 너무 커지기 때문에 long long으로 선언
//ll fibo(int n) {
//	if (n <= 1) return n;
//	ll& ret = dp[n];
//	if (ret != -1) return ret;
//	return ret = fibo(n - 1) + fibo(n - 2); // ret(dp[n]) 갱신 필요
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	memset(dp, -1, sizeof(dp));
//	cout << fibo(n);
//
//	return 0;
//}
//#include <bits/stdc++.h>
//using namespace std;
//int dp[1004];
//// Top Down
//int fibo(int n) {
//	if (n <= 1) return n;
//	int& ret = dp[n]; // �޸������̼�
//	if (ret != -1)return ret; // ���� ����Ǿ��ִٸ� �״�� ���
//	return ret = fibo(n - 1) + fibo(n - 2);
//}
////int main() {
////	int n = 10;
////	memset(dp, -1, sizeof(dp));
////	int ret = fibo(n);
////	cout << ret;
////}
//
//
////// Bottom Up
////int main() {
////	int n = 10;
////	memset(dp, -1, sizeof(dp));
////	dp[0] = 0;
////	dp[1] = 1;
////	for (int i = 2; i <= n; i++) {
////		dp[i] = dp[i - 1] + dp[i - 2];
////	}
////	cout << dp[n];
////}
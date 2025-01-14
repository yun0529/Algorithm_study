//#include <iostream>
//#include <bits/stdc++.h>
//typedef long long ll;
//using namespace std;
//
///*
//if a <= 0 or b <= 0 or c <= 0, then w(a, b, c) returns:
//	1
//
//if a > 20 or b > 20 or c > 20, then w(a, b, c) returns:
//	w(20, 20, 20)
//
//if a < b and b < c, then w(a, b, c) returns:
//	w(a, b, c-1) + w(a, b-1, c-1) - w(a, b-1, c)
//
//otherwise it returns:
//	w(a-1, b, c) + w(a-1, b-1, c) + w(a-1, b, c-1) - w(a-1, b-1, c-1)
//*/
//ll dp[101][101][101];
//ll go(int a, int b, int c) {
//	ll& ret = dp[a+50][b + 50][c + 50];
//	if (ret != -1) return ret;
//	if (a <= 0 || b <= 0 || c <= 0) return ret = 1;
//	if (a > 20 || b > 20 || c > 20) return ret = go(20, 20, 20);
//	if (a < b && b < c) return ret = go(a, b, c - 1) + go(a, b - 1, c - 1) - go(a, b - 1, c);
//	
//	return ret = go(a - 1, b, c) + go(a - 1, b - 1, c) + go(a - 1, b, c - 1) - go(a - 1, b - 1, c - 1);
//}
//
//int A, B, C;
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	fill(&dp[0][0][0], &dp[0][0][0] + 101 * 101 * 101, -1);
//	while (true) {
//		cin >> A >> B >> C;
//		if (A == -1 && B == -1 && C == -1)break;
//		cout << "w(" << A << ", " << B << ", " << C << ") = " << go(A, B, C)<<'\n';
//	}
//
//	return 0;
//}
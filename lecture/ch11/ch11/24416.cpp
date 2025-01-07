//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//int n;
//int fib_cnt, fibo_cnt;
//ll fib(int n) {
//	
//	if (n == 1 || n == 2) {
//		fib_cnt++;
//		return 1;
//	}
//    else return (fib(n - 1) + fib(n - 2));
//}
//ll f[44];
//ll fibonacci(int n) {
//	f[1] = f[2] = -1;
//	for (int i = 3; i <= n; i++) {
//		f[i] = f[i - 1] + f[i - 2];
//		fibo_cnt++;
//	}
//	return f[n];
//}
//
//int main() {
//
//	cin >> n;
//	fib(n);
//	fibonacci(n);
//	cout << fib_cnt << ' ' << fibo_cnt;
//	return 0;
//}
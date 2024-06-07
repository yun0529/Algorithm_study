//#include <bits/stdc++.h>
//using namespace std;
//
//long long a, b, c;
//
//long long go(long long a, long long b) {
//	if (b == 1) return a % c; // 기저사례
//
//	long long ret = go(a, b / 2); // a ^ 64은 a^32 * a^32와 같음. 이런식으로 계산 횟수를 계속 줄임. O(log2 64) 이렇게 된다.
//	ret = (ret * ret) % c; // 나눈 ret을 다시 곱하고 나누기 연산 진행
//
//	if (b % 2) ret = (ret * a) % c; // 홀수인 경우 한번 더 곱한다 2^5 == 2^2 * 2^2 * 2^1이기 때문
//	return ret;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> a >> b >> c;
//	//sum = a;
//	//for (long long i = 0; i < b; i++) { // (a + c) % c == a % c + b % c 
//	//	sum *= a;
//	//}
//
//	cout << go(a, b);
//
//	return 0;
//
//}
#if 0
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
/*
1�� ���� ���� 2�� ���� ���� ���� �ʾƾ� �Ѵ�.
N�� ���� ���� N-1�� ���� ���� ���� �ʾƾ� �Ѵ�.
i(2 �� i �� N-1)�� ���� ���� i-1��, i+1�� ���� ���� ���� �ʾƾ� �Ѵ�.
*/
ll n, arr[1004], dp[1004][3];
ll mn = -987654321;
int go(int n, int c) {
	if (dp[n - 1] == dp[n] || dp[n + 1] == dp[n]) return 987654321;
	if ((n == 1 || n == 2) && dp[1] == dp[2]) return 987654321;
	ll& ret = dp[n][c];
	
	return ret = min(ret, go()) ;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;

	for (int i = 0; i < n * 3; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n * 3; i++) {

	}
	return 0;
}
#endif // 01

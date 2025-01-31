#if 0
#include <iostream>
#include <map>
#include <math.h>
using namespace std;
typedef long long ll;

ll n, mod = 1000000007, ret, arr[3];
map<ll, ll> mp;

ll fibo(ll n) {
	if (n <= 2) return mp[n];
	if (mp[n] != 0)	return mp[n];

	if (n % 2 == 0)
		return mp[n] = ((fibo(n / 2) % mod) * ((fibo(n / 2 + 1) % mod) + (fibo(n / 2 - 1) % mod))) % mod;
	else
		return mp[n] = (((fibo((n + 1) / 2) % mod) * (fibo((n + 1) / 2) % mod))
			+ ((fibo((n - 1) / 2) % mod) * (fibo((n - 1) / 2) % mod))) % mod;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> n;
	mp[0] = 0;
	mp[1] = 1;
	mp[2] = 1;
	
	cout << fibo(n);
	return 0;
}
#endif // 01

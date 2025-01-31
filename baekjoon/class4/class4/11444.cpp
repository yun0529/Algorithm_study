#if 01
#include <iostream>
using namespace std;
typedef long long ll;

ll n, mod = 1000000007, ret, arr[3];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> n;
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;
	for (ll i = 3;i <= n;++i) {
		arr[i % 3] = (arr[(i+1) % 3] + arr[(i+2) % 3]) % mod;
		ret = arr[i % 3];
	}
	cout << ret;
	return 0;
}
#endif // 01

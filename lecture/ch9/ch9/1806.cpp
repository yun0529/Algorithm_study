#if 0
#include <iostream>
using namespace std;
typedef long long ll;

int n, s, x, l, r;
int cnt = 987654321;
ll psum[100004], arr[100004];
ll sum;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> n >> s;
	for (int i = 1;i <= n; ++i) {
		cin >> arr[i];
		//psum[i] = psum[i - 1] + arr[i];
		//if (sum == 0 && psum[i] >= s) {
		//	sum = psum[i];
		//	r = i; // 끝 지점 설정
		//	cnt = i;
		//}
	}
	l = 0;r = 0;
	while (l <= r && r <= n) {
		
		if (sum < s) {
			sum += arr[++r];
		}
		else {
			sum -= arr[++l];
		}
		if (sum >= s) cnt = min(cnt, r - l);
		//cout << l << ", " << r << ", " << sum << ", " << cnt << '\n';
	}

	if (cnt == 987654321) {
		cout << 0;
	}
	else {
		cout << cnt;
	}
	
	return 0;
}
#endif 
#include <bits/stdc++.h>
using namespace std;

int T;
long long n;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;
	string s;
	for (int i = 0; i < T; i++) {

		cin >> n;
		//long long sum = 0;
		//for (long long j = n; j > 0; j--) {
		//	sum = sum * j;
		//}
		//cout << sum << '\n';

		for (int j = n; j > 0; j -= 5) {
			
		}

		sum = sum + n / 5;
		sum = sum + n / 10;
		cout << n / 5 << '\n';
	}

	return 0;
}
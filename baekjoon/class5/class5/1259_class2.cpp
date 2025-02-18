#if 0
#include <iostream>
using namespace std;

int n, m, s, e;
char arr[10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	n = 1;
	while (true) {
		cin >> n;
		if (n == 0) break;
		int num = n;
		int cnt = -1;
		while (num) {
			cnt++;
			arr[cnt] = num % 10;
			num = num / 10;
		}
		bool flag = true;
		for (int i = cnt; i > cnt / 2; i--) {
			if (arr[i] != arr[cnt - i]) {
				flag = false;
				break;
			}
		}
		if (flag) cout << "yes" << '\n';
		else cout << "no" << '\n';
	}

	return 0;
}

#endif
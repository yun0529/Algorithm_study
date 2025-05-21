#if 0
#include <iostream>

using namespace std;

int n, lcnt[1000004], peo[100004], mx;
bool arr[1000004];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> peo[i];
		arr[peo[i]] = true;
	}   

	for (int i = 0; i < n; i++) {

		for (int j = peo[i] * 2; j <= 1000000; j += peo[i]) {
			if (arr[j]) {
				lcnt[j]--; // 이길 수 없는 수가 있으면 cnt--
				lcnt[peo[i]]++; // peo[i] : 첫 값 -> 배수를 이길 수 있음.
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << lcnt[peo[i]] << ' ';
	}

	return 0;
}
#endif // 01

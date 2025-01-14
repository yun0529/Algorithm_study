#if 0
#include<iostream>
#include<algorithm>
using namespace std;

int n, arr[1004], s, e, cnt, mx, sum, start_date = 987654321,end_date;

int main() {

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> s >> e; // 시작, 종료
		for (int j = s; j <= e; ++j) {
			arr[j]++;
		}
		start_date = min(start_date, s);
		end_date = max(end_date, e);
	}
	//for (int i = start_date; i <= end_date; ++i) {
	//	cout << arr[i] << ' ';
	//}cout << '\n';
	for (int i = start_date; i <= end_date + 1; ++i) {
		if (arr[i] == 0) { // 넓이 더하기 및 초기화
			sum += cnt * mx;
			cnt = 0;
			mx = 0;
			//cout << "sum : " << sum << '\n';
			continue;
		}
		mx = max(mx, arr[i]);
		cnt++;
	}
	cout << sum;
	return 0;
}
#endif
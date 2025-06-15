//#include <iostream>
//#include <vector>
//#include <tuple>
//#include <algorithm>
//using namespace std;
//
//int arr[104], prev_list[104], cnt[104], len, ret = 1, n, a,b;
//vector<int> v;
//pair<int, int> p[104];
//
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		p[i] = { a,b };
//	}
//	sort(p, p + n);
//	//fill(cnt, cnt + 104, 1);
//	//fill(prev_list, prev_list + 104, -1);
//
//	for (int i = 0; i < n; i++) {
//		auto pos = lower_bound(arr, arr + len, p[i].second);
//		if (*pos == 0) len++;
//		*pos = p[i].second;
//		for (int j = 0; j < n; j++) {
//			printf("%d ", arr[j]);
//		}
//		printf("\n");
//	}
//	cout << n - len;
//	return 0;
//}
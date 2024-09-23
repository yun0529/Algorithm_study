//#include <bits/stdc++.h>
//using namespace std;
//
//int n, check[4000004], arr[4000004], sum = 0, ret, lo, hi;;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 2; i <= n; i++) {
//		if (check[i])continue;
//		for (int j = i * 2; j <= n; j += i) {
//			check[j] = 1;
//		}
//	}
//	int cnt = 0;
//
//	for (int i = 2; i <= n; i++) {
//		if (!check[i]) {
//			arr[cnt] = i;
//			cnt++;
//		}	
//	}
//
//	while (true) {
//		if (sum >= n) {
//			sum -= arr[lo];
//			lo++;
//		}
//		else if (hi == cnt) break;
//		else {
//			sum += arr[hi];
//			hi++;
//		}
//		
//		if (sum == n) {
//			ret++;
//		}
//	}
//	cout << ret;
//	return 0;
//}
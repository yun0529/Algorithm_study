//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, x, cnt = 0;
//int arr[100004] = {0, };
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		//cin >> x;
//		//arr[x]++;
//	}
//	if (m > 200000) { cout << 0; }
//	else {
//		//for (int i = 0; i < n; i++) { // 이건 왜 틀렸다는지 모르겠네..
//		//	if (arr[i] == 1 && arr[m - i] == 1) {
//		//		cnt++;
//		//		arr[i]--;
//		//		arr[m - i]--;
//		//	}
//		//}
//
//		for (int i = 0; i < n; i++) {
//			for (int j = i+1; j < n; j++) {
//				if (arr[i] + arr[j] == m) cnt++;
//			}
//		}
//		cout << cnt;
//	}
//	
//	return 0;
//}
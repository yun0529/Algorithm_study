//#include <bits/stdc++.h>
//using namespace std;
//
//int n, t_cnt = 0, h_cnt = 0, sum = 0;
//char arr[24][24];
//int b[44], ret = 987654321;
//
//void go(int here) {
//	if (here == n) { // 모두 돌았으면
//		sum = 0;
//		for (int i = 1; i < (1 << (n)); i *= 2) {
//			t_cnt = 0;
//			for (int j = 1; j <= n; j++) {
//				if (b[j] & i)t_cnt++; // 각각의 요소를 확인하고 t이면 ++
//			}
//			sum += min(t_cnt, n - t_cnt); // t와 h수를 비교하여 작은거 더함.
//			// 어짜피 뒤집을 수 있으니 작은거 더하면 된다.
//		}
//		ret = min(ret, sum); 
//		return;
//	}
//
//	go(here + 1); // 안뒤집고 다음칸으로
//	b[here] = ~b[here];
//	go(here + 1); // 뒤집고 다음칸으로
//}
//
//int main() {
//	// 최대 2^40까지 생각해야함..
//	// but. 행만 먼저 뒤집으면 나머지는 뒤집을지 말지를 판단만 하면 된다.
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		int idx = 1;
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 'T') b[i] |= idx;
//			idx *= 2;
//		}
//	}
//	if (t_cnt == 2) {
//		cout << 2;
//		return 0;
//	}
//	go(1);
//	//for (int i = 0; i < n; i++) {
//	//	cout << b[i] << " ";
//	//}
//	cout << ret;
//
//	return 0;
//}
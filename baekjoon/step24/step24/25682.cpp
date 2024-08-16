//#include <bits/stdc++.h>
//using namespace std;
//
//int n, m, k;
//char arr[2004][2004];
//int psum[2004][2004];
//
//int findMin(char color) {
//	int rst = 100000000;
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			int cnt = 0;
//			if ((i + j) % 2 == 0 && arr[i][j] != color) {
//				cnt = 1; // 짝수일 때 해당하는 색이 아닌 경우
//			}
//			else if ((i + j) % 2 == 1 && arr[i][j] == color) {
//				cnt = 1;
//			}
//			psum[i+1][j+1] = psum[i + 1][j] + psum[i][j + 1] - psum[i][j] + cnt;
//		}
//	}
//	int tmp;
//	for (int i = 0; i <= n - k; i++) {
//		for (int j = 0; j <= m - k; j++) {
//
//			tmp = psum[i + k][j + k] - psum[i][j + k] - psum[i + k][j] + psum[i][j];
//			rst = (rst < tmp) ? rst : tmp;
//		}
//		
//	}
//	return rst;
//}
//
//int main() { // 누적합
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	cout << min(findMin('B'), findMin('W'));
//
//	return 0;
//}
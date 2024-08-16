//#include <bits/stdc++.h>
//using namespace std;
//
//int h, w;
//char x;
//
//int arr[101][101];
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> h >> w;
//	for (int i = 0;i < h;i++) {
//		for (int j = 0;j < w;j++) {
//			cin >> x;
//			if (x == 'c') arr[i][j] = 0;
//			else arr[i][j] = -1;
//		
//		}
//	}
//	 
//	for (int i = 0;i < h;i++) {
//		for (int j = 0;j < w;j++) {
//			if (arr[i][j] != -1 && arr[i][j+1] != 0) {
//				arr[i][j + 1] = arr[i][j] + 1;
//			}
//		}
//	}
//
//	for (int i = 0;i < h;i++) {
//		for (int j = 0;j < w;j++) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << '\n';
//	}
//
//	return 0;
//}
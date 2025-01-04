//#include<iostream>
//using namespace std;
//
//int arr[6][6], visited[6][6], cnt, ret;
//
//int main() {
//	int a = 0;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> arr[i][j];
//		}
//	}
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			cin >> a;
//			ret++;
//			for (int k = 0; k < 5; k++) {
//				for (int r = 0; r < 5; r++) {
//					if (arr[k][r] == a) {
//						visited[k][r] = 1;
//					}
//				}
//			}
//			bool flag = true;
//			cnt = 0;
//			for (int k = 0; k < 5; k++) { // 가로
//				flag = true;
//				for (int r = 0; r < 5; r++) {
//					if (!visited[k][r]) {
//						flag = false;
//						break;
//					}
//				}
//				if (flag) {
//					//cout << 'c' << k<<'\n';
//					cnt++;
//				}
//			}
//			for (int k = 0; k < 5; k++) { // 세로
//				flag = true;
//				for (int r = 0; r < 5; r++) {
//					if (!visited[r][k]) {
//						flag = false;
//						break;
//					}
//				}
//				if (flag) {
//					//cout << 'r' << k << '\n';
//					cnt++;
//				}
//			}
//			if (visited[0][0] && visited[1][1] && visited[2][2] && visited[3][3] && visited[4][4]) cnt++;
//			if (visited[0][4] && visited[1][3] && visited[2][2] && visited[3][1] && visited[4][0]) cnt++;
//			if (cnt >= 3) {
//				cout << ret; cout << '\n';
//				//for (int k = 0; k < 5; k++) { // 세로
//				//	for (int r = 0; r < 5; r++) {
//				//		cout << visited[k][r] << ' ';
//				//	}
//				//	cout << '\n';
//				//}
//				return 0;
//			}
//			
//		}
//	}
//
//	return 0;
//}
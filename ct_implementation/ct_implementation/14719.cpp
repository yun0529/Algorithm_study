//#include <iostream> 
//using namespace std;
//
//int arr[504][504], h, w, ret;
//int psum[504];
//int main(void) {
//
//	cin >> h >> w;
//	int x;
//	for (int i = 1; i <= w; i++) {
//		cin >> x;
//		for (int j = 0; j < x; j++) {
//			arr[j][i] = 1; // 높이까지 1로 채움
//		}
//	}
//	
//	//for (int i = 0; i < h; i++) {
//	//	for (int j = 1; j <= w; j++) {
//	//		cout << arr[i][j] << ' ';
//	//	}
//	//	cout << '\n';
//	//}
//
//	for (int i = 0; i < h; i++) {
//		int prev = 0, next = 0;
//		for (int j = 1; j <= w; j++) {
//			if (arr[i][j] == 1) {
//				if (prev == 0) { // 이전에 벽이 있으면
//					prev = j;
//				}
//				else {
//					next = j;
//				}
//			}
//			
//		}
//		if (prev == 0 || next == 0)continue;
//		//cout << prev << ' ' << next;
//		for (int j = prev; j <= next; j++) {
//			if (arr[i][j] == 0) {
//				ret++;
//			}
//		}
//		//cout << ' ' << ret << '\n';
//	}
//	cout << ret;
//	return 0;
//}
//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int n, count = 0;
//	int paper[100][100] = {0, };
//	int arr[100][2];
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i][0] >> arr[i][1];
//		for (int j = arr[i][1]; j < arr[i][1] + 10; j++) {
//			for (int k = arr[i][0]; k < arr[i][0] + 10; k++) {
//				paper[j][k] += 1;
//			}
//		}
//	}
//
//	for (int i = 0; i < 100; i++) {
//		for (int j = 0; j < 100; j++) {
//			if (paper[i][j] >= 1) {
//				count += 1;
//			}
//		}
//	}
//	cout << count;
//
//	return 0;
//}
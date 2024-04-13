//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int n, m;
//	int arr1[201][201];
//
//	cin >> n >> m;
//
//	for (int i = 0; i < n*2; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> arr1[i][j];
//		}
//	}
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			arr1[i][j] = arr1[i][j] + arr1[i + n][j];
//			cout << arr1[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
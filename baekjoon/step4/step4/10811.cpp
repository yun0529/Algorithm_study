//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int n, m, a, b, tmp;
//	int arr[101] = { 0, };
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++) {
//		arr[i] = i;
//	}
//
//	for (int i = 1; i <= m; i++) {
//		cin >> a >> b;
//		for (int j = a; j <= b; j++) {
//			for (int k = j; k <= b; k++) {
//				tmp = arr[j];
//				arr[j] = arr[k];
//				arr[k] = tmp;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
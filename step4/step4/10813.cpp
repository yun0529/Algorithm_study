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
//		tmp = arr[a];
//		arr[a] = arr[b];
//		arr[b] = tmp;
//	}
//	for (int i = 1; i <= n; i++) {
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
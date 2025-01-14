//#include<iostream>
//using namespace std;
//
//char arr[401][401];
//
//int main() {
//	int n;
//	cin >> n;
//	int a = 0;
//	int b = 4 * n - 4;
//	fill(&arr[0][0], &arr[0][0] + 401 * 401, ' ');
//	for (int i = 0; i < n; i ++) {
//		for (int j = a; j <= b; j++) {
//			arr[a][j] = arr[j][a] = arr[j][b] = arr[b][j] = '*';
//		}
//		a += 2;
//		b -= 2;
//	}
//	for (int i = 0; i < (4 * n - 3); i ++) {
//		for (int j = 0; j < 4 * n - 3; j++) {
//			cout << arr[i][j];
//		}
//		cout << '\n';
//	}
//	return 0;
//}
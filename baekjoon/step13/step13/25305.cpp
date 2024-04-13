//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int n, k;
//
//	cin >> n >> k;
//	int* num = new int[n];
//
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//	}
//
//	for (int i = 0; i < n; i++) {
//		
//		for (int j = 1; j < n; j++) {
//			if (num[j - 1] < num[j]) {
//				int temp = num[j - 1];
//				num[j - 1] = num[j];
//				num[j] = temp;
//			}
//		}
//	}
//	cout << num[k - 1];
//
//	delete num;
//	return 0;
//}
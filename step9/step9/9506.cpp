//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int n;
//
//	while (true) {
//		int sum = 0, count = 0;
//		int arr[10000];
//		cin >> n;
//		if (n == -1) {
//			break;
//		}
//
//		for (int i = 1; i < n; i++) {
//			if (n % i == 0) {
//				arr[count] = i;
//				count++;
//				sum = sum + i;
//			}
//		}
//		if (sum == n) {
//			cout << n << " = ";
//			for (int i = 0; i < count; i++) {
//				cout << arr[i];
//				if (i < count - 1) {
//					cout << " + ";
//				}
//				else {
//					cout << endl;
//				}
//			}
//		}
//		else {
//			cout << n << " is NOT perfect." << endl;
//		}
//	}
//	return 0;
//}
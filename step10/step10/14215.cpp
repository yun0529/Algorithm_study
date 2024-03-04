//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int arr[3];
//
//	cin >> arr[0] >> arr[1] >> arr[2];
//
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			if (arr[i] > arr[j]) {
//				int tmp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	while (true) {
//		if (arr[0] < arr[1] + arr[2]) {
//			cout << arr[0] + arr[1] + arr[2] << endl;
//			break;
//		}
//		else {
//			arr[0]--;
//		}
//	}
//
//	return 0;
//}
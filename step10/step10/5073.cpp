//#include <iostream>
//using namespace std;
//
//int main(void) {
//
//	int arr[3];
//	
//	while (true) {
//		cin >> arr[0] >> arr[1] >> arr[2];
//		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
//			break;
//		}
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				if (arr[i] > arr[j]) {
//					int tmp = arr[j];
//					arr[j] = arr[i];
//					arr[i] = tmp;
//				}
//			}
//		}
//		if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0]) {
//			cout << "Equilateral" << endl;
//		}
//		else if (arr[0] <= arr[1] + arr[2] && (arr[0] == arr[1] || arr[2] == arr[1] || arr[2] == arr[0])) {
//			cout << "Isosceles" << endl;
//		}
//		else if (arr[0] < arr[1] + arr[2]) {
//			cout << "Scalene" << endl;
//		}
//		else {
//			cout << "Invalid" << endl;
//		}
//	}
//	
//	return 0;
//}
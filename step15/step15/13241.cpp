//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	long long a, b;
//	vector<long long> min;
//
//	cin >> a >> b;
//	for (int j = 1; j < 45000; j++) {
//		if (a > b) {
//			if (a * j % b == 0) {
//				cout << a * j;
//				break;
//			}
//		}
//		else {
//			if (b * j % a == 0) {
//				cout << b * j;
//				break;
//			}
//		}
//	}
//
//	return 0;
//}
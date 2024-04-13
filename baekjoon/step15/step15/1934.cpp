//#include <iostream>
//#include <vector>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, a, b;
//	vector<long> min;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a >> b;
//		for (int j = 1; j < 45000; j++) {
//			if (a > b) {
//				if (a * j % b == 0) {
//					min.push_back(a * j);
//					break;
//				}
//			}
//			else {
//				if (b * j % a == 0) {
//					min.push_back(b * j);
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << min[i] << "\n";
//	}
//	return 0;
//}
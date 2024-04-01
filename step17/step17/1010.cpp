//#include <iostream>
//using namespace std;
//
//long long comb(int n, int m) {
//	int sum = 1;
//	int bun = 1;
//	for (int i = m; i > m-n; i--) {
//		sum *= i;
//		sum /= bun;
//		bun++;
//	}
//	return sum;
//}
//
//int main(void) {
//
//	int x, n, m, sum = 1;
//	cin >> x;
//	
//	for (int k = 0; k < x; k++) {
//		cin >> n >> m;
//		/*sum = 1;
//		if (n == 1) {
//			cout << m << "\n";
//			continue;
//		}
//		else {
//			for (int i = 1; i <= (m - n); i++) {
//				sum += (i+1) * (n - 1);
//			}
//			cout << sum << "\n";
//		}*/
//		cout << comb(n, m)<< "\n";
//	}
//	
//	return 0;
//}
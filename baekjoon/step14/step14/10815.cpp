//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, m, tmp;
//	cin >> n;
//	vector<int> a;
//	vector<int> b;
//
//	for (int i = 0; i < n; i++) {
//		cin >> tmp;
//		a.push_back(tmp);
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> tmp;
//		b.push_back(tmp);
//	}
//	sort(a.begin(), a.end());
//
//	for (int i = 0; i < m; i++) {
//		int end = n - 1;
//		int start = 0;
//		while (start <= end) {
//			int mid = (start + end) / 2;
//			if (a[mid] == b[i]) {
//				b[i] = 1;
//				break;
//			}
//
//			if (a[mid] > b[i]) {
//				end = mid - 1;
//			}
//			else {
//				start = mid + 1;
//			}
//		}
//		if (start > end) {
//			b[i] = 0;
//		}
//	}
//
//	for (int i = 0; i < m; i++) {
//		cout << b[i] << " ";
//	}
//
//
//	return 0;
//}
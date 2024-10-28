//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int t, a, b, arr[20004], brr[20004];
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> t;
//	//for (int i = 0; i < t; i++) {
//	//	int cnt = 0;
//	//	cin >> a >> b;
//	//	vector<int> v[20004];
//	//	for (int j = 0; j < a; j++) {
//	//		cin >> arr[j];
//	//	}
//	//	for (int j = 0; j < b; j++) {
//	//		cin >> brr[j];
//	//	}
//	//	sort(arr, arr + a);
//	//	sort(brr, brr + b);
//	//	for (int j = 0; j < a; j++) {
//	//		for (int k = 0; k < b; k++) {
//	//			if (arr[j] > brr[k]) {
//	//				cnt++;
//	//			}
//	//			else break;
//	//		}
//	//	}
//	//	
//	//	cout << cnt << '\n';
//	//}
//	// LIS 풀이 -> 빠름
//	for (int i = 0; i < t; i++) {
//		int cnt = 0, maxValue = 0;
//		cin >> a >> b;
//		vector<int> n(a), m(b);
//		for (int j = 0; j < a; j++) {
//			cin >> n[j];
//		}
//		for (int j = 0; j < b; j++) {
//			cin >> m[j];
//		}
//		sort(n.begin(), n.end());
//		sort(m.begin(), m.end());
//		for (int j = 0; j < a; j++) {
//			auto lower_pos = lower_bound(m.begin(), m.end(), n[j]);
//			cnt += (int)(lower_pos - m.begin());
//		}
//
//		cout << cnt << '\n';
//	}
//
//	return 0;
//}
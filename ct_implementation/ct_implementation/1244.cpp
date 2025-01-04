//#include<iostream>
//#include<vector>
//using namespace std;
//
//int n, arr[104], s_num;
//vector<pair<int, int>> v;
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	cin >> s_num;
//	int a, b;
//	for (int i = 0; i < s_num; i++) {
//		cin >> a >> b;
//		v.push_back({ a,b });
//	}
//
//	for (auto i : v) {
//		if (i.first == 1) { // 남
//			int k = 1, cur = 1;
//			while(i.second * k <= n) { // 남자 범위 제대로 체크가 안돼서 틀렸는듯...
//				cur = i.second * k;
//				if (arr[cur -1] == 1)arr[cur -1] = 0;
//				else arr[cur -1] = 1;
//				k++;
//			}
//			//for (int i = 1; i <= n; i++) {
//			//	if (i % 20 == 0)cout << '\n';
//			//	cout << arr[i - 1] << ' ';
//			//}
//			//cout << '\n';
//		}
//		else { // 여
//			int l = i.second - 1, r = i.second - 1;
//			while (true) {
//				if (l - 1 < 0 || r + 1 >= n) break;
//				if (arr[l-1] == arr[r+1]) {
//					l--;
//					r++;
//				}
//				else {
//					break;
//				}
//			}
//			for (int k = l; k <= r; k++) {
//				if (arr[k] == 1)arr[k] = 0;
//				else arr[k] = 1;
//			}
//			//for (int i = 1; i <= n; i++) {
//			//	if (i % 20 == 0)cout << '\n';
//			//	cout << arr[i - 1] << ' ';
//			//}
//			//cout << '\n';
//		}
//	}
//	for (int i = 1; i <= n; i++) {
//		
//		cout << arr[i-1] << ' ';
//		if (i % 20 == 0)cout << '\n';
//	}
//
//	return 0;
//}
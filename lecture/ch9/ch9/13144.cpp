//#include <iostream>
//#include <algorithm>
//#include <unordered_set>
//using namespace std;
//
//int arr[100004], check[100004],cnt = 1, lp = 0, rp = 1;
//long long ret, n;
////unordered_set<int> s;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//	}
//	//ret += n;
//	if (n == 1) {
//		cout << 1;
//		return 0;
//	}
//	check[arr[lp]] = 1;
//	ret = n * (n + 1) / 2; // 범위를 더하고 마지막 남은 것을 따로 n*(n+1)/2 해줘도 됨
//	while (rp < n) {
//		if (!check[arr[rp]]) {
//			check[arr[rp++]] = 1;
//		}
//		else {
//			check[arr[lp++]] = 0;
//			ret -= n - rp; 
//		}
//	}
//
//	//for (int i = 2; i <= n; i++) {
//	//	for (int j = 0; j <= n-i; j++) {
//	//		s.clear();
//	//		for (int k = j; k < j+i; k++) {
//	//			s.insert(arr[k]);
//	//		}
//	//		if (s.size() == i) {
//	//			ret++;
//	//		}
//	//	}
//	//}
//	cout << ret;
//
//	return 0;
//}
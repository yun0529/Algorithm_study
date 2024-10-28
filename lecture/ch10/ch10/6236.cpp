//#include <iostream>
//using namespace std;
//
//int n, m, k, arr[100004], mx, ret, sum;
//
//bool check(int mid) {
//	if (mid < mx) return false;
//	int tmp = mid;
//	/*cout << "mid : " << mid << "\n";*/
//	int cnt = 1;
//	for (int i = 0; i < n; i++) {
//		if (tmp < arr[i]) {
//			//지갑에 넣고 다시 빼기
//			//cout << "tmp : " << tmp << " || ";
//			tmp = mid;
//			cnt++;
//			//cout << "cnt : " << cnt << " || ";
//		}
//		if (n - i + 1 == m - cnt) {
//			//cout << "cnt : " << cnt << " || ";
//			tmp = mid;
//			cnt++;
//		}
//		tmp = tmp - arr[i]; // 사용
//	}
//	//cout << "mid : " << mid << ", cnt : " << cnt << "\n";
//	return cnt <= m;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i];
//		sum += arr[i];
//		mx = max(mx, arr[i]);
//	}
//
//	int lo = 0, hi = sum;
//
//	while (lo <= hi) {
//		int mid = (lo + hi) / 2;
//
//		if (check(mid)) {
//			hi = mid - 1;
//			ret = mid;
//		}
//		else {
//			lo = mid + 1;
//		}
//	}
//	cout << ret;
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int limit, arr[15], sung, jun, cnt;
//
//int bnp(int cur) {
//	int a = 0;
//	for (int i = 0; i < 14; i++) {
//		if (cur >= arr[i]) {
//			a += cur / arr[i];
//			cur = cur % arr[i];
//			//cout << "구매 가격b : " << arr[i] << '\n';
//		}
//	}
//	//cout << "bnp" << cur + a * arr[13] << '\n';
//	return cur + a * arr[13];
//}
//int timing(int cur) {
//	int a = 0;
//	for (int i = 0; i < 14; i++) {
//		if (i > 2) {
//			if (arr[i - 3] < arr[i - 2] && arr[i - 2] < arr[i - 1] && arr[i - 1] < arr[i]) { // 상승
//				cur += a * arr[i];
//				a = 0;
//				//cout << "판매 가격t : " << arr[i] << '\n';
//			}
//			else if (arr[i - 3] > arr[i - 2] && arr[i - 2] > arr[i - 1] && arr[i - 1] > arr[i]) { // 하락
//				a += cur / arr[i];
//				cur = cur % arr[i];
//				//cout << "구매 가격t : " << arr[i] << '\n';
//			}
//		}
//	}
//	if (a > 0) cur += a * arr[13];
//	//cout << "tim" << cur << '\n';
//	return cur;
//}
//
//int main() {
//
//	cin >> limit;
//	for (int i = 0; i < 14; i++) {
//		cin >> arr[i];
//	}
//	if (bnp(limit) > timing(limit)) {
//		cout << "BNP";
//	}
//	else if(bnp(limit) < timing(limit)){
//		cout << "TIMING";
//	}
//	else {
//		cout << "SAMESAME";
//	}
//	return 0;
//}
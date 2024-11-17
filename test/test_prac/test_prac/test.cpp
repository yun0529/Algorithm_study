//#include<iostream>
//#include<string>
//#include <algorithm>
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//
//		int arr[7] = { 0, }, n;
//		string str;
//		cin >> str >> n;
//		//cout << str;
//		for (int i = 0; i < str.length(); i++) {
//			arr[i] = str[i] - '0';
//		}
//		int cnt = 0;
//		while (cnt < n) {
//			// 이미 내림차순인데 횟수 남은 경우 확인
//			int mx = 0;
//			bool flag = false;
//			for (int j = cnt; j < str.length(); j++) {// 내림차순 수행
//				if (mx > arr[j]) {
//					mx = max(mx, arr[j]);
//					flag = true;
//				}
//
//			}
//			if (flag) {
//				arr[cnt] = mx;
//				cnt++;
//			}
//			else {
//				int tmp = arr[str.length() - 1];
//				arr[str.length() - 1] = arr[str.length() - 2];
//				arr[str.length() - 2] = tmp;
//				cnt++;
//			}
//		}
//		cout << "#" << test_case << " ";
//		for (int i = 0; i < str.length(); i++) {
//			cout << arr[i];
//		}
//		cout << '\n';
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
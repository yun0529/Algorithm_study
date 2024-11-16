//#include<iostream>
//#include <stack>
//using namespace std;
//
//int n, arr[104][104], check[104];
//int main(int argc, char** argv)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int test_case;
//	int T = 10;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> n;
//		// 위쪽 N , 1 : N
//		// 아래쪽 S, 2 : S
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> arr[i][j];
//			}
//		}
//		// 다른 자성체 2개 있는지 확인
//		for (int i = 0; i < n; i++) {
//			stack<int> s;
//			for (int j = 0; j < n; j++) {
//				if (arr[j][i] != 0) {
//					if (!s.empty() && s.top() != arr[j][i]) {
//						if (s.top() == 1) { // 아래로 당겨지는 자성체
//							while (s.size()) { // 위로 밀리는 자성체가 들어왔으니 모두 제거
//								s.pop();
//							}
//							cnt++;
//						}
//						else if(arr[j][i] == 1) {
//							s.push(arr[j][i]);
//						}
//					}
//					else{
//						s.push(arr[j][i]);
//					}
//				}
//			}
//		}
//		cout << "#" << test_case << " " << cnt << '\n';
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
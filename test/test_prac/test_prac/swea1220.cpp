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
//		// ���� N , 1 : N
//		// �Ʒ��� S, 2 : S
//		int cnt = 0;
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> arr[i][j];
//			}
//		}
//		// �ٸ� �ڼ�ü 2�� �ִ��� Ȯ��
//		for (int i = 0; i < n; i++) {
//			stack<int> s;
//			for (int j = 0; j < n; j++) {
//				if (arr[j][i] != 0) {
//					if (!s.empty() && s.top() != arr[j][i]) {
//						if (s.top() == 1) { // �Ʒ��� ������� �ڼ�ü
//							while (s.size()) { // ���� �и��� �ڼ�ü�� �������� ��� ����
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
//	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
//}
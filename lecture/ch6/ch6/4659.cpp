//#include <bits/stdc++.h>
//using namespace std;
//
//int n, c, t;
//// ����(a,e,i,o,u) �ϳ��� �ݵ�� �����Ͽ��� �Ѵ�.
//// ������ 3�� Ȥ�� ������ 3�� �������� ���� �� �ȴ�.
//// ���� ���ڰ� ���������� �ι� ���� �ȵǳ�, ee �� oo�� ����Ѵ�.
//
//string str;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	while (true) {
//		bool ret = true;
//		cin >> str;
//		if (str == "end") break;
//
//		int a_cnt = 0;
//		int b_cnt = 0;
//		int zero_cnt = 0;
//		for (int i = 0;i < str.length();i++) {
//			if (i >= 1) {
//				if (str[i] != 'e' && str[i] != 'o' && str[i] == str[i - 1]) {
//					ret = false;
//					break;
//				}
//			}
//			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//			{
//				a_cnt++;
//				zero_cnt++;
//				b_cnt = 0;
//			}
//			else {
//				b_cnt++;
//				a_cnt = 0;
//			}
//
//			if (a_cnt == 3 || b_cnt == 3) {
//				ret = false;
//				break;
//			}
//		}
//		if (zero_cnt == 0) {
//			ret = false; 
//		}
//		if (!ret) cout << '<' << str << "> is not acceptable." << '\n';
//		else cout << '<' << str << "> is acceptable." << '\n';
//
//
//	}
//
//	return 0;
//}
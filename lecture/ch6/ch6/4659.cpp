//#include <bits/stdc++.h>
//using namespace std;
//
//int n, c, t;
//// 모음(a,e,i,o,u) 하나를 반드시 포함하여야 한다.
//// 모음이 3개 혹은 자음이 3개 연속으로 오면 안 된다.
//// 같은 글자가 연속적으로 두번 오면 안되나, ee 와 oo는 허용한다.
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
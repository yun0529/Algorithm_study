//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	string ans;
//
//	while (true) {
//		string a;
//		getline(cin,a);
//		ans = "yes";
//		stack <char> st;
//		if (a == ".") {
//			break;
//		}
//		for (int j = 0; j < a.length(); j++) {
//			if (a[j] == '(' || a[j] == ')'|| a[j] == '['|| a[j] == ']') {
//				if (a[j] == '(' || a[j] == '[') {
//					st.push(a[j]);
//				}
//				else if (!st.empty() && a[j] == ')' && st.top() == '(') {
//					st.pop();
//				}
//				else if (!st.empty() && a[j] == ']' && st.top() == '[') {
//					st.pop();
//				}
//				else {
//					ans = "no";
//					break;
//				}
//			}
//		}
//		if (!st.empty()) {
//			ans = "no";
//		}
//		cout << ans << "\n";
//		
//	}
//	return 0;
//}
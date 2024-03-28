//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n;
//	string a;
//	cin >> n;
//	string ans;
//
//	for (int i = 0; i < n; i++) {
//		
//		cin >> a;
//		ans = "YES";
//		stack <char> st;
//		for (int j = 0; j < a.length(); j++) {
//			if (a[j] == '(') {
//				st.push(a[j]);
//			}
//			else if (!st.empty() && a[j] == ')' && st.top() == '(') {
//				st.pop();
//			}
//			else {
//				ans = "NO";
//				break;
//			}
//		}
//		if (!st.empty()) {
//			ans = "NO";
//		}
//		cout << ans << "\n";
//		
//	}
//	
//	return 0;
//}
//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int k, a;
//	int sum = 0;
//	cin >> k;
//
//	stack<int> st;
//
//	for (int i = 0; i < k; i++) {
//		cin >> a;
//		if (a == 0) {
//			st.pop();
//		}
//		else {
//			st.push(a);
//		}
//	}
//	int size = st.size();
//	for (int i = 0; i < size; i++) {
//		sum += st.top();
//		st.pop();
//	}
//	cout << sum;
//	return 0;
//}
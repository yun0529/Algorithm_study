//#include <bits/stdc++.h>
//using namespace std;
//
//int arr[100];
//int n, cnt;
//int a = 0, b = 0;
//string s;
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	cin >> n;
//	//cnt = n;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//
//		stack<char> st; // 강의 코드...
//		for (char a : s) {
//			if (st.size() && st.top() == a)st.pop();
//			else st.push(a);
//		}
//		if (st.size() == 0)cnt++;
//		
//		//stack<char> st;
//		//stack<char> pop_st;
//		//for (int j = 0; j < s.length(); j++) {
//		//	st.push(s[j]);
//		//}
//		//for (int j = 0; j < s.length(); j++) {
//
//		//	if (pop_st.empty() && !st.empty()) {
//		//		pop_st.push(st.top());
//		//		st.pop();
//		//	}
//		//	else {
//		//		if (st.top() != pop_st.top()) {
//		//			pop_st.push(st.top());
//		//			st.pop();
//		//		}
//		//		else {
//		//			st.pop();
//		//			pop_st.pop();
//		//		}
//		//	}
//		//	if (st.empty() && !pop_st.empty()) {
//		//		cnt--;
//		//		break;
//		//	}
//		//}
//	}
//	cout << cnt;
//	return 0;
//}
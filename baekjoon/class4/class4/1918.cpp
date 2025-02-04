#if 0
#include <iostream>
#include <stack>
using namespace std;

string str;
stack<char> st, op;

int main() {

	cin >> str;
	// 개행문자... - 1 꼭 해주기..
	for (int i = str.length() - 1; i >= 0; --i) {
		st.push(str[i]);
	}
	while (st.size()) {
		if (st.top() >= 'A' && st.top() <= 'Z') {
			cout << st.top();
			st.pop();
		}
		else if (st.top() == '(') {
			op.push(st.top());
			st.pop();
		}
		else if (st.top() == ')') {
			while (op.top() != '(') {
				cout << op.top();
				op.pop();
			}
			st.pop();
			op.pop();
		}
		else { // 연산자들
			if (op.empty()) {
				op.push(st.top());
				st.pop();
			}
			else if ((st.top() == '-' || st.top() == '+') && (op.top() == '*' || op.top() == '/')) {
				while (op.size() &&  op.top() != '(' ) {
					cout << op.top();
					op.pop();
				}
			}
			else if ((st.top() == '-' || st.top() == '+') && (op.top() == '+' || op.top() == '-')) {
				while (op.size() && op.top() != '(') {
					cout << op.top();
					op.pop();
				}
			}
			else if ((st.top() == '*' || st.top() == '/') && (op.top() == '*' || op.top() == '/')) {
				while (op.size() && op.top() != '(' && op.top() != '+' && op.top() != '-') {
					cout << op.top();
					op.pop();
				}
			}
			else {
				op.push(st.top());
				st.pop();
			}
		}
	}
	while (op.size()) {
		cout << op.top();
		op.pop();
	}
	return 0;
}
#endif
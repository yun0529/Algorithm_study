#if 01
#include <iostream>
#include <stack>
using namespace std;

string str;
stack<char> st, op;

int main() {

	cin >> str;
	for (int i = str.length();i >= 0;--i) {
		st.push(str[i]);
	}
	while (st.size()) {
		if (st.top() >= 'A' && st.top() <= 'Z') {
			cout << st.top();
			st.pop();
		}
		else {
			if (op.empty() || st.top() == '/' || st.top() == '*') {
				op.push(st.top());
				st.pop();
			}
			else {
				// st.top 이 괄호인 경우
				if (st.top() == ')') {
					// (가 나오면 ) 수만큼 op 출력
					cout << op.top();
					op.pop();
					st.pop(); // 괄호 제거
					if (!op.empty() && op.top() == '(') {
						op.pop();
					}
				}
				// st.top 이 /, * 다음 -, + 인 경우
				else if ((st.top() == '-' || st.top() == '+') && (op.top() == '*' || op.top() == '/')) {
					while (op.size() && op.top() != '(') {
						cout << op.top();
						op.pop();
					}
					if (!op.empty() && op.top() == '(') {
						op.pop();
					}
				}
				else {
					op.push(st.top());
					st.pop();
				}
			}
		}
	}
	while (op.size()) {
		if (op.top() == '(') {
			op.pop();
			continue;
		}
		cout << op.top();
		op.pop();
	}
	return 0;
}
#endif
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
				// st.top �� ��ȣ�� ���
				if (st.top() == ')') {
					// (�� ������ ) ����ŭ op ���
					cout << op.top();
					op.pop();
					st.pop(); // ��ȣ ����
					if (!op.empty() && op.top() == '(') {
						op.pop();
					}
				}
				// st.top �� /, * ���� -, + �� ���
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
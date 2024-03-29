#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int main(void) {

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n,x, count = 1;
	cin >> n;
	//vector<int> vec;
	stack<int> st;

	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x == count) {
			count++;
		}
		else {
			st.push(x);
		}

		while (!st.empty() && st.top() == count) {
			st.pop();
			count++;
		}
	}
	if (st.empty()) cout << "Nice";
	else cout << "Sad";
	/*vec.push_back(n+1);
	for (int i = 0; i < n+1; i++) {
		if (i + 1 != n+1 && vec[i] > vec[i+1]) {
			if (!st.empty()) {
				if (st.top() < vec[i]) {
					cout << "Sad";
					return 0;
				}
				else {
					st.push(vec[i]);
				}
			}
			else {
				st.push(vec[i]);
			}
			
		}
		else if(i + 1 == n+1){
			if (!st.empty() && st.top() < vec[i]) {
				st.pop();
			}
			else {
				st.push(vec[i]);
			}
		}
	}
	cout << "Nice";*/
	return 0;
}
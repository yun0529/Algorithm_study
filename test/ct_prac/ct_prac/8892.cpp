#if 0
#include <iostream>
using namespace std;

int tc, n;
string str[104];
string s;
bool solution(string str) {
	for (int i = 0;i < str.length()/2;i++) {
		if (str[i] != str[str.length() - i - 1]) return false;
	}
	s = str;
	return true;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	cin >> tc;
	for (int t = 0;t < tc;t++) {
		cin >> n;
		bool flag = false;
		for (int i = 0;i < n;i++) {
			cin >> str[i];
		}

		for (int i = 0;i < n;i++) {
			for (int j = 0;j < n;j++) {
				if (i == j) continue;
				flag = solution(str[i] + str[j]);
				//cout << str[i] + str[j] <<": " << flag << '\n';
				if (flag) break;
			}
			if (flag) break;
		}
		if (flag) cout << s << '\n';
		else cout << 0 << '\n';
	}

	return 0;
}
#endif // 01

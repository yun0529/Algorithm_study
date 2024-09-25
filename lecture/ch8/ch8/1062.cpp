#include <bits/stdc++.h>
using namespace std;

int k, n, alpha[27], ret = 0, m = -987654321;

string str[54];

void setAlpha() {
	fill(alpha, alpha + 27, 0);
	alpha['a' - 'a'] = 1; 	alpha['n' - 'a'] = 1; 	alpha['t' - 'a'] = 1; 	alpha['i' - 'a'] = 1; 	alpha['c' - 'a'] = 1;
}

void go(int start, vector<int> b) {
	if (b.size() >= k - 5) {
		setAlpha();
		ret = 0;
		for (int i : b) {
			alpha[i] = 1;
			//cout << (char)(i + 'a') << ' ';
		}
		//cout << '\n';
		int i = 0;
		for (int k = 0; k < n; k++) {
			bool flag = true;
			for (i = 0; i < str[k].size(); i++) {
				if (alpha[str[k][i] - 'a'] == 0) {
					flag = false;
				}
			}
			if (flag) { 
				ret++;
				//cout << str[k]<<'\n';
			}
		}
		m = max(m, ret);
		setAlpha();
		return;
	}
	for (int i = start + 1; i < 26; i++) {
		if (alpha[i]) continue; // 중복 제거하니 시간초과 해결
		b.push_back(i);
		go(i, b);
		b.pop_back();
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;

		str[i] = s.substr(4,s.length()-4); // 필수 문자 잘라서 저장하는걸로는 시간초과 해결 불가
	}

	if (k < 5) { cout << 0; return 0; }

	setAlpha();
	vector<int> b;

	go(-1, b);

	cout << m;

	return 0;
}
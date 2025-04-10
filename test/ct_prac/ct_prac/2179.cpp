#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<string> v;
queue<string> pre;

int num, n;

int comp(string a, string b) {
	int len = a.length() < b.length() ? a.length() : b.length();
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (a[i] == b[i])cnt++;
		else return cnt;
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	string s;
	for (int i = 0; i < n; i++) {
		cin >> s;
		v.push_back(s);
	}
	int mx = 0;
	for (int i = 0; i < n; i++) {
		if (mx > v[i].length())continue;
		string str = v[i];
		queue<string> tmp;
		//tmp.push(str); // 자신 먼저.
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (cnt > v[j].length())continue;
			if (i == j) continue;
			int ret = comp(str, v[j]);
			if (cnt < ret) {
				cnt = ret;
				tmp = queue<string>(); // 초기화
				tmp.push(str);
				tmp.push(v[j]);
			}
			else if (ret != 0 && cnt == ret) {
				tmp.push(v[j]);
			}
		}
		if (mx < cnt) {
			pre = tmp;
			mx = cnt;
		}
	}

	for(int i = 0;i < 2;i++) {
		cout << pre.front() << '\n';
		pre.pop();
	}
	return 0;
}
#endif
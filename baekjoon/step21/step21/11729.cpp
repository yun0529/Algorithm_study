#include <bits/stdc++.h>
using namespace std;

string str[1000000];
int cnt = 0;
void hanoi(int n, int start, int mid, int last) {

	if (n == 1) {
		str->append(to_string(start) + " " + to_string(last) + '\n');
		cnt++;
		return;
	}
	hanoi(n - 1, start, last, mid);
	str->append(to_string(start) + " " + to_string(last) + '\n');
	cnt++;
	hanoi(n - 1,  mid, start, last);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	hanoi(n, 1, 2, 3);
	cout << cnt << '\n';
	for (string s : str) {
		cout << s;
	}
	return 0;
}
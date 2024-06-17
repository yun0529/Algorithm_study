#include <bits/stdc++.h>
using namespace std;

int q, l, r;
char a;
string str;
int psum[26][200004];
int main() { // ´©ÀûÇÕ

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> str >> q;
	for (int i = 0; i < str.length(); i++) {
		psum[str[i] - 97][i+1]++;
	}

	for (int i = 1; i <= str.length(); i++) {
		for (int j = 0; j < 26; j++) {
			psum[j][i] += psum[j][i - 1];
		}
	}

	for (int i = 0; i < q; i++) {
		cin >> a >> l >> r;
		cout << psum[a-97][r+1] - psum[a-97][l] << '\n';
	}
	//for (int i = 0; i < q; i++) {
	//	cout << psum[r] - psum[l - 1];
	//}
	return 0;
}
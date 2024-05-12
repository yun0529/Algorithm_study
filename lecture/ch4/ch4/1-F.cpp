// 백준 11655 ROT13
// 문자열을 받아서 ROT13으로 변환한 문자열을 출력
// B -> O : 66 -> 79 , a -> n : 97 -> 110 
// 문자에 + 13을 한 것.
#include <bits/stdc++.h>
using namespace std;

string s, ret;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin,s); // 띄어쓰기까지 입력받기 위함.

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			if (s[i] + 13 > 90) {
				s[i] = s[i] + 13 - 26; // 문자 범위를 넘어가면 다시 A 부터 시작 
			}
			else {
				s[i] = s[i] + 13;
			}
		}
		else if (s[i] >= 97 && s[i] <= 122) {
			if (s[i] + 13 > 122) {
				s[i] = s[i] + 13 - 26;
			}
			else {
				s[i] = s[i] + 13;
			}
		}
		cout << s[i];
	}

	return 0;
}
// ���� 11655 ROT13
// ���ڿ��� �޾Ƽ� ROT13���� ��ȯ�� ���ڿ��� ���
// B -> O : 66 -> 79 , a -> n : 97 -> 110 
// ���ڿ� + 13�� �� ��.
#include <bits/stdc++.h>
using namespace std;

string s, ret;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	getline(cin,s); // ������� �Է¹ޱ� ����.

	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= 65 && s[i] <= 90) {
			if (s[i] + 13 > 90) {
				s[i] = s[i] + 13 - 26; // ���� ������ �Ѿ�� �ٽ� A ���� ���� 
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
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m;
// ���� ������ key, ���� ���� �Ǵ� ���� ����
map<string, pair<string, int>> mp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// ������ ���� n, ������ ���� m
	// main �Է�
	// c : ������ 1, �����̸� 0
	// q ���� �������� ���� ������ ���� ����, �� ���� ���

	cin >> n >> m;
	string up, down;
	
	int t;
	for (int i = 0; i < n + m; i++) {
		cin >> up >> down >> t;
		if (t == 0) { //������ ��� map���� ++;
			mp[up]++;
			for (int j = 0; j <= i; j++) {
				if(v[j][0].first == )
			}
		}
		else {
			v.push_back({ up,down });
		}
	}
	int q;
	string qur[1001];

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> qur[i];
	}
	for (int i = 0; i < q; i++) {
		// / ������ �и��ؼ� map���� �Ѱ��� ���ϱ�
		if (qur[i].find('/') == string::npos) { // main ��ü��
			for (int i = 0; i < mp.size(); i++) {
				ret[i].second += mp[qur[i]];
			}
			set<string> st;
			for (int i = 0; i < v.size(); i++) {
				st.insert()
			}
			continue;
		}
		int f = qur[i].find('/');
		string fol = qur[i].substr(0, f);
		// ������ �ִ� ������ map �����ϰ� ũ�� ���ϱ�
	}
	return 0;
}
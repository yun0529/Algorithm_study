#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n, m;
// 상위 폴더가 key, 값은 파일 또는 하위 폴더
map<string, pair<string, int>> mp;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// 폴더의 개수 n, 파일의 개수 m
	// main 입력
	// c : 폴더면 1, 파일이면 0
	// q 개의 쿼리별로 하위 파일의 종류 개수, 총 개수 출력

	cin >> n >> m;
	string up, down;
	
	int t;
	for (int i = 0; i < n + m; i++) {
		cin >> up >> down >> t;
		if (t == 0) { //파일인 경우 map에서 ++;
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
		// / 단위로 분리해서 map에서 총개수 더하기
		if (qur[i].find('/') == string::npos) { // main 전체임
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
		// 폴더에 있는 단위로 map 생성하고 크기 더하기
	}
	return 0;
}
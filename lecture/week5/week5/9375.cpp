#include <bits/stdc++.h>
using namespace std;

int n, c, cnt;

//void combi(int start, vector<int> b, int k) { // �ð� �ʰ�....
//	if (b.size() == k) {
//		cnt++;
//		return;
//	}
//	for (int i = start+1; i < c; i++) {
//		b.push_back(i);
//		combi(i, b, k);
//		b.pop_back();
//	}
//	return;
//}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		cnt = 0;
		map<string, int> m;
		string s1, s2;
		for (int j = 0; j < c; j++) {
			cin >> s1 >> s2;
			m[s2]++;
			cnt++;
		}
		long long ret = 1;
		for (auto cate : m) {
			ret *= ((long long)cate.second + 1); // �ϳ��� ������ ���Դ� ��� + 1 , ����� ����� �ϸ� �׳� long long �ϴ°� ����
		}
		//vector<int> b;
		//c = m.size();
		//for (int j = 1; j < m.size(); j++) {
		//	
		//	//combi(-1, b, j);
		//	//cout << cnt << '\n';
		//}
		cout << ret - 1 << '\n'; // ��� ���Դ� ���� �����Ѵ�.
	}

	return 0;
}
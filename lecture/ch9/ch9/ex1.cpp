// 그리디가 되면 dp로도 풀 수 있음
// dp가 안되면 그리디로
// 
// 들어오는 시각, 나가는 시각이 들어오면
// start, end, 길이 기반으로 오름차순 정렬
// start 순으로 했을 때 반례가 있음 -> end 기반으로 로직 작성
// 

#include <bits/stdc++.h>
using namespace std;
int from, to, n, idx = 0, ret = 1;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		cin >> from >> to;
		v.push_back({ to,from }); // to 기반으로 먼저 오름차순 정렬
	}
	sort(v.begin(), v.end());
	from = v[0].second;
	to = v[0].first;

	for (int i = 1; i < n; i++) {
		if (v[i].second < to) continue;
		from = v[i].second;
		to = v[i].first;
		ret++;
	}
	cout << ret << '\n';
	return 0;
}
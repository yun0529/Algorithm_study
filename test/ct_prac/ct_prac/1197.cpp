#if 0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int parent[10004];
int v, e, ret;
vector<pair<int, pair<int, int>>> vec;

int Find(int now) {
	if (parent[now] == now) return now;
	else return parent[now] = Find(parent[now]);
}

void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	
	parent[b] = a;
}

bool checkParent(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) return false;
	else return true;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);

	int a, b, c;
	cin >> v >> e;

	for (int i = 0; i < e;i++) {
		cin >> a >> b >> c;
		vec.push_back({ c,{a,b} });
	}
	sort(vec.begin(), vec.end()); // 가중치 기준 오름차순 정렬

	for (int i = 1;i <= v;i++) parent[i] = i;
	
	for (int i = 0;i < vec.size();i++) {
		if (!checkParent(vec[i].second.first, vec[i].second.second)) { // 이미 연결되었는지 확인 -> 연결되어 있으면 나머지는 필요 x
			Union(vec[i].second.first, vec[i].second.second); // 연결
			ret += vec[i].first; // 가중치 +
		}
	}
	cout << ret;
	return 0;
}
#endif
#if 01
#include <iostream>
#include <vector>
using namespace std;

int N, M, T, ret; // 전체 사람 수, 파티 수 , 진실을 아는 사람 수
int parent[54];
vector<int> party[54], tP;

int Find(int now) {
	if (parent[now] == now) return now;
	return parent[now] = Find(parent[now]);
}
void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	if (a != b) parent[b] = a;
	return;
}

int main() {

	cin >> N >> M;
	cin >> T;
	//ret = N;
	for (int i = 1;i <= N;i++) { // 초기화
		parent[i] = i;
	}
	int tru;
	for (int i = 1;i <= T;i++) { // 진실 아는 사람 입력
		cin >> tru;
		tP.push_back(tru);
	}
	int node, cnt;
	for (int i = 1;i <= M;i++) {
		cin >> cnt;
		for (int j = 0;j < cnt;j++) { // 파티 참가 인원 파티 번호에 묶기
			cin >> node;
			party[i].push_back(node);
			Union(i, node);
		}
	}
	for (int i = 1;i <= M;i++) {
		for (int j = 0;j < party[i].size();j++) {

		}
	}
	if (cnt == 1) {
		cin >> node;
		if (find(tP.begin(), tP.end(), node) != tP.end()) {

		}
	}
	else {

	}
	return 0;
}

#endif // 01
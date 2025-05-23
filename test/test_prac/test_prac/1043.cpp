#if 0
#include <iostream>
#include <vector>
using namespace std;

int N, M, T, ret; // 전체 사람 수, 파티 수 , 진실을 아는 사람 수
int parent[54], party[54][54], p_size[54];

int Find(int now) {
	if (parent[now] == now) return now;
	return parent[now] = Find(parent[now]);
}
void Union(int a, int b) {
	a = Find(a);
	b = Find(b);
	//parent[b] = a;
	if (a != b) {
		if (a < b) {
			parent[b] = a;
		}
		else {
			parent[a] = b;
		}
	}
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
		parent[tru] = 0; // 0 그룹으로 설정
		// tP.push_back(tru);
	}
	int st, node, cnt;
	for (int i = 0;i < M;i++) {
		cin >> cnt;
		cin >> st;
		party[i][0] = st;
		p_size[i] = cnt;
		//Union(i, node);
		for (int j = 1;j < cnt;j++) { // 파티 참가 인원 파티 번호에 묶기
			cin >> node;
			party[i][j] = node;
			Union(st, node); // 같은 그룹으로 갈거니까 st 그대로 해도 상관없음.
		}
	}
	ret = M;
	for (int i = 0;i < M;i++) {
		for (int j = 0;j < p_size[i];j++) {
			if (Find(parent[party[i][j]]) == 0) { // 0그룹이면 거짓말 불가
				ret--;
				break;
			}
		}
	}
	//for (int i = 0; i <= N; i++) {
	//	cout << parent[i] << ' ';
	//}cout << '\n';
	cout << ret;
	return 0;
}

#endif // 01
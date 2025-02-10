// 여러 개의 원소를 서로 묶는 작업을 효율적으로 처리하기 위한 알고리즘
// 일반적으로 disjoint - set(서로소 집합) 자료구조를 구현하는 데 사용 
// 
// 집합 내에서 어떤 두 원소가 같은 집합에 속해 있는지 여부를 판단
// Union: 서로 다른 두 집합을 결합하는 작업
// Find : 특정 원소가 속한 집합의 대표 원소를 찾아보는 작업
// 
/*
6 5
0 1
3 0
3 4
4 3
2 5
*/
#if 01
#include <iostream>

using namespace std;

int N, M;
int parent[100];

int Find(int now) {
	// 종료 조건 : now의 parent가 now와 같으면(내가 대표값) -> 소속을 찾았다
	if (now == parent[now])
		return now;

	// 재귀 구성 : now의 parent가 now와 다르면(내가 대표 값이 아님) -> 나의 부모(parent)를 찾아가라
	//            -> Find(parent[now]);

	// + 나의 부모(소속)을 찾으면, 기록해놓아야 함
	// parent[now] = Find(parent[now]);

	// **경로 압축** : 경로 상의 모든 노드가 직접 루트 노드를 가리킴
	return parent[now] = Find(parent[now]);
}

void Union(int A, int B) {
	// A와 B의 부모를 확인
	int root_A = Find(A);
	int root_B = Find(B);

	// 둘이 다른 그룹이면, B의 그룹을 A의 산하로 넣음
	if (root_A != root_B) {
		parent[root_B] = root_A;
	}

	return;
}

int main() {
	cin >> N >> M;

	// 각 원소는 자기 자신을 대표하는 집합으로 초기화
	for (int i = 0; i < N; i++) {
		parent[i] = i;
	}

	int a, b;
	// 간선의 정보를 받아서 각 노드를 이어줌
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		Union(a, b); // 간선이 연결되어 있다면 parent[b]에 a가 들어가있음
	}

	int cnt = 0;

	// 집합의 개수 = 대표원소의 개수 이므로,
	// 본인이 대표원소라면, cnt에 추가
	for (int i = 0; i < N; i++) {
		if (Find(i) == i) cnt++;
	}

	cout << cnt; // 2
}
#endif 
// 여러 개의 원소를 서로 묶는 작업을 효율적으로 처리하기 위한 알고리즘
// 일반적으로 disjoint - set(서로소 집합) 자료구조를 구현하는 데 사용 
// 
// 집합 내에서 어떤 두 원소가 같은 집합에 속해 있는지 여부를 판단
// Union: 서로 다른 두 집합을 결합하는 작업
// Find : 특정 원소가 속한 집합의 대표 원소를 찾아보는 작업
// 
// 1. 대표 노드를 저장할 배열의 초기화
//  -> 자기 자신을 대표 노드로 (arr[idx] = idx)
// union(1,4) 하면 1과 4를 연결한다는 것. , union(5,6)
//  -> 4의 대표 노드는 1이다.
// union(4,6) 할려면 4의 대표노드를 찾아야함. -> find(4)
//  -> 4의 대표노드로 이동 -> 1이다.
// 6의 대표노드 : find(6) -> arr[6] = 5로 되어있음 
//  -> arr[5] = 5 이지만, 1로 연결하기 위해 arr[5], arr[6] = 1로 해줌
// 대표노드를 찾는 과정 -> 재귀함수로 구현 그 과정에서의 모든 노드를 
// 대표노드로 설정한다.
// 

/*
6 5
0 1
3 0
3 4
4 3
2 5
*/
#if 0
#include <iostream>

using namespace std;
int n, m, cnt;
int parent[100];

int find(int now) {
	if (parent[now] == now) return now; // now가 대표노드이면 종료
	return parent[now] = find(parent[now]); // now 노드에 부모를 저장
}

void uni(int a, int b) {
	a = find(a);
	b = find(b);
	if (a != b) {
		// 그냥 기준 노드 source 노드를 
		// 대표로 설정해버릴 수 있음.
		parent[b] = a; 
		
		// 크기가 작은 노드를 기준 노드로 설정
		//if (a < b) 
		//	parent[b] = a;
		//else
		//	parent[a] = b;
	}
}

int main() {

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		parent[i] = i;
	}
	int a, b;
	for (int i = 0; i < m; i++) {
		cin >> a >> b;
		uni(a, b);
	}

	for (int i = 0; i < n; i++) {
		// 3 0 2 3 3 2 -> parent[1] = 0 
		// parent[0] = 3으로 설정되었기 때문에 상관없음.
		cout << parent[i] << ' '; 
		if (parent[i] == i) cnt++; 
	}
	cout << '\n' << cnt;
	return 0;
}
#endif

#if 0
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
		cout << parent[i] << ' ';
		if (Find(i) == i) cnt++;
	}cout << '\n';

	cout << cnt; // 2
}
#endif 
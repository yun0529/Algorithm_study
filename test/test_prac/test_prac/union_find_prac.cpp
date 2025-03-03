// ���� ���� ���Ҹ� ���� ���� �۾��� ȿ�������� ó���ϱ� ���� �˰���
// �Ϲ������� disjoint - set(���μ� ����) �ڷᱸ���� �����ϴ� �� ��� 
// 
// ���� ������ � �� ���Ұ� ���� ���տ� ���� �ִ��� ���θ� �Ǵ�
// Union: ���� �ٸ� �� ������ �����ϴ� �۾�
// Find : Ư�� ���Ұ� ���� ������ ��ǥ ���Ҹ� ã�ƺ��� �۾�
// 
// 1. ��ǥ ��带 ������ �迭�� �ʱ�ȭ
//  -> �ڱ� �ڽ��� ��ǥ ���� (arr[idx] = idx)
// union(1,4) �ϸ� 1�� 4�� �����Ѵٴ� ��. , union(5,6)
//  -> 4�� ��ǥ ���� 1�̴�.
// union(4,6) �ҷ��� 4�� ��ǥ��带 ã�ƾ���. -> find(4)
//  -> 4�� ��ǥ���� �̵� -> 1�̴�.
// 6�� ��ǥ��� : find(6) -> arr[6] = 5�� �Ǿ����� 
//  -> arr[5] = 5 ������, 1�� �����ϱ� ���� arr[5], arr[6] = 1�� ����
// ��ǥ��带 ã�� ���� -> ����Լ��� ���� �� ���������� ��� ��带 
// ��ǥ���� �����Ѵ�.
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
	if (parent[now] == now) return now; // now�� ��ǥ����̸� ����
	return parent[now] = find(parent[now]); // now ��忡 �θ� ����
}

void uni(int a, int b) {
	a = find(a);
	b = find(b);
	if (a != b) {
		// �׳� ���� ��� source ��带 
		// ��ǥ�� �����ع��� �� ����.
		parent[b] = a; 
		
		// ũ�Ⱑ ���� ��带 ���� ���� ����
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
		// parent[0] = 3���� �����Ǿ��� ������ �������.
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
	// ���� ���� : now�� parent�� now�� ������(���� ��ǥ��) -> �Ҽ��� ã�Ҵ�
	if (now == parent[now])
		return now;

	// ��� ���� : now�� parent�� now�� �ٸ���(���� ��ǥ ���� �ƴ�) -> ���� �θ�(parent)�� ã�ư���
	//            -> Find(parent[now]);

	// + ���� �θ�(�Ҽ�)�� ã����, ����س��ƾ� ��
	// parent[now] = Find(parent[now]);

	// **��� ����** : ��� ���� ��� ��尡 ���� ��Ʈ ��带 ����Ŵ
	return parent[now] = Find(parent[now]);
}

void Union(int A, int B) {
	// A�� B�� �θ� Ȯ��
	int root_A = Find(A);
	int root_B = Find(B);

	// ���� �ٸ� �׷��̸�, B�� �׷��� A�� ���Ϸ� ����
	if (root_A != root_B) {
		parent[root_B] = root_A;
	}

	return;
}

int main() {
	cin >> N >> M;

	// �� ���Ҵ� �ڱ� �ڽ��� ��ǥ�ϴ� �������� �ʱ�ȭ
	for (int i = 0; i < N; i++) {
		parent[i] = i;
	}

	int a, b;
	// ������ ������ �޾Ƽ� �� ��带 �̾���
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		Union(a, b); // ������ ����Ǿ� �ִٸ� parent[b]�� a�� ������
	}

	int cnt = 0;

	// ������ ���� = ��ǥ������ ���� �̹Ƿ�,
	// ������ ��ǥ���Ҷ��, cnt�� �߰�
	for (int i = 0; i < N; i++) {
		cout << parent[i] << ' ';
		if (Find(i) == i) cnt++;
	}cout << '\n';

	cout << cnt; // 2
}
#endif 
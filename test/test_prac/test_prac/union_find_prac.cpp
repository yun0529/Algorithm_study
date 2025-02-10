// ���� ���� ���Ҹ� ���� ���� �۾��� ȿ�������� ó���ϱ� ���� �˰���
// �Ϲ������� disjoint - set(���μ� ����) �ڷᱸ���� �����ϴ� �� ��� 
// 
// ���� ������ � �� ���Ұ� ���� ���տ� ���� �ִ��� ���θ� �Ǵ�
// Union: ���� �ٸ� �� ������ �����ϴ� �۾�
// Find : Ư�� ���Ұ� ���� ������ ��ǥ ���Ҹ� ã�ƺ��� �۾�
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
		if (Find(i) == i) cnt++;
	}

	cout << cnt; // 2
}
#endif 
#if 0
#include <iostream>
#include <vector>
using namespace std;

int N, M, T, ret; // ��ü ��� ��, ��Ƽ �� , ������ �ƴ� ��� ��
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
	for (int i = 1;i <= N;i++) { // �ʱ�ȭ
		parent[i] = i;
	}
	int tru;
	for (int i = 1;i <= T;i++) { // ���� �ƴ� ��� �Է�
		cin >> tru;
		parent[tru] = 0; // 0 �׷����� ����
		// tP.push_back(tru);
	}
	int st, node, cnt;
	for (int i = 0;i < M;i++) {
		cin >> cnt;
		cin >> st;
		party[i][0] = st;
		p_size[i] = cnt;
		//Union(i, node);
		for (int j = 1;j < cnt;j++) { // ��Ƽ ���� �ο� ��Ƽ ��ȣ�� ����
			cin >> node;
			party[i][j] = node;
			Union(st, node); // ���� �׷����� ���Ŵϱ� st �״�� �ص� �������.
		}
	}
	ret = M;
	for (int i = 0;i < M;i++) {
		for (int j = 0;j < p_size[i];j++) {
			if (Find(parent[party[i][j]]) == 0) { // 0�׷��̸� ������ �Ұ�
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
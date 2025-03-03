/* Fenwick Tree
* �������� ���� �迭�� ��������
* Ư�� ���� ���� ���ϰ� �迭�� ����� �� �ٽ� ���� ���� ���ϰ� �ʹٸ�
* ����Ʈ�� ���
* 3, 4, 10, 11
* 1 : 3
* 2 : 3 + 4
* 3 : 10
* 4 : 3 + 4 + 10 + 11
* 1���� ������ ��Ʈ�� ���ϰ� �ش� �ε����� ���� ���Ѵ�.
* 
* 
*/

#if 0
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> tree;

void update(int index, int value) {
	while (index < tree.size()) {
		tree[index] += value; // ���ο� ������ ������Ʈ
		// 10 -> 10 & 10 = 10 -> 100(2+2) �� �ȴ�.
		// 1 -> 1 & 1 = 1 -> 10
		index += index & -index; 
	}
}
int sum(int index) { // ��ü ��
	int ret = 0;
	while (index > 0) { // index�� 0���� ū ����
		ret += tree[index]; // ret�� index������ ���� �Ķ� ���� ����
		// index--
		// 100 -> 100 & 100 = 100 -> 0(4-4) �̴�. -> while ����
		index -= index & -index; 
	}
	return ret;
}
// ���� [left, right]�� �� ���ϱ�
// left - 1�� �ؾ� left ~ right �� �� �� ����.
int rangeQuery(int left, int right) {
	return sum(right) - sum(left - 1);
}

int main() {

	vector<int> data = { 3,4,10,11 };
	n = data.size();
	tree.resize(n + 1, 0); // tree index�� 1���� �����̶� + 1 ��.

	// �ʱ� �迭�� ������� Ʈ�� ����
	// Ʈ���� �ε����� 1���� �����Ѵ�.
	for (int i = 0; i < n; i++) {
		update(i + 1, data[i]);
	}
	cout << "1 ~ 4 sum : " << rangeQuery(1, 4) << "\n";
	cout << "2 ~ 3 sum : " << rangeQuery(2, 3) << '\n';
	// index 2�� 5 ���ϱ�, �� data[1] = 4 + 5 = 9�� ����ȴ�.
	update(2, 5);
	cout << "1 ~ 4 sum : " << rangeQuery(1, 4) << "\n";
	cout << "2 ~ 3 sum : " << rangeQuery(2, 3) << '\n';

	return 0;
}
#endif // 01

// ���� 2309 ����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 9�� �߿� ���� ������� 7���� �̴´� 9C7 �� ���� 100�̴�.
// ���� ����ְ� �̾Ƶ� �Ǳ� ������ 9P7�� ������.
int a[9];
int sum;
int n = 9, r = 7;

void print() {
	for (int i = 0; i < r; i++) cout << a[i] << " ";
	cout << '\n';
}

void makePermutation(int n, int r, int depth) {
	if (r == depth) {
		print();
		return;
	}
	for (int i = depth; i < n; i++) {
		swap(a[i], a[depth]); // depth�� ������� swap��
		makePermutation(n, r, depth + 1);
		swap(a[i], a[depth]); // ������ �� ������ �ٽ� ������� ����
	}
	return;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	makePermutation(n, r, 0); // n : 9, r : 7 -> 9�� �߿� 7���� �̾Ƽ� ���� 100�ΰ� ã�´�.

	return 0;
}
// 백준 2309 문제
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 9개 중에 순서 상관없이 7개를 뽑는다 9C7 의 합이 100이다.
// 순서 상관있게 뽑아도 되기 때문에 9P7도 가능함.
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
		swap(a[i], a[depth]); // depth를 기반으로 swap함
		makePermutation(n, r, depth + 1);
		swap(a[i], a[depth]); // 끝까지 간 다음에 다시 원래대로 돌림
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
	makePermutation(n, r, 0); // n : 9, r : 7 -> 9개 중에 7개를 뽑아서 합이 100인걸 찾는다.

	return 0;
}
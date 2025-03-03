/* Fenwick Tree
* 누적합은 정적 배열만 가능했음
* 특정 구간 합을 구하고 배열이 변경된 후 다시 구간 합을 구하고 싶다면
* 펜윅트리 사용
* 3, 4, 10, 11
* 1 : 3
* 2 : 3 + 4
* 3 : 10
* 4 : 3 + 4 + 10 + 11
* 1에서 최하의 비트를 더하고 해당 인덱스의 값을 더한다.
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
		tree[index] += value; // 새로운 값으로 업데이트
		// 10 -> 10 & 10 = 10 -> 100(2+2) 이 된다.
		// 1 -> 1 & 1 = 1 -> 10
		index += index & -index; 
	}
}
int sum(int index) { // 전체 합
	int ret = 0;
	while (index > 0) { // index가 0보다 큰 동안
		ret += tree[index]; // ret에 index까지의 합인 파란 노드들 더함
		// index--
		// 100 -> 100 & 100 = 100 -> 0(4-4) 이다. -> while 종료
		index -= index & -index; 
	}
	return ret;
}
// 구간 [left, right]의 합 구하기
// left - 1로 해야 left ~ right 값 알 수 있음.
int rangeQuery(int left, int right) {
	return sum(right) - sum(left - 1);
}

int main() {

	vector<int> data = { 3,4,10,11 };
	n = data.size();
	tree.resize(n + 1, 0); // tree index가 1부터 시작이라 + 1 함.

	// 초기 배열을 기반으로 트리 구성
	// 트리의 인덱스는 1부터 시작한다.
	for (int i = 0; i < n; i++) {
		update(i + 1, data[i]);
	}
	cout << "1 ~ 4 sum : " << rangeQuery(1, 4) << "\n";
	cout << "2 ~ 3 sum : " << rangeQuery(2, 3) << '\n';
	// index 2에 5 더하기, 즉 data[1] = 4 + 5 = 9로 변경된다.
	update(2, 5);
	cout << "1 ~ 4 sum : " << rangeQuery(1, 4) << "\n";
	cout << "2 ~ 3 sum : " << rangeQuery(2, 3) << '\n';

	return 0;
}
#endif // 01

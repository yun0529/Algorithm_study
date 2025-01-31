#if 0
#include <iostream>
#include <queue>
using namespace std;

int su, bro;
int visited[100004];

int bfs() {
	// �̵��� ���� ����ġ�� �ٸ��� ������ min_heap ���
	// ���� �ּ� �ð� üũ�� ���ϱ� ������ visited�� �׳� �湮 Ȯ�ο����θ� ���
	// pq�� �ð� ����
	priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
	pq.push({0,su});
	visited[su] = 1;

	while (pq.size()) {
		int time = pq.top().first;
		int k = pq.top().second; 
		pq.pop();

		if (k == bro) return time;
		if ((k * 2) < 100004 && visited[k * 2] == 0) {
			// �ʰ� ª�� ������ �����̵��� �켱������ ����
			// ���� �ð��� ��찡 ������ ���� ť�� �־������.
			pq.push({ time, k * 2 });
			visited[k * 2] = 1;
		}
		if ((k + 1) < 100004 && visited[k + 1] == 0) {
			pq.push({ time + 1 , k + 1 });
			visited[k + 1] = 1;
		}
		if ((k - 1) >= 0 && visited[k - 1] == 0) {
			pq.push({ time + 1, k - 1});
			visited[k - 1] = 1;
		}
	}
}

int main() {

	cin >> su >> bro;

	cout << bfs();
	return 0;
}
#endif
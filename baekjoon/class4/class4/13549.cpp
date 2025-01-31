#if 0
#include <iostream>
#include <queue>
using namespace std;

int su, bro;
int visited[100004];

int bfs() {
	// 이동에 따른 가중치가 다르기 때문에 min_heap 사용
	// 따로 최소 시간 체크를 안하기 때문에 visited는 그냥 방문 확인용으로만 사용
	// pq에 시간 저장
	priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
	pq.push({0,su});
	visited[su] = 1;

	while (pq.size()) {
		int time = pq.top().first;
		int k = pq.top().second; 
		pq.pop();

		if (k == bro) return time;
		if ((k * 2) < 100004 && visited[k * 2] == 0) {
			// 초가 짧기 때문에 순간이동이 우선순위가 높음
			// 같은 시간인 경우가 있으니 먼저 큐에 넣어줘야함.
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
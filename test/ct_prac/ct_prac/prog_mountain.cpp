#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
typedef long long ll;
using namespace std;

vector<pair<int, int>> v[50004]; // 목적지, 가중치
vector<int> g;
vector<int> wnode(50004, 2e9); // 최단 거리 배열
int retW = 2e9; // 가중치
int retN = 2e9; // 봉우리

void dijkstra(int st, int ed) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    wnode = vector<int>(50004, 2e9);
    pq.push({ 2e9,st }); // 시작
    int temp_ret = 0; // 임시로 intensity를 저장

    while (pq.size()) {
        st = pq.top().second; // 시작지점
        int w = pq.top().first; // 가중치
        pq.pop();
        if (st == ed) {
            retW = min(retW, temp_ret);
            retN = min(retN, ed);
            return;
        }
        if (wnode[st] < w) continue; // 이미 간 곳의 w가 더 작다면 갈 필요 없음.
        if (find(g.begin(), g.end(), st) != g.end()) continue; // 다른 입구 경유 불가
        for (auto there : v[st]) { // 연결된 경로 탐색
            if (wnode[st] > there.second) {
                wnode[st] = there.second;
                temp_ret = max(temp_ret, there.second); // 경로의 최대 intensity로 갱신
                pq.push({ there.first, there.second });
            }
        }
    }

}
int n;
vector<vector<int>> paths;
vector<int> gates;
vector<int> summits;

 void solution() {
     int i, j, w; // start, end, time
     cin >> n;
     for (int i = 0;i < n;i++) {
         cin >> i >> j >> w;
         v[i].push_back({ j,w });
     }
     gates.push_back(1);
     gates.push_back(3);
     summits.push_back(5);

    //for (auto iter : paths) {
    //    i = iter[0];
    //    j = iter[1];
    //    w = iter[2];

    //    v[i].push_back({ j,w }); // 경로 형태 변경
    //}
    g = gates;
    vector<int> answer;
    for (int gate : gates) {
        for (int summit : summits) {
            dijkstra(gate, summit);
        }
    }
    answer.push_back(retN);
    answer.push_back(retW);
    cout << retN << ' ' << retW;
    //return answer;
}

int main() {
    solution();
    return 0;
}
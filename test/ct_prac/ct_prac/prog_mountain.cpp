#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
typedef long long ll;
using namespace std;

vector<pair<int, int>> v[50004]; // ������, ����ġ
vector<int> g;
vector<int> wnode(50004, 2e9); // �ִ� �Ÿ� �迭
int retW = 2e9; // ����ġ
int retN = 2e9; // ���츮

void dijkstra(int st, int ed) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    wnode = vector<int>(50004, 2e9);
    pq.push({ 2e9,st }); // ����
    int temp_ret = 0; // �ӽ÷� intensity�� ����

    while (pq.size()) {
        st = pq.top().second; // ��������
        int w = pq.top().first; // ����ġ
        pq.pop();
        if (st == ed) {
            retW = min(retW, temp_ret);
            retN = min(retN, ed);
            return;
        }
        if (wnode[st] < w) continue; // �̹� �� ���� w�� �� �۴ٸ� �� �ʿ� ����.
        if (find(g.begin(), g.end(), st) != g.end()) continue; // �ٸ� �Ա� ���� �Ұ�
        for (auto there : v[st]) { // ����� ��� Ž��
            if (wnode[st] > there.second) {
                wnode[st] = there.second;
                temp_ret = max(temp_ret, there.second); // ����� �ִ� intensity�� ����
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

    //    v[i].push_back({ j,w }); // ��� ���� ����
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
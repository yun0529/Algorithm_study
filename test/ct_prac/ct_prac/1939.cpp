#if 0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, mx = 0;
int st, ed;
vector<pair<int,int>> v[10004];

int visited[10004];

int go(int here, int limit) {
    visited[here] = 1;
    queue<int> q;
    q.push(here);
    while (q.size()) {
        here = q.front(); q.pop();
        if (here == ed) {
            return 1;
        }
        for (auto there : v[here]) {
            int nNode = there.first;
            int nWeight = there.second;
            if (visited[nNode] == 0 && nWeight >= limit) { // 방문 처리, 무게 제한 확인
                q.push(nNode);
                visited[nNode] = 1;
            }
        }
    }
    return 0;
}
void binary_search() {
    int l = 0, r = mx;
    while (l <= r) {
        int mid = (l + r) / 2;
        fill(visited, visited + 10004, 0);
        if (go(st, mid)) { // 옮기는 무게를 목적지까지 옮길 수 있으면 무게 증가
            l = mid + 1;
            mx = mid;
        }
        else {
            r = mid - 1;
        }
    }
    cout << mx;
}
void input_data() {
    cin >> n >> m;
    int a, b, c;
    for (int i = 0; i < m; i++) {
        cin >> a >> b >> c;
        v[a].push_back({ b,c });
        v[b].push_back({ a,c });
        mx = max(mx, c);
    }

    cin >> st >> ed;
}
int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    input_data();
    binary_search();
    return 0;
}
#endif
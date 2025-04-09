#if 0
#include<iostream>
#include <vector>
using namespace std;

int n, m, ret;
int arr[24][24], visited[3][24][24];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
vector<pair<int, int>> fr;
void printVisit() {
    for (int i = 0;i < m;i++) {
        for (int j = 0;j < n;j++) {
            for (int k = 0;k < n;k++) {
                cout << visited[i][j][k] << ' ';
            }
            cout << '\n';
        }
        cout << "------\n";
    }
}
void go(int y, int x, int num, int cnt, int sum) { // num 친구 번호, cnt : 초
    if (cnt == 3) {
        if (num == 0) { // 마지막 친구
            cout << sum << '\n';
            ret = max(ret, sum);
            printVisit();
            return;
        }
        else if (num > 0) {
            int ny = fr[num - 1].first;
            int nx = fr[num - 1].second;
            go(ny, nx, num - 1, 0, sum + arr[ny][nx]);
            return;
        }
    }
    for (int i = 0;i < 4;i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        int nsum = sum;
        if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
        if (visited[num][ny][nx]) continue; // 내가 방문했으면 못감
        if (visited[(num + 1) % 3][ny][nx] == cnt + 1
            || visited[(num + 2) % 3][ny][nx] == cnt + 1) // 친구랑 겹치는거 방지
            continue;

        if (visited[(num + 2) % 3][ny][nx] == 0 && visited[(num + 1) % 3][ny][nx] == 0) nsum += arr[ny][nx];

        visited[num][ny][nx] = cnt + 1;
        go(ny, nx, num, cnt + 1, nsum); // 다른사람이 방문했다면 수확할 수 없음.

        visited[num][ny][nx] = 0;
    }
}

int main(int argc, char** argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0;i < n;++i) {
        for (int j = 0;j < n;++j) {
            cin >> arr[i][j];
        }
    }
    int y, x;
    for (int i = 0;i < m;++i) {
        cin >> y >> x;
        fr.push_back({ y - 1,x - 1 });
        visited[i][y - 1][x - 1] = 100; // 좌표 확인 잘하기....
    }
    y = fr[m - 1].first;
    x = fr[m - 1].second;
    go(y, x, m - 1, 0, arr[y][x]);
    cout << ret;

    return 0;
}
#endif
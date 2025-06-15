#if 0
#include<iostream>
#include <queue>
#include <tuple>
#include <algorithm>

using namespace std;

int n, m, n_visited[1004][1004], g_visited[10][1004][1004];
char arr[1004][1004];
//bool flag = false;
vector<pair<int, int>> ghost;
//pair<int,int> wall;
pair<int, int> nam;
pair<int, int> door;

int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };

void nam_bfs(int y, int x) {
    queue<pair<int, int>> q;
    q.push({ y,x });
    n_visited[y][x] = 1;
    while (q.size()) {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0;i < 4;i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            bool flag = false;
            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (n_visited[ny][nx] || arr[ny][nx] == '#' || arr[ny][nx] == 'G') continue;
            for (int g = 0;g < 8;g++) { // 유령이 먼저 도달했는지 확인
                if ((n_visited[y][x] + 1) >= g_visited[g][ny][nx] && g_visited[g][ny][nx] != 0) {
                    flag = true;
                    //cout << "ny:nx:nsec:gsec:size = " << ny << ":" << nx << ":" << 
                        //n_visited[y][x] << ":" << g_visited[g][ny][nx] << ":" << q.size() << "\n";
                    break;
                }
            }
            if (flag) continue;
            n_visited[ny][nx] = n_visited[y][x] + 1;
            q.push({ ny,nx });
        }
    }
}
void go_bfs(int y, int x, int g_n) {
    queue<pair<int, int>> q;
    q.push({ y,x });
    g_visited[g_n][y][x] = 1;
    while (q.size()) {
        tie(y, x) = q.front();
        q.pop();
        for (int i = 0;i < 4;i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];

            if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if (g_visited[g_n][ny][nx] || arr[ny][nx] == 'G') continue;
            g_visited[g_n][ny][nx] = g_visited[g_n][y][x] + 1;
            q.push({ ny,nx });
        }
    }
}
bool comp(pair<int, int> a, pair<int, int> b) {
    int ay = abs(a.first - door.first);
    int ax = abs(a.second - door.second);
    int by = abs(b.first - door.first);
    int bx = abs(b.second - door.second);

    return (ay + ax) < (by + bx);
}
int main(int argc, char** argv)
{
    cin >> n >> m;
    for (int i = 0;i < n;i++) {
        for (int j = 0;j < m;j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'N') {
                nam = { i,j };
            }
            else if (arr[i][j] == 'D') {
                door = { i,j };
            }
            else if (arr[i][j] == 'G') {
                ghost.push_back({ i,j });
            }
        }
    }
    sort(ghost.begin(), ghost.end(), comp);
    for (int i = 0;i < ghost.size();i++) {
        if (i >= 8) {
            break;
        }
        //cout << ghost[i].first << ":" << ghost[i].second <<":"<<i << '\n';
        go_bfs(ghost[i].first, ghost[i].second, i);
    }
    nam_bfs(nam.first, nam.second);
    //if(flag){
    //    cout<< "No";
    //    return 0;
    //}
    //for (int i = 0;i < 8;i++) {

    //    go_bfs(ghost[i].first, ghost[i].second, i);
    //    //for(int k = 0;k < n;k++){
    //    //   for(int j = 0;j < m;j++){
    //    //       cout<<g_visited[i][k][j] <<' ';
    //    //     }
    //    //   cout<<'\n';
    //    //}
    //    //cout<<"-----------------\n";
    //}

    //cout<<"------------------nam\n";
    //for(int i = 0;i < n;i++){
    //    for(int j = 0;j < m;j++){
    //        cout<<n_visited[i][j] <<' ';
    //    }
    //    cout<<'\n';
    //}
    if (n_visited[door.first][door.second] == 0) cout << "No";
    else cout << "Yes";

    return 0;
}
#endif 
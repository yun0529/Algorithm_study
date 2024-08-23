#include <bits/stdc++.h>
using namespace std;

int r, c, visited[1504][1504], ret = 0, dist = 0;

int dx[] = { 0,1,0,-1 };
int dy[] = { -1,0,1,0 };
char arr[1504][1504];
bool flag = false;
vector <pair< int, int >> a;
queue<pair<int, int>> q;

//void dfs(int y, int x, int cnt) {
//    visited[y][x] = 1;
//    for (int i = 0; i < 4; i++) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//
//        if (nx < 0 || ny < 0 || nx >= c || ny >= r) continue;
//        if (visited[ny][nx]) continue;
//        //if (abs(a[cnt].first - ny) + abs(a[cnt].second - nx) > dist)continue;
//
//        if (arr[ny][nx] == '.') dfs(ny, nx, cnt); 
//        else if (arr[y][x] == '.' && arr[ny][nx] == 'X') { 
//            arr[ny][nx] = '.'; 
//            visited[ny][nx] = 1;
//        }
//        else if (arr[ny][nx] == 'L') {
//            flag = true;
//            return;
//        }
//    }
//}

void bfs(int y, int x) {
    q.push({ y, x});
    //visited[y][x] = 1;
    //int x, y;
    while (q.size()) {
        tie(y, x) = q.front();
        q.pop();
        visited[y][x] = 1;
        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= c || ny >= r) continue;
            if (visited[ny][nx]) continue;
            //visited[ny][nx] = 1;

            if (arr[ny][nx] == 'L') {
                //cout << "d";
                flag = true;
                return;
            }

            if (arr[ny][nx] == '.') q.push({ ny,nx });
            else if (arr[ny][nx] == 'X' && (arr[y][x] == '.' || arr[y][x] == 'L')) {
                arr[ny][nx] = '.';
                visited[ny][nx] = 1;
                //cout << 'f';
            }
            
        }
    }
}

void moveD(int y, int x, int cnt) {
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];

        if (nx < 0 || ny < 0 || nx >= c || ny >= r) continue;
        if (visited[ny][nx]) continue;
        //if (abs(a[cnt].first - ny) + abs(a[cnt].second - nx) > dist)continue;

        if (arr[ny][nx] == '.') dfs(ny, nx, cnt);
        else if (arr[y][x] == '.' && arr[ny][nx] == 'X') {
            arr[ny][nx] = '.';
            visited[ny][nx] = 1;
        }
        else if (arr[ny][nx] == 'L') {
            flag = true;
            return;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'L') a.push_back({ i,j });
        }
    }
    dist = (abs(a[0].first - a[1].first) + abs(a[0].second - a[1].second));

    while (true) {
        fill(&visited[0][0], &visited[0][0] + 1504 * 1504, 0);

        dfs(a[0].first, a[0].second, 0);
        dfs(a[1].first, a[1].second, 1);
        q.push({ a[0].first, a[0].second });

        
        /*bfs(a[0].first, a[0].second);
        if (flag) break;
        bfs(a[1].first, a[1].second);*/
        // Ãâ·Â
        //for (int i = 0; i < r; i++) {
        //    for (int j = 0; j < c; j++) {
        //        cout << arr[i][j] << " ";
        //    }
        //    cout << '\n';
        //}
        //cout << '\n';
        if (flag) break;
        ret++;
        
    }
    cout << ret;
    return 0;
}
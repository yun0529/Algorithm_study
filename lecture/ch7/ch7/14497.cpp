//#include <bits/stdc++.h>
//using namespace std;
//
//char arr[304][304];
//int visited[304][304], n, m, ret = 0, flag = 0;
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//pair<int, int> ju, cho;
//
//void bfs(int y, int x) {
//    queue<pair<int, int>> q;
//    q.push({ y, x});
//    visited[y][x] = 1;
//    fill(&visited[0][0], &visited[0][0] + 304 * 304, 0);
//    while (q.size()) {
//        //y = get<0>(q.front());
//        //x = get<1>(q.front());
//        //int cnt = get<2>(q.front());
//        //cout << "x : " << x <<", " << "y : " << y << '\n';
//        tie(y, x) = q.front();
//        q.pop();
//        for (int i = 0; i < 4; i++) {
//            int nx = x + dx[i];
//            int ny = y + dy[i];
//            //int cnt_cur = cnt;
//            if (arr[ny][nx] == '#') {
//                //cout << "d";
//                flag = 1;
//                return;
//            }
//
//            if (nx <= 0 || ny <= 0 || nx > m || ny > n) continue;
//            if (visited[ny][nx]) continue;
//            visited[ny][nx] = visited[y][x] + 1;
//            
//            if (arr[ny][nx] == '1') { 
//                //cout << ny << ", " << nx << " , " << cnt_cur << '\n';
//                arr[ny][nx] = '0';
//            }
//            else if(arr[ny][nx] == '0') q.push({ ny,nx });
//            //visited[ny][nx] = 0;
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    cin >> n >> m;
//    cin >> ju.first >> ju.second;
//    cin >> cho.first >> cho.second;
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= m; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    while (true) {
//        ret++;
//        bfs(ju.first, ju.second);
//        if (flag) break;
//    }
//    cout << ret;
//
//    return 0;
//}
//
////int ret2 = 0;
////void dfs(int y, int x) {
////    visited[y][x] = 1;
////    if (arr[y][x] == '1') {
////        arr[y][x] = 0;
////        return;
////    }
////    for (int i = 0; i < 4; i++) {
////        int nx = x + dx[i];
////        int ny = y + dy[i];
////
////        if (nx <= 0 || ny <= 0 || nx > m || ny > n) continue;
////        if (visited[ny][nx]) continue;
////        //visited[ny][nx] = 1;
////        dfs(ny, nx);
////    }
////}
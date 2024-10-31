//#include<iostream>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, m, arr[5][5], visited[5][5], ret;
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//vector<pair<int, int>> v;
//
//// void bfs(int y, int x){ // -> dfs 필요...
////     queue <pair<int,int>> q;
////     q.push({y,x});
////     visited[y][x] = 1;
////     while(q.size()){
////         tie(y,x) = q.front();
////         q.pop();
//
////         for(int i =0;i < 4;i++){
////             int ny = y + dy[i];
////             int nx = x + dx[i];
//
////             if(ny < 1 || nx < 1 || ny >= n+1 || nx >= n+1) continue;
////             if(visited[ny][nx] || arr[ny][nx] == 1) continue;
////             visited[ny][nx] = visited[y][x] + 1;
////             q.push({ny,nx});
////         }
////     }
//
////     return;
//// }
//
//void dfs(int y, int x, int idx) {
//    if (v[idx].first == y && v[idx].second == x) {
//        //cout<<"x : y : idx , " << x<<" : "<<y<< " : " << idx<< '\n';
//        if (idx == m - 1) {
//            ret++;
//            return;
//        }
//        idx++;
//    }
//    visited[y][x] = 1;
//    for (int i = 0; i < 4; i++) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//
//        if (ny < 1 || nx < 1 || ny >= n + 1 || nx >= n + 1) continue;
//        if (visited[ny][nx] || arr[ny][nx] == 1) continue;
//        dfs(ny, nx, idx);
//    }
//    visited[y][x] = 0;
//}
//
//int main(int argc, char** argv)
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//
//    cin >> n >> m;
//
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= n; j++) {
//            cin >> arr[i][j];
//        }
//    }
//    for (int i = 0; i < m; i++) {
//        int a, b;
//        cin >> a >> b;
//        v.push_back({ a,b });
//    }
//
//    //bfs(v[0].first, v[0].second);
//    dfs(v[0].first, v[0].second, 1);
//    // for(int i =1;i <= n;i++){
//    //     for(int j = 1;j <= n;j++){
//    //        cout<<visited[i][j] <<' ';
//    //     }
//    //     cout<<'\n';
//    // }
//    // for(int i =1;i < m;i++){
//    //    // 마지막 경우의수 계산
//    //     cout<<visited[v[i].first][v[i].second] <<'\n';
//    //     ret = ret + visited[v[i].first][v[i].second];
//    // }
//    cout << ret;
//
//    return 0;
//}
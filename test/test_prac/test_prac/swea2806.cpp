//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//
//int n, cnt;
//int visited[12][12];
//
//bool check(int y, int x) {
//    if (visited[y][x]) {
//        return false;
//    }
//    for (int i = 0; i < n; i++) {
//        if (visited[y][i]) return false; // 가로
//        if (visited[i][x]) return false; // 세로
//        if (y + i < n && x + i < n) { // 대각선 오른쪽 밑
//            if(visited[y + i][x + i]) return false;
//        }
//        if (y - i >= 0 && x + i < n) { // 대각선 오른쪽 위
//            if(visited[y - i][x+i]) return false;
//        }
//        if (y + i < n && x - i >= 0) { // 대각선 왼쪽 밑
//            if(visited[y + i][x - i]) return false;
//        }
//        if (y - i >= 0 && x - i >= 0) { // 대각선 왼쪽 위
//            if(visited[y - i][x - i]) return false;
//        }
//    }
//    return true;
//}
//
//void dfs(int y, int queen) {
//    if (queen == n) {
//        cnt++;
//        return;
//    }
//    for (int i = 0; i < n; i++) {
//        if (check(y, i)) {
//            visited[y][i] = 1;
//            dfs(y + 1, queen + 1);
//            visited[y][i] = 0;
//            //cout << y << " : " << i << " : " << queen << '\n';
//        }
//    }
//}
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//    cin >> T;
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> n;
//        cnt = 0;
//
//        dfs(0, 0);
//        cout << "#" << test_case << " " << cnt << '\n';
//
//    }
//    return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
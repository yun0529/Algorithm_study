////#include <bits/stdc++.h>
////using namespace std;
////
////int r, c, visited[24][24], cnt = 0, alp[27], ret = 0;
////int dx[] = { 0,1,0,-1 };
////int dy[] = { -1,0,1,0 };
////
////char arr[24][24];
//////bool flag = false;
////string str = "";
////
////void dfs(int y, int x, int value) {
////	//visited[y][x] = 1;
////	bool flag = false;
////	for (int i = 0; i < 4; i++) {
////		int ny = y + dy[i];
////		int nx = x + dx[i];
////		if (ny >= r || nx >= c || ny < 0 || nx < 0) continue;
////		//char nextA = arr[ny][nx];
////		if (alp[arr[ny][nx] - 'A']) continue;
////
////		flag = true;
////		alp[arr[ny][nx] - 'A'] = 1;
////		dfs(ny, nx, value + 1);
////		alp[arr[ny][nx] - 'A'] = 0;
////	}
////	if (!flag) {
////		ret = max(ret, value);
////		//for (int i = 0; i < 26; i++) {
////		//	cout << alp[i] << ' ';
////		//}cout << '\n';
////		return;
////	}
////}
////
////int main() {
////	ios_base::sync_with_stdio(false);
////	cin.tie(NULL); cout.tie(NULL);
////
////	cin >> r >> c;
////
////	for (int i = 0; i < r; i++) {
////		for (int j = 0; j < c; j++) {
////			cin >> arr[i][j];
////		}
////	}
////	alp[arr[0][0] - 'A'] = 1;
////	dfs(0, 0, 1);
////
////	cout << ret;
////	return 0;
////}
//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int R, C, ret, ny, nx;
//char a[21][21];
//const int dy[] = { -1, 0, 1, 0 };
//const int dx[] = { 0, 1, 0, -1 };
//void go(int y, int x, int num, int cnt) {
//    ret = max(ret, cnt);
//    for (int i = 0; i < 4; i++) {
//        ny = y + dy[i], nx = x + dx[i];
//        if (ny < 0 || ny >= R || nx < 0 || nx >= C) continue;
//        int _next = (1 << (int)(a[ny][nx] - 'A'));
//        // C : 1+2+4 = 7 & 4 = 4 -> true
//        // 이런식으로 & 연산자를 활용하여 방문 체크 
//        if ((num & _next) == 0) // 방문하지 않았다면
//            // 매게변수에서 바로 합 연산자로 다음 알파벳을 더함.
//            go(ny, nx, num | _next, cnt + 1);
//    }
//    return;
//}
//
//// 30개 이하정도는 비트마스킹 가능
//// A -> 1, B -> 2, C -> 4 로 표현
//int main() {
//    cin >> R >> C;
//    for (int i = 0; i < R; i++) {
//        for (int j = 0; j < C; j++) {
//            cin >> a[i][j];
//        }
//    }
//    go(0, 0, 1 << (int)(a[0][0] - 'A'), 1);
//    cout << ret << '\n';
//    return 0;
//}
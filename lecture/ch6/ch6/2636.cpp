//#include <bits/stdc++.h>
//using namespace std;
//int a[104][104], visited[104][104];
//int dy[] = { -1,0,1,0 }, dx[] = { 0,1,0,-1 };
//int n, m, cnt, cnt2;
//vector <pair<int, int>>v;
//void go(int y, int x) {
//    visited[y][x] = 1;
//    if (a[y][x] == 1) { // ġ�� ã���� ����
//        v.push_back({ y,x });
//        return;
//    }
//    for (int i = 0; i < 4; i++) {
//        int ny = y + dy[i];
//        int nx = x + dx[i];
//        if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx]) continue;
//        go(ny, nx);
//    }
//    return;
//}
//
//
//int main() {
//    cin >> n >> m;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            cin >> a[i][j];
//        }
//    }
//    while (true) {
//        fill(&visited[0][0], &visited[0][0] + 104 * 104, 0);
//        v.clear();
//        go(0, 0);
//        cnt2 = v.size(); // ġ� ��� ���� ������ ��� �����ϸ鼭 �ֽ�ȭ
//        for (pair<int, int> b : v) {
//            a[b.first][b.second] = 0; // ġ�� ���̱�
//        }
//        bool flag = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) { // �ѹ� Ž�� �ϴ� ���� ġ�� ã�� ���̶�� ��
//                if (a[i][j] != 0) flag = 1; // ġ� �ϳ��� �ִ� ���
//            }
//        }
//        cnt++;
//        if (!flag) break;
//    }
//    cout << cnt << '\n' << cnt2 << '\n';
//
//    return 0;
//}
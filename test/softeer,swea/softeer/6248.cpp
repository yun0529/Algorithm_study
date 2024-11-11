//#include<iostream>
//#include<vector>
//#include<stack>
//#include<algorithm>
//using namespace std;
//
//int n, m, ret, st, ed, visited1[100004], visited2[100004];
//
//vector<int> v[100004];
//
//bool dfs1(int s, int t) {
//    if (s != t && !v[s].size()) return false; // 경로없을 때 자기가 자신 가르키는게 아니면
//
//    bool flag = false;
//    for (int it : v[s]) {
//        if (it == t) { // 목적지 도달
//            flag = true;
//            continue;
//        }
//        if (visited1[it]) {
//            flag = true;
//            continue;
//        }
//        visited1[it] = 1;
//        if (!dfs1(it, t)) visited1[it] = 0;
//        else flag = true;
//    }
//    return flag;
//}
//
//bool dfs2(int t, int s) {
//    if (s != t && !v[t].size()) return false; // 경로없을 때 자기가 자신 가르키는게 아니면
//
//    bool flag = false;
//    for (int it : v[t]) {
//        if (it == s) { // 목적지 도달
//            flag = true;
//            continue;
//        }
//        if (visited2[it]) {
//            flag = true;
//            continue;
//        }
//        visited2[it] = 1;
//        if (!dfs2(it, s)) visited2[it] = 0;
//        else flag = true;
//    }
//    return flag;
//}
//
//int main(int argc, char** argv)
//{
//    ios_base::sync_with_stdio(0);
//    cin.tie(NULL); cout.tie(NULL);
//
//    cin >> n >> m;
//    for (int i = 0; i < m; i++) {
//        int x, y;
//        cin >> x >> y;
//        v[x].push_back(y);
//    }
//    cin >> st >> ed;
//    visited1[st] = 1; visited2[ed] = 1;
//    visited1[ed] = 1; visited2[st] = 1;
//    dfs1(st, ed);
//    for (int i = 0; i < n; i++) {
//        if (visited1[i] == 1) {
//            cout << i << ' ';
//        }
//    }
//    cout << '\n';
//    dfs2(ed, st);
//    for (int i = 0; i < n; i++) {
//        if (visited2[i] == 1) {
//            cout << i << ' ';
//        }
//    }cout << '\n';
//    for (int i = 0; i <= n; i++) {
//        if (i == st || i == ed) continue;
//        if (visited1[i] == 1 && visited2[i] == 1) {
//            ret++;
//        }
//    }
//    cout << ret;
//
//    return 0;
//}
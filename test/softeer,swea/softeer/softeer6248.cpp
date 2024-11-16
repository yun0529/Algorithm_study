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
//#include<bits/stdc++.h>
//
//using namespace std;
//
//const int max_int = 100001;
//
//map<int, bool> a1[max_int];
//map<int, bool> a2[max_int];
//int visited1[max_int]; // 출발지 정순
//int visited2[max_int]; // 목적지 역순
////---
//int visited3[max_int]; // 목적지 정순
//int visited4[max_int]; // 출발지 역순
//
//int n, m;
//int from, to;
//using namespace std;
//
//int ret = 0;
//
//void dfs(int p, int* visited, map<int, bool> v[]) {
//    if (visited[p]) { return; }
//    else visited[p] = 1;
//
//    for (auto iter = v[p].begin(); iter != v[p].end(); iter++) {
//        if (iter->second) dfs(iter->first, visited, v);
//    }
//    return;
//}
//
//int main(int argc, char** argv)
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    cin >> n >> m;
//    int x1, y1;
//    for (int i = 0; i < m; i++) {
//        cin >> x1 >> y1;
//        a1[x1 - 1][y1 - 1] = true;
//        a2[y1 - 1][x1 - 1] = true;
//    }
//
//    cin >> from >> to;
//    from--; to--;
//
//    visited1[to] = 1;
//    visited3[from] = 1;
//    dfs(from, visited1, a1);
//    dfs(to, visited2, a2);
//
//    dfs(to, visited3, a1);
//
//    for (int i = 0; i < n; i++) {
//        if (visited3[i]) cout << "i : " << i << '\n';
//    }
//
//    dfs(from, visited4, a2);
//
//    for (int i = 0; i < n; i++) {
//
//        if (visited1[i] && visited2[i] && visited3[i] && visited4[i]) {
//            ret++; //cout << "i: " << i << '\n';
//        }
//    }
//
//    cout << ret - 2;
//    return 0;
//}
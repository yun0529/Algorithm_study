//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//
//int n, ret;
//
//int main(int argc, char** argv)
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    int test_case;
//    int T;
//    cin >> T;
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        int mx = 0, mn = 987654321, mn_idx = 0, mx_idx = 0;
//        cin >> n;
//        vector<int> v;
//        for (int i = 0; i < 100; i++) {
//            int x;
//            cin >> x;
//            v.push_back(x);
//        }
//        for (int i = 0; i < n; i++) {
//            mx = 0; mn = 987654321; mn_idx = 0; mx_idx = 0;
//            for (int j = 0; j < 100; j++) {
//                if (mx < v[j]) {
//                    mx = v[j];
//                    mx_idx = j;
//                }
//                if (mn > v[j]) {
//                    mn = v[j];
//                    mn_idx = j;
//                }
//            }
//            //sort(v.begin(), v.end());
//            v[mx_idx]--;
//            v[mn_idx]++;
//            //cout << v[mx_idx] << " " << v[mn_idx] << '\n';
//        }
//
//        mx = 0; mn = 987654321; mn_idx = 0; mx_idx = 0;
//        for (int j = 0; j < 100; j++) {
//            if (mx < v[j]) {
//                mx = max(mx, v[j]);
//                mx_idx = j;
//            }
//            if (mn > v[j]) {
//                mn = min(mn, v[j]);
//                mn_idx = j;
//            }
//        }
//        ret = v[mx_idx] - v[mn_idx];
//        cout << "#" << test_case << " " << ret << '\n';
//    }
//    return 0;
//}
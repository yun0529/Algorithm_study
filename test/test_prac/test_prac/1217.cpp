//#include<iostream>
//using namespace std;
//
//int n, sq, t_n;
//
//int go(int cnt, int ret) {
//    if (cnt == sq) {
//        return ret;
//    }
//    go(cnt + 1, ret * n);
//}
//
//int main() {
//
//    ios_base::sync_with_stdio(false);
//    cout.tie(NULL); cin.tie(NULL);
//
//    int test_case;
//    int T = 10;
//    //cin >> T;
//
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> t_n >> n >> sq;
//
//        int sum = go(1, n);
//        cout << '#' << t_n << ' ' << sum << '\n';
//    }
//
//    return 0;
//}
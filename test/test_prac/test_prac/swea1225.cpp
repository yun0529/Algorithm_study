//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//
//int n;
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T = 10;
//
//    //cin>>T;
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        queue<int> q;
//        cin >> n;
//        for (int i = 0; i < 8; i++) {
//            int x;
//            cin >> x;
//            q.push(x);
//        }
//
//        int cnt = 1;
//        while (true) {
//            int ret = q.front();
//            q.pop();
//            if (ret - cnt <= 0) {
//                ret = 0;
//            }
//            else {
//                ret -= cnt;
//            }
//            q.push(ret);
//            cnt++;
//            if (cnt > 5) cnt = 1;
//            if (ret <= 0) {
//                break;
//            }
//        }
//
//        cout << "#" << n << " ";
//        while (q.size()) {
//            cout << q.front() << " ";
//            q.pop();
//        }
//        cout << '\n';
//    }
//    return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
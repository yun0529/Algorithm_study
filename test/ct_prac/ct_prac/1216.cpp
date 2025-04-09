////#include<iostream>
////#include<bits/stdc++.h>
////
////using namespace std;
////int n_t;
////char arr[104][104];
////
////int main(int argc, char** argv)
////{
////   int test_case;
////   int T = 10;
////
////   //cin>>T;
////
////   for (test_case = 1; test_case <= T; ++test_case)
////   {
////      cin >> n_t;
////      int cnt = 0;
////      int mx = 0;
////      stack<int> s;
////
////      for (int i = 0; i < 100; i++) {
////         for (int j = 0; j < 100; j++) {
////            cin >> arr[i][j];
////         }
////      }
////      bool en_flag = false;
////      for (int n = 100; n >= 2; n--) {
////         s = stack<int>();
////         for (int i = 0; i < 100; i++) {
////            for (int j = 0; j < 100; j++) {
////               bool flag = true;
////               //cin >> arr[i][j];
////               s.push(arr[i][j]);
////
////               if (j >= n - 1) {
////                  char srr[104];
////                  for (int k = 0; k < n; k++) { // 빼서 배열에 저장
////                     srr[k] = s.top();
////                     s.pop();
////                  }
////                  reverse(&srr[0], &srr[0] + n);
////
////                  for (int k = 0; k < n; k++) { // 비교
////                     if (arr[i][j - k] != srr[k]) {
////                        flag = false;
////                     }
////                  }
////                  if (flag) {
////                     if (mx > n) {
////                        en_flag = true;
////                        break;
////                     }
////                     mx = max(mx, n);
////                  }
////                  for (int k = 0; k < n; k++) { // 다시 저장
////                     s.push(srr[k]);
////                  }
////               }
////            }
////            if (en_flag) break;
////         }
////         if (en_flag) break;
////      }
////      
////      //cout << cnt << '\n';
////      en_flag = false;
////      for (int n = 100; n >= 1; n--) {
////         s = stack<int>();
////         for (int j = 0; j < 100; j++) {
////            for (int i = 0; i < 100; i++) {
////               bool flag = true;
////               s.push(arr[i][j]);
////
////               if (i >= n - 1) {
////                  int srr[104];
////                  for (int k = 0; k < n; k++) { // 빼서 배열에 저장
////                     srr[k] = s.top();
////                     s.pop();
////                  }
////                  reverse(&srr[0], &srr[0] + n);
////                  for (int k = 0; k < n; k++) { // 비교
////                     if (arr[i - k][j] != srr[k]) {
////                        flag = false;
////                     }
////                  }
////                  if (flag) {
////                     if (mx > n) {
////                        en_flag = true;
////                        break;
////                     }
////                     mx = max(mx, n);
////                  }
////                  for (int k = 0; k < n; k++) { // 다시 저장
////                     s.push(srr[k]);
////                  }
////               }
////            }
////            if (en_flag) break;
////         }
////         if (en_flag) break;
////      }
////      
////
////      cout << "#" << n_t << " " << mx << '\n';
////   }
////
////   return 0;//정상종료시 반드시 0을 리턴해야합니다.
////}
//
//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//int main(void)
//{
//    for (int t = 1; t <= 10; t++)
//    {
//        vector<string> v;
//        int n, max = 0;
//        string s;
//        bool flag = true;
//
//        cin >> n;
//
//        for (int i = 0; i < 100; i++)
//        {
//            cin >> s;
//            v.push_back(s);
//        }
//
//        n = 100;
//
//        while (flag)
//        {
//            //row check
//            for (int i = 0; i < 100; i++)
//            {
//                for (int j = 0; j <= 100 - n; j++)
//                {
//                    bool rowKeep = true;
//                    for (int k = 0; k < n / 2; k++)
//                    {
//                        if (v[i][j + k] != v[i][j + n - k - 1])
//                        {
//                            rowKeep = false;
//                        }
//                    }
//                    if (rowKeep)
//                    {
//                        max = n;
//                        flag = false;
//                        break;
//                    }
//                }
//            }
//
//            //col check
//            for (int i = 0; i <= 100 - n; i++)
//            {
//                for (int j = 0; j < 100; j++)
//                {
//                    bool colKeep = true;
//                    for (int k = 0; k < n / 2; k++)
//                    {
//                        if (v[i + k][j] != v[i + n - k - 1][j])
//                        {
//                            colKeep = false;
//                        }
//                    }
//                    if (colKeep)
//                    {
//                        max = n;
//                        flag = false;
//                        break;
//                    }
//                }
//            }
//            n--;
//        }
//        cout << "#" << t << " " << max << endl;
//    }
//    return 0;
//}
//#include<iostream>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//int n, arr[1004];
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL); cout.tie(NULL);
//    cin >> T;
//
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> n;
//        for (int i = 0; i < n; i++) {
//            // ���������� ���� �ǹ��� ���� �󸶳� ������ ���
//            cin >> arr[i];
//        }
//        int cnt = 0;
//        for (int i = 2; i < n; i++) {
//            int ret = 0;
//            bool flag = true;
//            for (int j = i - 2; j <= i + 2; j++) {
//                if (arr[j] < arr[i]) {
//                    ret = max(ret, arr[j]);
//                }
//                else if (i != j && arr[j] >= arr[i]) {
//                    flag = false;
//                    continue;
//                }
//            }
//            if (flag) {
//                cnt += arr[i] - ret;
//            }
//        }
//        cout << "#" << test_case << ' ' << cnt << '\n';
//    }
//
//    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
//}
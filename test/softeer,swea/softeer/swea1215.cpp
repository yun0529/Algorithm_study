//#include<iostream>
//#include<bits/stdc++.h>
//
//using namespace std;
//int n;
//char arr[10][10];
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T = 10;
//
//    //cin>>T;
//
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> n;
//        int cnt = 0;
//        stack<int> s;
//        for (int i = 0; i < 8; i++) {
//            for (int j = 0; j < 8; j++) {
//                bool flag = true;
//                cin >> arr[i][j];
//                s.push(arr[i][j]);
//
//                if (j >= n - 1) {
//                    char srr[10];
//                    for (int k = 0; k < n; k++) { // ���� �迭�� ����
//                        srr[k] = s.top();
//                        s.pop();
//                    }
//                    reverse(&srr[0], &srr[0] + n);
//                    //for (int k = 0; k < n; k++) { // ��
//                    //    cout << arr[i][j - k];
//                    //}cout << '\n';
//                    //for (int k = 0; k < n; k++) { // ��
//                    //    cout << srr[k];
//                    //}cout << '\n';
//
//                    for (int k = 0; k < n; k++) { // ��
//                        if (arr[i][j - k] != srr[k]) {
//                            flag = false;
//                        }
//                    }
//                    if (flag) cnt++;
//                    for (int k = 0; k < n; k++) { // ��
//                        s.push(srr[k]);
//                    }
//                }
//            }
//        }
//        //cout << cnt << '\n';
//        for (int j = 0; j < 8; j++) {
//            for (int i = 0; i < 8; i++) {
//                bool flag = true;
//                s.push(arr[i][j]);
//
//                if (i >= n - 1) {
//                    int srr[10];
//                    for (int k = 0; k < n; k++) { // ���� �迭�� ����
//                        srr[k] = s.top();
//                        s.pop();
//                    }
//                    reverse(&srr[0], &srr[0] + n);
//                    for (int k = 0; k < n; k++) { // ��
//                        if (arr[i - k][j] != srr[k]) {
//                            flag = false;
//                        }
//                    }
//                    if (flag) cnt++;
//                    for (int k = 0; k < n; k++) { // ��
//                        s.push(srr[k]);
//                    }
//                }
//            }
//        }
//        cout << "#" << test_case << " " << cnt << '\n';
//    }
//
//    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
//}
//#include<iostream>
//#include<algorithm>
//
//using namespace std;
//int n, arr[50][50];
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//    cin >> T;
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        cin >> n;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < n; j++) {
//                char c;
//                cin >> c;
//                arr[i][j] = c - '0';
//            }
//        }
//
//        int cnt = 1; // �⺻ 1��
//        int sum = 0;
//        int a = 1;
//        for (int i = 0; i < n; i++) { // ������ ���ϱ�
//            if (i <= n / 2) {
//                for (int j = n / 2; j <= n / 2 + i; j++) {
//                    sum += arr[i][j];
//                    //cout << arr[i][j] << " + ";
//                }
//                //cout << '\n';
//            }
//            else {
//                for (int j = n / 2; j < n - a; j++) {
//                    sum += arr[i][j];
//                    //cout << arr[i][j] << " ++ ";
//                }
//                a++;
//                //cout << '\n';
//            }
//            
//        }
//        //cout << '\n'; cout << '\n';
//        a = 0;
//        for (int i = 0; i < n; i++) { // ���� ���ϱ�
//            if (i <= n / 2) {
//                for (int j = n / 2; j >= n/2 - i; j--) {
//                    sum += arr[i][j];
//                    //cout << arr[i][j] << " + ";
//                }
//            }
//            else {
//                
//                for (int j = n / 2; j > 0 + a; j--) {
//                    sum += arr[i][j];
//                    
//                    //cout << arr[i][j] << " + ";
//                }
//                a++;
//            }
//
//        }
//        int minus = 0;
//        for (int i = 0; i < n; i++) {
//            minus += arr[i][n / 2];
//        }
//        //cout << "\n\n" << sum - minus;
//        
//        cout << "#" << test_case << " " << sum - minus << '\n';
//        
//    }
//    return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
//}
//#include<iostream>
//
//using namespace std;
//int arr[104][104], psum_col[104], psum_raw[104], tc;
//int col_max, raw_max, dia_max1, dia_max2, ret;
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T = 10;
//
//    //cin>>T;
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        fill(&arr[0][0], &arr[0][0] + 104 * 104, 0);
//        dia_max1 = 0; dia_max2 = 0; ret = 0; col_max = 0; raw_max = 0;
//        cin >> tc;
//        for (int i = 1; i <= 100; i++) {
//
//            fill(&psum_col[0], &psum_col[0] + 104, 0);
//            for (int j = 1; j <= 100; j++) {
//                cin >> arr[i][j];
//                psum_col[j] = psum_col[j - 1] + arr[i][j];
//                if (i == j) {
//                    dia_max1 += arr[i][j];
//                }
//            }
//            col_max = max(col_max, psum_col[100]);
//        }
//        for (int i = 1; i <= 100; i++) {
//            fill(&psum_raw[0], &psum_raw[0] + 104, 0);
//            for (int j = 1; j <= 100; j++) {
//                psum_raw[j] = psum_raw[j - 1] + arr[j][i];
//                if (i + j == 101) {
//                    dia_max2 += arr[j][i];
//                }
//            }
//            raw_max = max(raw_max, psum_raw[100]);
//        }
//        ret = max(col_max, raw_max);
//        ret = max(ret, dia_max1);
//        ret = max(ret, dia_max2);
//        cout << "#" << tc << " " << ret << '\n';
//    }
//    return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
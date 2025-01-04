//#include<iostream>
//#include <stack>
//#include<algorithm>
//
//using namespace std;
//int n, m, arr[54][104],ret;
//
//char c;
//
//int change_code(string str) {
//    int code = 0;
//    if (str == "0001101") {
//        code = 0;
//    }
//    else if (str == "0011001") { // 1
//        code = 1;
//    }
//    else if (str == "0010011") { // 2
//        code = 2;
//    }
//    else if (str == "0111101") { // 3
//        code = 3;
//    }
//    else if (str == "0100011") { // 4
//        code = 4;
//    }
//    else if (str == "0110001") { // 5
//        code = 5;
//    }
//    else if (str == "0101111") { // 6
//        code = 6;
//    }
//    else if (str == "0111011") { // 7
//        code = 7;
//    }
//    else if (str == "0110111") { // 8
//        code = 8;
//    }
//    else if (str == "0001011") { // 9
//        code = 9;
//    }
//    return code;
//}
//
//int main(int argc, char** argv)
//{
//    int test_case;
//    int T;
//    cin >> T;
//    for (test_case = 1; test_case <= T; ++test_case)
//    {
//        fill(&arr[0][0], &arr[0][0] + 54 * 104, 0);
//        cin >> n >> m;
//  
//        int x = 0, y = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m; j++) {
//                cin >> c;
//                arr[i][j] = c - '0';
//            }
//        }
//        //------
//        int code[8];
//        bool flag = true;
//        for (int i = n - 1; i >= 0; i--) {
//            //cout << i << '\n';
//            for (int j = m - 1; j >= 0; j--) {
//                //cout << i << " : " << j << '\n';
//                if (arr[i][j] == 1) {
//                    y = i; x = j;
//                    //cout << "--- " << y << " : " << x << '\n';
//                    flag = false;
//                    break;
//                }
//            }
//            if (!flag) break;
//        }
//        //cout << y << " : " << x << '\n';
//        x -= 55;
//        //cout << "--- " << y << " : " << x << '\n';
//        int cnt = 0, code_cnt = 0;
//        for (int i = 0; i < 56; i++) {
//            int secur[7];
//            secur[cnt++] = arr[y][x + i];
//            if (cnt == 7) {
//                string str = "";
//                for (int j = 0; j < 7; j++) {
//                    str += secur[j] +'0';
//                }
//                code[code_cnt] = change_code(str);
//                code_cnt++;
//                
//                fill(&secur[0], &secur[0] + 7, 0);
//                cnt = 0;
//            }
//        }
//        ret = (code[0] + code[2] + code[4] + code[6]) * 3 + code[1] + code[3] + code[5] + code[7];
//        if (ret % 10 == 0) {
//            cout << "#" << test_case << " " << code[0] + code[2] + code[4] + code[6] + code[1] + code[3] + code[5] + code[7] << '\n';
//        }
//        else {
//            cout << "#" << test_case << " " << 0 << '\n';
//        }
//    }
//    return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
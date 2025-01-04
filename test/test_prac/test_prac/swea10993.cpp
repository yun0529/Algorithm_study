//#include<iostream>
//#include<bits/stdc++.h>
//
//using namespace std;
//
//
//
//int main(int argc, char** argv)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int test_case;
//	int T;
//	
//	cin >> T;
//	
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int n;
//		double x[1004] = { 0, }, y[1004] = { 0, }, s[1004] = { 0, };
//		string atk[1004];
//
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> x[i] >> y[i] >> s[i];
//		}
//		for (int i = 0; i < n; i++) {
//			double max_atk = s[i]; // 자신 영향력을 초기값으로 설정
//			int max_atk_cnt = 0;
//			int max_atk_num = i;
//			cout << "\n=-=============" << i+1 << '\n';
//			for (int j = 0; j < n; j++) {
//				if (j != i) { // 자신과 비교 X
//					int dx = x[j] - x[i]; int dy = y[j] - y[i];
//					double j_atk = s[j] / (pow(dx,2) + pow(dy,2));
//					
//					if(max_atk < j_atk){ // 상대의 영향력이 크다면
//						max_atk = j_atk;
//						max_atk_num = j;
//					}else if (j_atk != s[i] && max_atk == j_atk) { // 내 도시가 가장 영향력이 큰 것이 아니고 같은 도시 있는 경우
//						max_atk_num = n + 1;
//					}
//					cout << s[i] << " : " << j_atk << '\n';
//				}
//			}
//			if (max_atk_num == i) { // 내 도시 군주제 유지
//				atk[i] = "K";
//			}
//			else if (max_atk_num == n+1) { // 공화제
//				atk[i] = "D";
//			}
//			else { // 다른 도시에 항복
//				atk[i] = to_string(max_atk_num);
//			}
//		}
//		for (int k = 0; k < n; k++) { // 내가 영향력 미치던 다른 도시들 바꿔야함.
//			if (atk[k] == "K" || atk[k] == "D") continue;
//			while (true) {
//				if (atk[stoi(atk[k])] == "K" || atk[stoi(atk[k])] == "D") break;
//				atk[k] = atk[stoi(atk[k])];
//			}
//		}
//
//		cout << '#'<<test_case << ' ';
//		for (int i = 0; i < n; i++) {
//			if (atk[i] == "K" || atk[i] == "D") cout << atk[i]<<' ';
//			else cout << stoi(atk[i])+1 << ' ';
//		}
//		cout << '\n';
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
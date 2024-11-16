//#include <bits/stdc++.h>
//using namespace std;
//
//int n, sum;
//double arr[10] = { pow(20,2) ,pow(40,2) , pow(60,2) , pow(80,2) , pow(100,2) , pow(120,2) ,
//						pow(140,2) , pow(160,2) , pow(180,2) , pow(200,2)};
//
//int main(void) // 10,000개 -> 1초
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//	int test_case;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		sum = 0;
//		cin >> n; // 1,000,000개 까지 들어옴
//		for (int i = 0; i < n; i++) {
//			int x, y, check = 0;
//			double dist;
//			cin >> x >> y;
//			dist = (double)pow(x, 2) + (double)pow(y, 2);
//			for (int j = 0; j < 10; j++) {
//				if (dist <= arr[j]) {
//					check = 10 - j;
//					break;
//				}
//			}
//			//cout << dist << ' ' << ceil(dist / 20.0) <<' ';
//			//sum += 11 - ceil(dist / 20.0);
//			sum += check;
//			//cout << sum << "\n";
//		}
//		cout << '#' << test_case << ' ' << sum << '\n';
//	}
//	return 0; //정상종료시 반드시 0을 리턴해야 합니다.
//}
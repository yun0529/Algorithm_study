//#include <bits/stdc++.h>
//using namespace std;
//
//int N, team, m, sec, s, sum1 = 0, sum2 = 0, score1 = 0, score2 = 0;
//string t;
//
//int main() {
//	
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		cin >> team >> t;
//		m = stoi(t.substr(0, 2));
//		sec = stoi(t.substr(3, 2));
//
//		if (score1 > score2) {
//			sum1 = sum1 + (m * 60) + sec - s;
//		}
//		else if (score1 < score2) {
//			sum2 = sum2 + (m * 60) + sec - s;
//		}
//		if (team == 1) score1++;
//		else score2++;
//		s = (m * 60) + sec;
//	}
//
//	if (score1 > score2) sum1 = sum1 + (48 * 60) - s;
//	else if (score1 < score2) sum2 = sum2 + (48 * 60) - s;
//
//	//printf("%02d:%02d\n", total_1 / 60, total_1 % 60);
//	//printf("%02d:%02d\n", total_2 / 60, total_2 % 60);
//	cout << setfill('0') << setw(2) << sum1/60 << ":" << setw(2) << sum1%60 << '\n';
//	cout << setfill('0') << setw(2) << sum2/60 << ":" << setw(2) << sum2%60 << '\n';
//
//
//	return 0;
//}
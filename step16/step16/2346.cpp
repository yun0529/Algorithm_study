//#include <iostream>
//#include <deque>
//#include <vector>
//using namespace std;
//
//int main(void) {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, a;
//	deque<pair<int,int>> dq;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		dq.push_back(make_pair(a, i + 1));
//	}
//
//	while (!dq.empty()) {
//		int mv = dq.front().first;
//		cout << dq.front().second << " ";
//		dq.pop_front();
//
//		if (dq.empty()) break;
//
//		if (mv > 0) {
//			for (int i = 0;i < mv - 1;i++)
//			{
//				dq.push_back(dq.front());
//				dq.pop_front();
//			}
//		}
//		else {
//			for (int i = 0; i < -1 * mv; i++)
//			{
//				dq.push_front(dq.back());
//				dq.pop_back();
//			}
//		}
//		
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <deque>
//using namespace std;
//
//int main(void) {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, a, b;
//	deque<int> dq;
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		switch (a) {
//		case 1:
//			cin >> b;
//			dq.push_front(b);
//			break;
//		case 2:
//			cin >> b;
//			dq.push_back(b);
//			break;
//		case 3:
//			if (dq.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << dq.front();
//				dq.pop_front();
//				cout << "\n";
//			}
//			break;
//		case 4:
//			if (dq.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << dq.back();
//				dq.pop_back();
//				cout << "\n";
//			}
//			break;
//		case 5:
//			cout << dq.size() << "\n";
//			break;
//		case 6:
//			if (dq.empty()) {
//				cout << 1 << "\n";
//			}
//			else {
//				cout << 0 << "\n";
//			}
//			break;
//		case 7:
//			if (dq.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << dq.front();
//				cout << "\n";
//			}
//			break;
//		case 8:
//			if (dq.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << dq.back();
//				cout << "\n";
//			}
//			break;
//		}
//		
//	}
//
//	return 0;
//
//}
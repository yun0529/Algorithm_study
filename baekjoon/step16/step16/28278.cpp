//#include <iostream>
//#include <stack>
//using namespace std;
//
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	stack<int> s;
//	int a,n, b;
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		switch (a) {
//		case 1:
//			cin >> b;
//			s.push(b);
//			break;
//		case 2:
//			if (s.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << s.top();
//				s.pop();
//				cout << "\n";
//			}
//			break;
//		case 3:
//			cout << s.size() << "\n";
//			break;
//		case 4:
//			if (s.empty()) {
//				cout << 1 << "\n";
//			}
//			else {
//				cout << 0 << "\n";
//			}
//			break;
//		case 5:
//			if (s.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout<< s.top();
//				cout << "\n";
//			}
//			break;
//		}
//		
//	}
//
//	return 0;
//}
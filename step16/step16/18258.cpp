//#include <iostream>
//#include <queue>
//using namespace std;
//
//enum class Qu {
//	push, pop, size, empty, front, back
//};
//Qu Conv(string a) {
//	if (a == "push") return Qu::push;
//	else if (a == "pop") return Qu::pop;
//	else if (a == "size") return Qu::size;
//	else if (a == "empty") return Qu::empty;
//	else if (a == "front") return Qu::front;
//	else if (a == "back") return Qu::back;
//
//}
//int main(void) {
//
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, b;
//	string a;
//	cin >> n;
//	queue<int> qu;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		switch (Conv(a)) {
//		case Qu::push:
//			cin >> b;
//			qu.push(b);
//			break;
//		case Qu::pop:
//			if (qu.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << qu.front();
//				qu.pop();
//				cout << "\n";
//			}
//			break;
//		case Qu::size:
//			cout <<	qu.size() << "\n";
//			break;
//		case Qu::empty:
//			if (qu.empty()) {
//				cout << 1 << "\n";
//			}
//			else {
//				cout << 0 << "\n";
//			}
//			break;
//		case Qu::front:
//			if (qu.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout<< qu.front();
//				cout << "\n";
//			}
//			break;
//		case Qu::back:
//			if (qu.empty()) {
//				cout << -1 << "\n";
//			}
//			else {
//				cout << qu.back();
//				cout << "\n";
//			}
//			break;
//		}
//	}
//
//	return 0;
//}
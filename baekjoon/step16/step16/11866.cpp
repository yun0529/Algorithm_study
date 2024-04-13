//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main(void) {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	int n, k;
//	cin >> n >> k;
//	queue<int> in;
//	queue<int> prn;
//
//	for (int i = 1; i <= n; i++) {
//		in.push(i);
//	}
//	int count = 1;
//	cout << "<";
//	while (n > 0) {
//		if (count % k == 0) {
//			prn.push(in.front());
//			in.pop();
//			n--;
//		}
//		else {
//			in.push(in.front());
//			in.pop();
//		}
//		count++;
//		
//	}
//
//	int size = prn.size();
//	for (int i = 0; i < size; i++) {
//		cout << prn.front();
//		prn.pop();
//		if (prn.empty()) {
//			cout << ">";
//		}
//		else {
//			cout << ", ";
//		}
//	}
//
//	return 0;
//}
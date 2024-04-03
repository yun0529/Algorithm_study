//#include <iostream>
//#include <deque>
//#include <vector>
//using namespace std;
//
//int main(void) {
//	cin.tie(NULL);
//	ios_base::sync_with_stdio(false);
//
//	//deque<pair<int, int>> dq;
//	deque<int> dq;
//	int what[100000];
//	int n, a, m;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a;
//		what[i] = a;
//	}
//	//std::deque<pair<int, int>>::iterator iter;
//	//iter = dq.begin();
//	for (int i = 0;i < n;i++)
//	{
//		//iter.
//		//cout << *iter << " ";
//		cin >> a;
//		if (what[i] == 0) {
//			dq.push_back(a);
//		}
//	}
//	cin >> m;
//	for (int i = 0; i < m; i++) {
//		cin >> a;
//		dq.push_front(a);
//		what[i] = dq.back();
//		dq.pop_back();
//		//dq.push_back(make_pair(a, 0));
//	}
//	for (int i = 0; i < m; i++) {
//		cout << what[i] << " ";
//	}
//	return 0;
//}
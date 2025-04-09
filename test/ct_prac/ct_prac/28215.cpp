//#include <iostream>
//#include <tuple>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int k, n, arr[54][54], x,y, mx, mn = 987654321;
//pair<int, int> p[54];
//
//void go(vector<pair<int, int>> b) {
//	mx = 0;
//	int ret = 0;
//	for (int j = 0; j < n; j++) {
//		if (k == 1) {
//			ret = abs(b[0].first - p[j].first) + abs(b[0].second - p[j].second);
//		}
//		else if (k == 2) {
//			ret = min(abs(b[0].first - p[j].first) + abs(b[0].second - p[j].second),abs(b[1].first - p[j].first) + abs(b[1].second - p[j].second));
//		}
//		else if (k == 3) {
//			ret = min(abs(b[0].first - p[j].first) + abs(b[0].second - p[j].second), min(abs(b[1].first - p[j].first) + abs(b[1].second - p[j].second)
//								, abs(b[2].first - p[j].first) + abs(b[2].second - p[j].second)));
//		}
//		mx = max(mx, ret);
//		//cout << b[i].first << " : " << b[i].second << " / " << p[j].first << " : " << p[j].second << " / " << mx << '\n';
//	}
//	mn = min(mn, mx);
//}
//
//void combi(int start, vector<pair<int,int>> b) {
//	if (b.size() == k) {
//		go(b);
//		return;
//	}
//	for (int i = start + 1; i < n; i++) {
//		b.push_back(p[i]);
//		combi(start, b);
//		b.pop_back();
//	}
//}
//int main() {
//
//	cin >> n >> k;
//	for (int i = 0; i < n; i++) {
//		cin >> x >> y;
//		p[i] = { x,y };
//	}
//	vector<pair<int, int>> b;
//	combi(-1, b);
//	
//	cout << mn;
//
//	return 0;
//}
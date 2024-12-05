//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//int n, m, arr[54][54], mn = 987654321, sum, ret;
//vector<pair<int, int>> chi, hou;
//vector<vector<int>> combi_chi;
//
//
//int dy[] = { -1,0,1,0 };
//int dx[] = { 0,1,0,-1 };
//
//void combi(int start, vector<int> b) {
//	if (b.size() == m) {
//		combi_chi.push_back(b);
//		return;
//	}
//	for (int i = start+1; i < chi.size(); i++) {
//		b.push_back(i);
//		combi(i, b);
//		b.pop_back();
//	}
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == 2) chi.push_back({ i,j });
//			else if (arr[i][j] == 1)hou.push_back({ i,j });
//		}
//	}
//	vector<int> b;
//	combi(-1, b);
//	for (auto cl : combi_chi) {
//		sum = 0;
//		for (auto i : hou) {
//			int emin = 987654321;
//			for (int c : cl) {
//				ret = abs(chi[c].first - i.first) + abs(chi[c].second - i.second);
//				emin = min(emin, ret);
//			}
//			sum += emin;
//		}
//		mn = min(sum, mn);
//	}
//	
//	cout << mn;
//	return 0;
//}
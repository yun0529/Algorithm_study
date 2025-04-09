//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int n, arr[13][13], visited[13][13], ret = 987654321, mx;
//vector<pair<int, int>> v;
//int dy[] = { -1, 0, 1, 0 };
//int dx[] = { 0, 1, 0, -1 };
//
//void dfs(int idx, int len, int con) {
//	if (idx == v.size()) {
//		if (con > mx) {
//			ret = len;
//			mx = con;
//		}
//		else if (con == mx) {
//			ret = min(len, ret);
//		}
//		return;
//	}
//	//visited[v[idx].first][v[idx].second] = 1;
//
//	for (int i = 0; i < 4; i++) {
//		int ny = v[idx].first;
//		int nx = v[idx].second;
//		int cnt = 0;
//		while (true) {
//			ny += dy[i];
//			nx += dx[i];
//			cnt++; // 전선 길이 증가
//			if (arr[ny][nx] == 1 || arr[ny][nx] == 2) {
//				cnt = 0;
//				break;
//			}
//			if (arr[ny][nx] == 0 && (ny <= 0 || nx <= 0 || ny >= n - 1 || nx >= n - 1)) {
//				break;
//			}
//		}
//
//		if (cnt>0) {
//			ny = v[idx].first;
//			nx = v[idx].second;
//			while (true) {
//				ny += dy[i];
//				nx += dx[i];
//				if (ny < 0 || nx < 0 || ny >= n || nx >= n) {
//					break;
//				}
//				arr[ny][nx] = 2;
//			}
//			dfs(idx + 1, len + cnt, con + 1);
//			ny = v[idx].first;
//			nx = v[idx].second;
//			while (true) {
//				ny += dy[i];
//				nx += dx[i];
//				if (ny < 0 || nx < 0 || ny >= n || nx >= n) {
//					break;
//				}
//				arr[ny][nx] = 0;
//			}
//		}
//	}
//	dfs(idx + 1, len, con);
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		cin >> n;
//		v.clear();
//		ret = 987654321, mx = 0;
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				cin >> arr[i][j];
//				if (arr[i][j] == 1) {
//					if (i == 0 || i == n-1 || j == 0 || j == n - 1) continue;
//					v.push_back({ i,j });
//				}
//			}
//		}
//		dfs(0,0,0);
//		cout << '#' << test_case << ' ' << ret << '\n';
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int r, c, t, flag;
//
//int arr[54][54], visited[54][54];
//vector<pair<int, int>> ac;
//int dy[4] = { -1,0,1,0 };
//int dx[4] = { 0,1,0,-1 };
//
//vector<int> v[54][54];
//
//void dfs(int y, int x, int dust) {
//	//visited[y][x] = 1;
//	flag = 0;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		int cnt = 0;
//		
//		if (ny < 0 || nx < 0 || ny >= r || nx >= c) { continue; }
//		if (arr[ny][nx] == -1)continue;
//
//		for (int j = 0; j < 4; j++) {
//			int ny = y + dy[j];
//			int nx = x + dx[j];
//			if (ny < 0 || nx < 0 || ny >= r || nx >= c) { continue; }
//			if (arr[ny][nx] == -1)continue;
//			cnt++;
//		}
//		if(!arr[ny][nx]) visited[ny][nx] = 1;
//		int n_dust = dust / 5;
//		//arr[ny][nx] += n_dust;
//		//arr[y][x] = dust - (int)(dust / 5) * cnt; // 이미 먼지가 있으면 더해짐, visitied 할 필요 없을듯 함. => 벡터 배열에 저장 후 마지막에 합
//		v[ny][nx].push_back(n_dust);
//		if (!flag) {
//			v[y][x].push_back(dust - (int)(dust / 5) * cnt);
//			flag = 1;
//		}
//		//visited[ny][nx] = 1;
//		//dfs(ny, nx, n_dust);
//	}
//}
//
//void cw_dust(int y, int x) {
//	// 왼쪽 끝
//	for (int i = y+1; i < r; i++) {
//		if (arr[i-1][0] == -1) {
//			continue;
//		}
//		arr[i - 1][0] = arr[i][0];
//	}
//	// 아래
//	for (int i = 1; i < c; i++) {
//		//if (arr[r - 1][i-1] == -1) {
//		//	continue;
//		//}
//		arr[r - 1][i-1] = arr[r-1][i];
//	}
//	// 오른쪽 끝
//	for (int i = r - 1; i > y; i--) {
//		//if (arr[i - 1][c-1] == -1) {
//		//	continue;
//		//}
//		arr[i][c-1] = arr[i - 1][c-1];
//	}
//	// 위
//	for (int i = c - 1; i > 0; i--) {
//		if (arr[y][i - 1] == -1) {
//			arr[y][i] = 0;
//			break;
//		}
//		arr[y][i] = arr[y][i - 1];
//	}
//}
//
//void ccw_dust(int y, int x) {
//	// 왼쪽 끝
//	for (int i = y - 1; i > 0; i--) {
//		if (arr[i][0] == -1) {
//			continue;
//		}
//		arr[i][0] = arr[i - 1][0];
//	}
//	// 위
//	for (int i = 1; i < c; i++) {
//		//if (arr[y][i - 1] == -1) {
//		//	continue;
//		//}
//		arr[0][i - 1] = arr[0][i];
//	}
//	// 오른쪽 끝
//	for (int i = 1; i <= y; i++) {
//		//if (arr[i - 1][c-1] == -1) {
//		//	continue;
//		//}
//		arr[i - 1][c - 1] = arr[i][c - 1];
//	}
//	// 아래
//	for (int i = c - 1; i > 0; i--) {
//		if (arr[y][i - 1] == -1) {
//			arr[y][i] = 0;
//			continue;
//		}
//		arr[y][i] = arr[y][i - 1];
//	}
//	
//}
//
//int main() { // Optimal Page Replacement
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> r >> c >> t;
//
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cin >> arr[i][j];
//			if (arr[i][j] == -1) {
//				ac.push_back({ i,j });
//			}
//		}
//	}
//	for (int k = 0; k < t; k++) {
//		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				if (arr[i][j] == -1 || visited[i][j] || arr[i][j] == 0) continue;
//				dfs(i, j, arr[i][j]);
//			}
//		}
//		
//		fill(&arr[0][0], &arr[0][0] + 54*54, 0);
//		arr[ac[0].first][ac[0].second] = -1;
//		arr[ac[1].first][ac[1].second] = -1;
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				//cout << i << " , " << j << " : ";
//				for (auto a : v[i][j]) {
//					arr[i][j] += a;
//					//cout << a << " ";
//				}
//				//cout << "\n";
//			}
//		}
//		//cout << "\n----------"; cout << '\n';
//		//for (int i = 0; i < r; i++) {
//		//	for (int j = 0; j < c; j++) {
//		//		cout << arr[i][j] << ' ';
//		//	}
//		//	cout << '\n';
//		//}
//
//		int ccw_y = ac[0].first; int ccw_x = ac[0].second;
//		int cw_y = ac[1].first; int cw_x = ac[1].second;
//		cw_dust(cw_y, cw_x);
//		ccw_dust(ccw_y, ccw_x);
//		
//		for (int i = 0; i < r; i++) {
//			for (int j = 0; j < c; j++) {
//				v[i][j].clear();
//			}
//		}
//		//cout << '\n';
//		//for (int i = 0; i < r; i++) {
//		//	for (int j = 0; j < c; j++) {
//		//		cout << arr[i][j] << ' ';
//		//	}
//		//	cout << '\n';
//		//}
//	}
//	int sum = 0;
//	//cout << "\n========================================================"; cout << '\n';
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			//cout << arr[i][j] << ' ';
//			sum += arr[i][j];
//		}
//		//cout << '\n';
//	}
//
//	cout << sum + 2;
//
//	return 0;
//}

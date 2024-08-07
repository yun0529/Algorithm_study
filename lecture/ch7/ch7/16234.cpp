//#include <bits/stdc++.h>
//using namespace std;
//
//int N, L, R;
//int arr[54][54], visited[54][54];
//vector<pair< int, int >> v;
//
//int dy[] = { -1,0,1,0 };
//int dx[] = { 0,1,0,-1 };
//
//int cnt = 1, ret, avg, people;
//
//void go(int y, int x) {
//	//int peopleNum = 0;
//	visited[y][x] = 1;
//	for (int i = 0; i < 4; i++) {
//		int ny = y + dy[i];
//		int nx = x + dx[i];
//		
//		if (ny < 0 || nx < 0 || ny >= N || nx >= N) continue;
//		if (visited[ny][nx]) continue;
//		if (abs(arr[y][x] - arr[ny][nx]) >= L && abs(arr[y][x] - arr[ny][nx]) <= R) {
//			//visited[ny][nx] = 1;
//			//cout << '\n' << ny << " : " << nx << " people count : " << arr[ny][nx] << '\n';
//			//cout << "\nsum1 + " << arr[y][x] << '\n';
//			v.push_back({ ny,nx }); // 조건을 만족하면 연합
//			//cnt++;
//			people += arr[ny][nx];
//			go(ny, nx); // 다음 인구수가 조건을 만족한다면
//		}
//	}
//	//cout << "\nsum2 + " << arr[y][x] << '\n';
//	//v.push_back({ y,x });
//	//return arr[y][x] + peopleNum;
//}
//
//int main() {
//
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL); cout.tie(NULL);
//
//	cin >> N >> L >> R;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	while (cnt) {
//		cnt = 0;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (visited[i][j]) continue;
//				people = arr[i][j];;
//				v = vector<pair<int, int>>();
//				v.push_back({ i,j });
//				//int sum = arr[i][j];
//				go(i, j);
//				if (v.size() > 1) {
//					for (auto p : v) {
//						arr[p.first][p.second] = people / v.size();
//					}
//					cnt = 1;
//					//cout << "\n------\n";
//					//cout << "vector size : " << v.size();
//					//cout << "\npeople : " << people << '\n';
//					/*for (int i = 0; i < N; i++) {
//						for (int j = 0; j < N; j++) {
//							cout << arr[i][j] << " ";
//						}
//						cout << '\n';
//					}*/
//				}
//			}
//			
//			/*if (i == N - 1 && cnt > 0) {
//				i = 0;
//				ret++;
//				cnt = 0;
//				memset(visited, 0, sizeof(visited));
//				cout << "\n=====================================" << ret << "\n";
//			}*/
//		}
//		if (cnt) {
//			memset(visited, 0, sizeof(visited));
//			ret++;
//		}
//	}
//
//	cout << ret;
//
//	return 0;
//}
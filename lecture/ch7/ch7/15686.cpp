#include <bits/stdc++.h>
using namespace std;

int dy[] = {-1,0,1,0};
int dx[] = {0,1,0,-1};

int arr[54][54], visited[54][54], n, m, cnt, ret, sum;
int dist = 200000000;
queue <pair< int, int >> q;

vector<pair<int, int>> num1, num2;
vector<pair<int, int>> house, chicken;
vector<vector<int>> combiChicken;

//void go(int y, int x) { // bfs
//	//visited[y][x] = 1;
//	q.push({ y,x });
//
//	while (q.size()) {
//		//cout << "t";
//		tie(y, x) = q.front(); q.pop();
//		//cout << x << " , " << y << "\n\n";
//		for (int i = 0; i < 4; i++) {
//
//			int ny = y + dy[i];
//			int nx = x + dx[i];
//
//			if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
//			if (visited[ny][nx]) continue;
//
//			visited[ny][nx] = visited[y][x] + 1;
//			//cout << "dist : " << ny << "," << nx << " : " << visited[ny][nx] << '\n';
//			//if (arr[ny][nx] == 1) {
//			//	//cout << "arr : " << ny << " , " << nx << '\n';
//			//	return visited[ny][nx];
//			//}
//			q.push({ ny, nx });
//		}
//	}
//}

void combi(int start, vector<int> b) {
	if (b.size() == m) {
		// bfs 실행 -> 하지 않음
		//sum = 0;
		//for (auto chicken : b) {
		//	fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
		//	q = queue<pair<int, int>>();
		//	go(num2[chicken].first, num2[chicken].second);
		//	
		//	for (auto house : num1) {
		//		sum += visited[house.first][house.second];
		//	}

		//}
		//dist = min(dist, sum);
		combiChicken.push_back(b);
		return;
	}
	for (int i = start + 1; i < chicken.size(); i++) {
		b.push_back(i);
		combi(i, b);
		b.pop_back();
	}
	return;
}


int main() { // 최대 범위 : 50 * 50 = 2500, 2500C13 이 최대다.
	// 제한 조건을 따지면 13 C ? * 100 이다. 이러면 대충 1716 * 100 정도가 나오기 때문에 무식하게 풀 수 있다.

	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) house.push_back({ i,j });
			else if (arr[i][j] == 2) chicken.push_back({ i,j });
		}
	}

	// 치킨 거리는 집(1)을 기준으로 치킨집(2)까지의 거리
	// 
	/*go(0, 1);
	cout << visited[4][3] - visited[0][1] <<'\n';*/
	//go(0, 0);

	// 치킨집 3개를 뽑는 경우

	vector<int> v;
	combi(-1, v);

	for (auto c : combiChicken) {
		sum = 0;
		for (auto h : house) {
			int each_min = 200000000;
			for (auto cList : c) {
				ret = abs(chicken[cList].first - h.first) + abs(chicken[cList].second - h.second);
				each_min = min(each_min, ret);
			}
			sum += each_min;
		}
		dist = min(dist, sum);
	}

	/*for (int i = 0; i < num2.size(); i++) {
		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
		sum = 0;
		for (int j = 0; j < i; j++) {
			for (int k = 0; k < j; k++) {
				sum += go(num2[i].first, num2[i].second);
				cout << num2[i].first << " , " << num2[i].second << " : " << sum << '\n';

				for (int i = 0; i < n; i++) {
					for (int j = 0; j < n; j++) {
						cout << visited[i][j] << " ";
					}
					cout << "\n";
				}

				fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
				sum += go(num2[j].first, num2[j].second);
				cout << num2[j].first << " , " << num2[j].second << " : " << sum << '\n';
				fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
				sum += go(num2[k].first, num2[k].second);
				cout << num2[k].first << " , " << num2[k].second << " : " << sum << '\n';
				dist = min(dist, sum);
			}
		}
		cout << "--------" << '\n';
	}*/

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		fill(&visited[0][0], &visited[0][0] + 54 * 54, 0);
	//		sum = 0;
	//		if (arr[i][j] == 2) {

	//			sum +=go(i, j);
	//			cnt++;
	//		}
	//		
	//		//cout << visited[i][j] << ' ';
	//	}
	//	//cout << "\n";
	//}
	cout << dist;
	return 0;
}